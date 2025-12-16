// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimFactory.h"

#ifdef CONTEXTUALANIMATIONEDITOR_ContextualAnimFactory_generated_h
#error "ContextualAnimFactory.generated.h already included, missing '#pragma once' in ContextualAnimFactory.h"
#endif
#define CONTEXTUALANIMATIONEDITOR_ContextualAnimFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UContextualAnimFactory ***************************************************
struct Z_Construct_UClass_UContextualAnimFactory_Statics;
CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimFactory(); \
	friend struct ::Z_Construct_UClass_UContextualAnimFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTEXTUALANIMATIONEDITOR_API UClass* ::Z_Construct_UClass_UContextualAnimFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UContextualAnimFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimationEditor"), Z_Construct_UClass_UContextualAnimFactory_NoRegister) \
	DECLARE_SERIALIZER(UContextualAnimFactory)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UContextualAnimFactory(UContextualAnimFactory&&) = delete; \
	UContextualAnimFactory(const UContextualAnimFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimFactory) \
	NO_API virtual ~UContextualAnimFactory();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UContextualAnimFactory;

// ********** End Class UContextualAnimFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
