// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/EdGraphSchema_CustomizableObject.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_EdGraphSchema_CustomizableObject_generated_h
#error "EdGraphSchema_CustomizableObject.generated.h already included, missing '#pragma once' in EdGraphSchema_CustomizableObject.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_EdGraphSchema_CustomizableObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraphSchema_CustomizableObject ****************************************
struct Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_CustomizableObject_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_CustomizableObject(); \
	friend struct ::Z_Construct_UClass_UEdGraphSchema_CustomizableObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UEdGraphSchema_CustomizableObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphSchema_CustomizableObject, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UEdGraphSchema_CustomizableObject_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphSchema_CustomizableObject)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UEdGraphSchema_CustomizableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphSchema_CustomizableObject(UEdGraphSchema_CustomizableObject&&) = delete; \
	UEdGraphSchema_CustomizableObject(const UEdGraphSchema_CustomizableObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UEdGraphSchema_CustomizableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_CustomizableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_CustomizableObject) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UEdGraphSchema_CustomizableObject();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_23_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphSchema_CustomizableObject;

// ********** End Class UEdGraphSchema_CustomizableObject ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_EdGraphSchema_CustomizableObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
