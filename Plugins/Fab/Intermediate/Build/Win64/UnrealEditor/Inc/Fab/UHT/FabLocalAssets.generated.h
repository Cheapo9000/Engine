// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/FabLocalAssets.h"

#ifdef FAB_FabLocalAssets_generated_h
#error "FabLocalAssets.generated.h already included, missing '#pragma once' in FabLocalAssets.h"
#endif
#define FAB_FabLocalAssets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFabLocalAssets **********************************************************
struct Z_Construct_UClass_UFabLocalAssets_Statics;
FAB_API UClass* Z_Construct_UClass_UFabLocalAssets_NoRegister();

#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabLocalAssets(); \
	friend struct ::Z_Construct_UClass_UFabLocalAssets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FAB_API UClass* ::Z_Construct_UClass_UFabLocalAssets_NoRegister(); \
public: \
	DECLARE_CLASS2(UFabLocalAssets, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fab"), Z_Construct_UClass_UFabLocalAssets_NoRegister) \
	DECLARE_SERIALIZER(UFabLocalAssets) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FAB_API UFabLocalAssets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFabLocalAssets(UFabLocalAssets&&) = delete; \
	UFabLocalAssets(const UFabLocalAssets&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FAB_API, UFabLocalAssets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabLocalAssets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFabLocalAssets) \
	FAB_API virtual ~UFabLocalAssets();


#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_14_PROLOG
#define FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_INCLASS_NO_PURE_DECLS \
	FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFabLocalAssets;

// ********** End Class UFabLocalAssets ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Fab_0_0_8_HostProject_Plugins_Fab_Source_Fab_Private_Utilities_FabLocalAssets_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
