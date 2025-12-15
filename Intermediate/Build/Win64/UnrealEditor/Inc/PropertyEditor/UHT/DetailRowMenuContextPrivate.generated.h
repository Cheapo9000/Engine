// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailRowMenuContextPrivate.h"

#ifdef PROPERTYEDITOR_DetailRowMenuContextPrivate_generated_h
#error "DetailRowMenuContextPrivate.generated.h already included, missing '#pragma once' in DetailRowMenuContextPrivate.h"
#endif
#define PROPERTYEDITOR_DetailRowMenuContextPrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailRowMenuContextPrivate *********************************************
struct Z_Construct_UClass_UDetailRowMenuContextPrivate_Statics;
PROPERTYEDITOR_API UClass* Z_Construct_UClass_UDetailRowMenuContextPrivate_NoRegister();

#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailRowMenuContextPrivate(); \
	friend struct ::Z_Construct_UClass_UDetailRowMenuContextPrivate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYEDITOR_API UClass* ::Z_Construct_UClass_UDetailRowMenuContextPrivate_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailRowMenuContextPrivate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyEditor"), Z_Construct_UClass_UDetailRowMenuContextPrivate_NoRegister) \
	DECLARE_SERIALIZER(UDetailRowMenuContextPrivate)


#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDetailRowMenuContextPrivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailRowMenuContextPrivate(UDetailRowMenuContextPrivate&&) = delete; \
	UDetailRowMenuContextPrivate(const UDetailRowMenuContextPrivate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDetailRowMenuContextPrivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailRowMenuContextPrivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailRowMenuContextPrivate) \
	NO_API virtual ~UDetailRowMenuContextPrivate();


#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_12_PROLOG
#define FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailRowMenuContextPrivate;

// ********** End Class UDetailRowMenuContextPrivate ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PropertyEditor_Private_DetailRowMenuContextPrivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
