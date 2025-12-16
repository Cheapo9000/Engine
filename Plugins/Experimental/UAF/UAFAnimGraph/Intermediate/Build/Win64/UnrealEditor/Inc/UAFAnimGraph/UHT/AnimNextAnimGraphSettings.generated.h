// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNextAnimGraphSettings.h"

#ifdef UAFANIMGRAPH_AnimNextAnimGraphSettings_generated_h
#error "AnimNextAnimGraphSettings.generated.h already included, missing '#pragma once' in AnimNextAnimGraphSettings.h"
#endif
#define UAFANIMGRAPH_AnimNextAnimGraphSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;

// ********** Begin Class UAnimNextAnimGraphSettings ***********************************************
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllowedAssetClasses);


struct Z_Construct_UClass_UAnimNextAnimGraphSettings_Statics;
UAFANIMGRAPH_API UClass* Z_Construct_UClass_UAnimNextAnimGraphSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextAnimGraphSettings(); \
	friend struct ::Z_Construct_UClass_UAnimNextAnimGraphSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimNextAnimGraphSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextAnimGraphSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/UAFAnimGraph"), Z_Construct_UClass_UAnimNextAnimGraphSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextAnimGraphSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("AnimNextAnimGraph");} \



#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UAFANIMGRAPH_API UAnimNextAnimGraphSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextAnimGraphSettings(UAnimNextAnimGraphSettings&&) = delete; \
	UAnimNextAnimGraphSettings(const UAnimNextAnimGraphSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAFANIMGRAPH_API, UAnimNextAnimGraphSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextAnimGraphSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextAnimGraphSettings) \
	UAFANIMGRAPH_API virtual ~UAnimNextAnimGraphSettings();


#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextAnimGraphSettings;

// ********** End Class UAnimNextAnimGraphSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFAnimGraph_Source_UAFAnimGraph_Internal_AnimNextAnimGraphSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
