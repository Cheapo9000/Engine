// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeToolActor.h"

#ifdef XRCREATIVE_XRCreativeToolActor_generated_h
#error "XRCreativeToolActor.generated.h already included, missing '#pragma once' in XRCreativeToolActor.h"
#endif
#define XRCREATIVE_XRCreativeToolActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AXRCreativeToolActor *****************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AXRCreativeToolActor_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeToolActor_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRCreativeToolActor(); \
	friend struct ::Z_Construct_UClass_AXRCreativeToolActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_AXRCreativeToolActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AXRCreativeToolActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_AXRCreativeToolActor_NoRegister) \
	DECLARE_SERIALIZER(AXRCreativeToolActor)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AXRCreativeToolActor(AXRCreativeToolActor&&) = delete; \
	AXRCreativeToolActor(const AXRCreativeToolActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeToolActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeToolActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AXRCreativeToolActor) \
	NO_API virtual ~AXRCreativeToolActor();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AXRCreativeToolActor;

// ********** End Class AXRCreativeToolActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeToolActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
