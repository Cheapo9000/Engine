// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DetailRowMenuContext.h"

#ifdef PROPERTYEDITOR_DetailRowMenuContext_generated_h
#error "DetailRowMenuContext.generated.h already included, missing '#pragma once' in DetailRowMenuContext.h"
#endif
#define PROPERTYEDITOR_DetailRowMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDetailRowMenuContext ****************************************************
struct Z_Construct_UClass_UDetailRowMenuContext_Statics;
PROPERTYEDITOR_API UClass* Z_Construct_UClass_UDetailRowMenuContext_NoRegister();

#define FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDetailRowMenuContext(); \
	friend struct ::Z_Construct_UClass_UDetailRowMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROPERTYEDITOR_API UClass* ::Z_Construct_UClass_UDetailRowMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UDetailRowMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PropertyEditor"), Z_Construct_UClass_UDetailRowMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UDetailRowMenuContext)


#define FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROPERTYEDITOR_API UDetailRowMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDetailRowMenuContext(UDetailRowMenuContext&&) = delete; \
	UDetailRowMenuContext(const UDetailRowMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROPERTYEDITOR_API, UDetailRowMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDetailRowMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDetailRowMenuContext) \
	PROPERTYEDITOR_API virtual ~UDetailRowMenuContext();


#define FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_12_PROLOG
#define FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDetailRowMenuContext;

// ********** End Class UDetailRowMenuContext ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PropertyEditor_Public_DetailRowMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
