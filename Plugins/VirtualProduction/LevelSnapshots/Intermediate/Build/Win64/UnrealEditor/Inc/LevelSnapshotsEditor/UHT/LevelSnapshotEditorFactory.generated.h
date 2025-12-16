// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/LevelSnapshotEditorFactory.h"

#ifdef LEVELSNAPSHOTSEDITOR_LevelSnapshotEditorFactory_generated_h
#error "LevelSnapshotEditorFactory.generated.h already included, missing '#pragma once' in LevelSnapshotEditorFactory.h"
#endif
#define LEVELSNAPSHOTSEDITOR_LevelSnapshotEditorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelSnapshotEditorFactory **********************************************
struct Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics;
LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotEditorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshotEditorFactory(); \
	friend struct ::Z_Construct_UClass_ULevelSnapshotEditorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTSEDITOR_API UClass* ::Z_Construct_UClass_ULevelSnapshotEditorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSnapshotEditorFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotsEditor"), Z_Construct_UClass_ULevelSnapshotEditorFactory_NoRegister) \
	DECLARE_SERIALIZER(ULevelSnapshotEditorFactory)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSnapshotEditorFactory(ULevelSnapshotEditorFactory&&) = delete; \
	ULevelSnapshotEditorFactory(const ULevelSnapshotEditorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSNAPSHOTSEDITOR_API, ULevelSnapshotEditorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshotEditorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelSnapshotEditorFactory) \
	LEVELSNAPSHOTSEDITOR_API virtual ~ULevelSnapshotEditorFactory();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSnapshotEditorFactory;

// ********** End Class ULevelSnapshotEditorFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Factories_LevelSnapshotEditorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
