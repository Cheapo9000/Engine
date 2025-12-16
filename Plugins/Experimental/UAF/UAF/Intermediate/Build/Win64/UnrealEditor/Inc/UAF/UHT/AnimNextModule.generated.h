// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/AnimNextModule.h"

#ifdef UAF_AnimNextModule_generated_h
#error "AnimNextModule.generated.h already included, missing '#pragma once' in AnimNextModule.h"
#endif
#define UAF_AnimNextModule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimNextModule **********************************************************
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextModule, UAF_API)


struct Z_Construct_UClass_UAnimNextModule_Statics;
UAF_API UClass* Z_Construct_UClass_UAnimNextModule_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextModule(); \
	friend struct ::Z_Construct_UClass_UAnimNextModule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAF_API UClass* ::Z_Construct_UClass_UAnimNextModule_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNextModule, UAnimNextSharedVariables, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAF"), Z_Construct_UClass_UAnimNextModule_NoRegister) \
	DECLARE_SERIALIZER(UAnimNextModule) \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNextModule(UAnimNextModule&&) = delete; \
	UAnimNextModule(const UAnimNextModule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UAF_API, UAnimNextModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextModule) \
	UAF_API virtual ~UAnimNextModule();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNextModule;

// ********** End Class UAnimNextModule ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_AnimNextModule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
