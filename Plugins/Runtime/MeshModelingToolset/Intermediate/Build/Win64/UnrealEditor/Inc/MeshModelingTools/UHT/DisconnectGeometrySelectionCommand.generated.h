// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commands/DisconnectGeometrySelectionCommand.h"

#ifdef MESHMODELINGTOOLS_DisconnectGeometrySelectionCommand_generated_h
#error "DisconnectGeometrySelectionCommand.generated.h already included, missing '#pragma once' in DisconnectGeometrySelectionCommand.h"
#endif
#define MESHMODELINGTOOLS_DisconnectGeometrySelectionCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisconnectGeometrySelectionCommand **************************************
struct Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisconnectGeometrySelectionCommand(); \
	friend struct ::Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisconnectGeometrySelectionCommand, UGeometrySelectionEditCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister) \
	DECLARE_SERIALIZER(UDisconnectGeometrySelectionCommand)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UDisconnectGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisconnectGeometrySelectionCommand(UDisconnectGeometrySelectionCommand&&) = delete; \
	UDisconnectGeometrySelectionCommand(const UDisconnectGeometrySelectionCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UDisconnectGeometrySelectionCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisconnectGeometrySelectionCommand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisconnectGeometrySelectionCommand) \
	MESHMODELINGTOOLS_API virtual ~UDisconnectGeometrySelectionCommand();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisconnectGeometrySelectionCommand;

// ********** End Class UDisconnectGeometrySelectionCommand ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
