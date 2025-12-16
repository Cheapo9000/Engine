// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionLibraries/TakeMetaDataTagsFunctionLibrary.h"

#ifdef VIRTUALCAMERA_TakeMetaDataTagsFunctionLibrary_generated_h
#error "TakeMetaDataTagsFunctionLibrary.generated.h already included, missing '#pragma once' in TakeMetaDataTagsFunctionLibrary.h"
#endif
#define VIRTUALCAMERA_TakeMetaDataTagsFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeMetaDataTagsFunctionLibrary *****************************************
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllTakeMetaDataTags); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_LevelPath); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_Description); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_TimecodeOut); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_TimecodeIn); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_Timestamp); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_TakeNumber); \
	DECLARE_FUNCTION(execGetTakeMetaDataTag_Slate);


struct Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics;
VIRTUALCAMERA_API UClass* Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeMetaDataTagsFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIRTUALCAMERA_API UClass* ::Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeMetaDataTagsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), Z_Construct_UClass_UTakeMetaDataTagsFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTakeMetaDataTagsFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeMetaDataTagsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeMetaDataTagsFunctionLibrary(UTakeMetaDataTagsFunctionLibrary&&) = delete; \
	UTakeMetaDataTagsFunctionLibrary(const UTakeMetaDataTagsFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeMetaDataTagsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeMetaDataTagsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeMetaDataTagsFunctionLibrary) \
	NO_API virtual ~UTakeMetaDataTagsFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeMetaDataTagsFunctionLibrary;

// ********** End Class UTakeMetaDataTagsFunctionLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCamera_Source_VirtualCamera_Public_FunctionLibraries_TakeMetaDataTagsFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
