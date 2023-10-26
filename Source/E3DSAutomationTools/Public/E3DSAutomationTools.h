// Copyright Eagle 3D Streaming. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FE3DSAutomationToolsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	int CheckForErrors();
	void ShowErrorMessage(FString Message);
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();

private:

	void RegisterMenus();


private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
