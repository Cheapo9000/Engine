// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/FavoriteFilterContainer.h"

#ifdef LEVELSNAPSHOTSEDITOR_FavoriteFilterContainer_generated_h
#error "FavoriteFilterContainer.generated.h already included, missing '#pragma once' in FavoriteFilterContainer.h"
#endif
#define LEVELSNAPSHOTSEDITOR_FavoriteFilterContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFavoriteFilterContainer *************************************************
struct Z_Construct_UClass_UFavoriteFilterContainer_Statics;
LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFavoriteFilterContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFavoriteFilterContainer(); \
	friend struct ::Z_Construct_UClass_UFavoriteFilterContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSNAPSHOTSEDITOR_API UClass* ::Z_Construct_UClass_UFavoriteFilterContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UFavoriteFilterContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshotsEditor"), Z_Construct_UClass_UFavoriteFilterContainer_NoRegister) \
	DECLARE_SERIALIZER(UFavoriteFilterContainer)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFavoriteFilterContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFavoriteFilterContainer(UFavoriteFilterContainer&&) = delete; \
	UFavoriteFilterContainer(const UFavoriteFilterContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFavoriteFilterContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFavoriteFilterContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFavoriteFilterContainer) \
	NO_API virtual ~UFavoriteFilterContainer();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFavoriteFilterContainer;

// ********** End Class UFavoriteFilterContainer ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FavoriteFilterContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
