// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownEditorMacroCommands.h"

#ifdef AVALANCHEMEDIAEDITOR_AvaRundownEditorMacroCommands_generated_h
#error "AvaRundownEditorMacroCommands.generated.h already included, missing '#pragma once' in AvaRundownEditorMacroCommands.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaRundownEditorMacroCommands_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Rundown_AvaRundownEditorMacroCommands_h

// ********** Begin Enum EAvaRundownEditorMacroCommand *********************************************
#define FOREACH_ENUM_EAVARUNDOWNEDITORMACROCOMMAND(op) \
	op(EAvaRundownEditorMacroCommand::None) \
	op(EAvaRundownEditorMacroCommand::LoadPage) \
	op(EAvaRundownEditorMacroCommand::UnloadPage) \
	op(EAvaRundownEditorMacroCommand::TakeIn) \
	op(EAvaRundownEditorMacroCommand::TakeOut) \
	op(EAvaRundownEditorMacroCommand::ForceTakeOut) \
	op(EAvaRundownEditorMacroCommand::TakeNext) \
	op(EAvaRundownEditorMacroCommand::Continue) \
	op(EAvaRundownEditorMacroCommand::PreviewIn) \
	op(EAvaRundownEditorMacroCommand::PreviewOut) \
	op(EAvaRundownEditorMacroCommand::ForcePreviewOut) \
	op(EAvaRundownEditorMacroCommand::PreviewNext) \
	op(EAvaRundownEditorMacroCommand::ContinuePreview) \
	op(EAvaRundownEditorMacroCommand::TakeToProgram) \
	op(EAvaRundownEditorMacroCommand::StopPageTransition) \
	op(EAvaRundownEditorMacroCommand::StartChannel) \
	op(EAvaRundownEditorMacroCommand::StopChannel) 

enum class EAvaRundownEditorMacroCommand : uint8;
template<> struct TIsUEnumClass<EAvaRundownEditorMacroCommand> { enum { Value = true }; };
template<> AVALANCHEMEDIAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaRundownEditorMacroCommand>();
// ********** End Enum EAvaRundownEditorMacroCommand ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
