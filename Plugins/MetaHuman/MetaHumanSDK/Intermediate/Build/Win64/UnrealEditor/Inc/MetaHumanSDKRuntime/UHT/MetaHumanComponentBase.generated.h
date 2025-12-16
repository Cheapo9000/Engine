// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanComponentBase.h"

#ifdef METAHUMANSDKRUNTIME_MetaHumanComponentBase_generated_h
#error "MetaHumanComponentBase.generated.h already included, missing '#pragma once' in MetaHumanComponentBase.h"
#endif
#define METAHUMANSDKRUNTIME_MetaHumanComponentBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanCustomizableBodyPart ************************************
struct Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCustomizableBodyPart_Statics; \
	METAHUMANSDKRUNTIME_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCustomizableBodyPart;
// ********** End ScriptStruct FMetaHumanCustomizableBodyPart **************************************

// ********** Begin Class UMetaHumanComponentBase **************************************************
struct Z_Construct_UClass_UMetaHumanComponentBase_Statics;
METAHUMANSDKRUNTIME_API UClass* Z_Construct_UClass_UMetaHumanComponentBase_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanComponentBase(); \
	friend struct ::Z_Construct_UClass_UMetaHumanComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKRUNTIME_API UClass* ::Z_Construct_UClass_UMetaHumanComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetaHumanSDKRuntime"), Z_Construct_UClass_UMetaHumanComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanComponentBase)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_81_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanComponentBase(UMetaHumanComponentBase&&) = delete; \
	UMetaHumanComponentBase(const UMetaHumanComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKRUNTIME_API, UMetaHumanComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanComponentBase) \
	METAHUMANSDKRUNTIME_API virtual ~UMetaHumanComponentBase();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_77_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanComponentBase;

// ********** End Class UMetaHumanComponentBase ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKRuntime_Public_MetaHumanComponentBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
