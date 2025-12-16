// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageAppLibrary.h"

#ifdef EPICSTAGEAPP_StageAppLibrary_generated_h
#error "StageAppLibrary.generated.h already included, missing '#pragma once' in StageAppLibrary.h"
#endif
#define EPICSTAGEAPP_StageAppLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStageAppFunctionLibrary *************************************************
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRemoteControlWebInterfacePort); \
	DECLARE_FUNCTION(execGetAPIVersion);


struct Z_Construct_UClass_UStageAppFunctionLibrary_Statics;
EPICSTAGEAPP_API UClass* Z_Construct_UClass_UStageAppFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageAppFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UStageAppFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EPICSTAGEAPP_API UClass* ::Z_Construct_UClass_UStageAppFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UStageAppFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicStageApp"), Z_Construct_UClass_UStageAppFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UStageAppFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageAppFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStageAppFunctionLibrary(UStageAppFunctionLibrary&&) = delete; \
	UStageAppFunctionLibrary(const UStageAppFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageAppFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageAppFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageAppFunctionLibrary) \
	NO_API virtual ~UStageAppFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStageAppFunctionLibrary;

// ********** End Class UStageAppFunctionLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
