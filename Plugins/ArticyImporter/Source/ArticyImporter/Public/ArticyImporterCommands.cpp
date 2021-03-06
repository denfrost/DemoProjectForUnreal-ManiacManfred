//  
// Copyright (c) articy Software GmbH & Co. KG. All rights reserved.  
// Licensed under the MIT license. See LICENSE file in the project root for full license information.  
//
#include "ArticyImporterPrivatePCH.h"
#include "ArticyImporterCommands.h"

//#define LOCTEXT_NAMESPACE "FArticyImporterModule"

void FArticyImporterCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "ArticyImporter", "Bring up ArticyImporter window", EUserInterfaceActionType::Button, FInputGesture());
}

//#undef LOCTEXT_NAMESPACE
