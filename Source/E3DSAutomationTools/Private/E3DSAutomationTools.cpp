// Copyright Eagle 3D Streaming. All Rights Reserved.

#include "E3DSAutomationTools.h"
#include "E3DSAutomationToolsStyle.h"
#include "E3DSAutomationToolsCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "ISettingsModule.h"
#include "E3dsAutomationToolsSettings.h"

static const FName E3DSAutomationToolsTabName("E3DSAutomationTools");

#define LOCTEXT_NAMESPACE "FE3DSAutomationToolsModule"

void FE3DSAutomationToolsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FE3DSAutomationToolsStyle::Initialize();
	FE3DSAutomationToolsStyle::ReloadTextures();

	FE3DSAutomationToolsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FE3DSAutomationToolsCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FE3DSAutomationToolsModule::PluginButtonClicked),
		FCanExecuteAction());
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "E3dsAutomationTools_Settings",
			LOCTEXT("RuntimeSettingsName", "E3DS Automation Tools Settings"), LOCTEXT("RuntimeSettingsDescription", "Configure E3DS Automation Tools Settings"),
			GetMutableDefault<UE3dsAutomationToolsSettings>());
	}
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FE3DSAutomationToolsModule::RegisterMenus));
}

void FE3DSAutomationToolsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "E3dsAutomationTools_Settings");
	}


	UToolMenus::UnregisterOwner(this);

	FE3DSAutomationToolsStyle::Shutdown();

	FE3DSAutomationToolsCommands::Unregister();
}

void FE3DSAutomationToolsModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	UE3dsAutomationToolsSettings* Plugin_Settings = GetMutableDefault<UE3dsAutomationToolsSettings>();

	int ErrorCheckResult = CheckForErrors();
	if (ErrorCheckResult == 0) {
		FString Temp_ExecutablePath = "\"" + FPaths::ConvertRelativePathToFull(Plugin_Settings->ExecutablePath.FilePath) + "\"";

		Temp_ExecutablePath = FPaths::ConvertRelativePathToFull(Plugin_Settings->ExecutablePath.FilePath);

		UE_LOG(LogTemp, Log, TEXT("ExecutablePath: %s"), *Temp_ExecutablePath);
		const TCHAR* cmdPath = *(Temp_ExecutablePath);
		UE_LOG(LogTemp, Log, TEXT("cmdPath: %s"), cmdPath);

		FString cmdParams = "";


		FString EngineFolderPath_Full = "\"" + FPaths::ConvertRelativePathToFull(Plugin_Settings->EngineFolderPath) + "\"";

		cmdParams.Append(" --EngineFolder=");
		cmdParams.Append(EngineFolderPath_Full);


		FString EngineExePath_Full = "\"" + FPaths::ConvertRelativePathToFull(Plugin_Settings->EngineExePath) + "\"";



		cmdParams.Append(" --UEExePath=");
		cmdParams.Append(EngineExePath_Full);



		cmdParams.Append(" --UProjectPath=");
		//cmdParams.Append(Plugin_Settings->UprojectPath);


		FString UProjectPath_Full = "\"" + FPaths::ConvertRelativePathToFull(Plugin_Settings->UProjectPath.FilePath) + "\"";


		cmdParams.Append(UProjectPath_Full);
		cmdParams.Append(" --ApiKey=");
		cmdParams.Append(Plugin_Settings->ApiKey);
		//cmdParams.Append(" --CloudStorage=");
		//cmdParams.Append(Plugin_Settings->CloudStorage);
		//cmdParams.Append(" ");
		//cmdParams.Append(Plugin_Settings->UserName);
		cmdParams.Append(" --E3DSStreamingAppName=");
		cmdParams.Append(Plugin_Settings->E3DSStreamingAppName);





		FString PathTo7Zip = "\"" + FPaths::ConvertRelativePathToFull(Plugin_Settings->PathTo7Zip.FilePath) + "\"";

		UE_LOG(LogTemp, Log, TEXT("PathTo7Zip: %s"), *PathTo7Zip);
		cmdParams.Append("  --PathTo7Zip=");
		cmdParams.Append(PathTo7Zip);


		cmdParams.Append(" --PackagingFolder=");
		cmdParams.Append(Plugin_Settings->PackagingFolder.Path);
		cmdParams.Append(" --DoDedicatedServerBuild=");
		if (Plugin_Settings->DoDedicatedServerBuild) {
			cmdParams.Append("true");

			cmdParams.Append(" --E3DSDedicatedServerAppName=");
			cmdParams.Append(Plugin_Settings->E3DSDedicatedServerAppName);

		}
		else {
			cmdParams.Append("false");
		}



		// Get the path to the .uplugin file of your plugin
		//FString PluginFilePath = MyPluginModule->GetPluginFilePath();

		// Get the root folder of the plugin where the .uplugin file exists
		FString ProjectPluginsDir2 = FPaths::ProjectPluginsDir();

		FString PluginRootFolder2 = ProjectPluginsDir2 + "E3DSAutomationTools/files";



		// Now, you have the root folder of your plugin
		UE_LOG(LogTemp, Warning, TEXT("Plugin Root Folder: %s"), *PluginRootFolder2);

		FString MyString = "C:\\0.ue4\\auotmationELPLugin\\Plugins";
		const TCHAR* OptionalWorkingDirectory = *PluginRootFolder2;
		//cmdParams = "";
		FProcHandle WorkHandle = FPlatformProcess::CreateProc(
			cmdPath,
			*cmdParams,
			false,
			false,
			false,
			nullptr,
			0,
			OptionalWorkingDirectory
			,
			nullptr,
			nullptr);
	}
}

void FE3DSAutomationToolsModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FE3DSAutomationToolsCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
#if (ENGINE_MAJOR_VERSION==4)
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FE3DSAutomationToolsCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
#endif
#if (ENGINE_MAJOR_VERSION==5)
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FE3DSAutomationToolsCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
#endif
	}
}
int FE3DSAutomationToolsModule::CheckForErrors() {
	UE3dsAutomationToolsSettings* Plugin_Settings = GetMutableDefault<UE3dsAutomationToolsSettings>();
	FString ErrorMessage = "";
	bool bHasError = false;
	if (Plugin_Settings->ExecutablePath.FilePath.IsEmpty()) {
		ErrorMessage.Append("Executable file path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->EngineFolderPath.IsEmpty()) {
		ErrorMessage.Append("Engine folder path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->EngineExePath.IsEmpty()) {
		ErrorMessage.Append("Engine .exe file path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->UProjectPath.FilePath.IsEmpty()) {
		ErrorMessage.Append("UProject file path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->PathTo7Zip.FilePath.IsEmpty()) {
		ErrorMessage.Append("7Zip.exe file path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->ApiKey.IsEmpty()) {
		ErrorMessage.Append("API key is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->E3DSStreamingAppName.IsEmpty()) {
		ErrorMessage.Append("App name is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->PackagingFolder.Path.IsEmpty()) {
		ErrorMessage.Append("Packaging folder path is empty\n");
		bHasError = true;
	}
	if (Plugin_Settings->DoDedicatedServerBuild) {
		if(Plugin_Settings->E3DSDedicatedServerAppName.IsEmpty())
		ErrorMessage.Append("Dedicated server app name is empty\n");
		bHasError = true;
	}

	if (bHasError) {
		ShowErrorMessage(ErrorMessage);
		return 1;
	}
	return 0;
}
void FE3DSAutomationToolsModule::ShowErrorMessage(FString Message) {
FText DialogText = FText::Format(
	LOCTEXT("Error in Settings", "could not run Automation Tool:\n {0}"),
	FText::FromString(Message)
);
FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FE3DSAutomationToolsModule, E3DSAutomationTools)