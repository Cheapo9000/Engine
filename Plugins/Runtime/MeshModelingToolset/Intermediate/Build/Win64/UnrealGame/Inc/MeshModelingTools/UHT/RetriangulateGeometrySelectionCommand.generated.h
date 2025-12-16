// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commands/RetriangulateGeometrySelectionCommand.h"

#ifdef MESHMODELINGTOOLS_RetriangulateGeometrySelectionCommand_generated_h
#error "RetriangulateGeometrySelectionCommand.generated.h already included, missing '#pragma once' in RetriangulateGeometrySelectionCommand.h"
#endif
#define MESHMODELINGTOOLS_RetriangulateGeometrySelectionCommand_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URetriangulateGeometrySelectionCommand ***********************************
struct Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetriangulateGeometrySelectionCommand(); \
	friend struct ::Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister(); \
public: \
	DECLARE_CLASS2(URetriangulateGeometrySelectionCommand, UGeometrySelectionEditCommand, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister) \
	DECLARE_SERIALIZER(URetriangulateGeometrySelectionCommand)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API URetriangulateGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URetriangulateGeometrySelectionCommand(URetriangulateGeometrySelectionCommand&&) = delete; \
	URetriangulateGeometrySelectionCommand(const URetriangulateGeometrySelectionCommand&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, URetriangulateGeometrySelectionCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetriangulateGeometrySelectionCommand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetriangulateGeometrySelectionCommand) \
	MESHMODELINGTOOLS_API virtual ~URetriangulateGeometrySelectionCommand();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URetriangulateGeometrySelectionCommand;

// ********** End Class URetriangulateGeometrySelectionCommand *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
