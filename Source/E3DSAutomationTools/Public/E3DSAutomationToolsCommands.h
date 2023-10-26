// Copyright Eagle 3D Streaming. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "E3DSAutomationToolsStyle.h"

class FE3DSAutomationToolsCommands : public TCommands<FE3DSAutomationToolsCommands>
{
public:

	FE3DSAutomationToolsCommands()
		: TCommands<FE3DSAutomationToolsCommands>(TEXT("E3DSAutomationTools"), NSLOCTEXT("Contexts", "E3DSAutomationTools", "E3DSAutomationTools Plugin"), NAME_None, FE3DSAutomationToolsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
