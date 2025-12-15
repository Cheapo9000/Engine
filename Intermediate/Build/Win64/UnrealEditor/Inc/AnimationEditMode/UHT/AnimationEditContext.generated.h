// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationEditContext.h"

#ifdef ANIMATIONEDITMODE_AnimationEditContext_generated_h
#error "AnimationEditContext.generated.h already included, missing '#pragma once' in AnimationEditContext.h"
#endif
#define ANIMATIONEDITMODE_AnimationEditContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAnimationEditContext ************************************************
struct Z_Construct_UClass_UAnimationEditContext_Statics;
ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditContext_NoRegister();

#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONEDITMODE_API UAnimationEditContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationEditContext(UAnimationEditContext&&) = delete; \
	UAnimationEditContext(const UAnimationEditContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONEDITMODE_API, UAnimationEditContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEditContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEditContext) \
	virtual ~UAnimationEditContext() = default;


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimationEditContext(); \
	friend struct ::Z_Construct_UClass_UAnimationEditContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONEDITMODE_API UClass* ::Z_Construct_UClass_UAnimationEditContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationEditContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimationEditMode"), Z_Construct_UClass_UAnimationEditContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimationEditContext)


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimationEditContext() {} \
public: \
	typedef UAnimationEditContext UClassType; \
	typedef IAnimationEditContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationEditContext;

// ********** End Interface UAnimationEditContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
