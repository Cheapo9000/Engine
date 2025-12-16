// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectEditor.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditor_generated_h
#error "CustomizableObjectEditor.generated.h already included, missing '#pragma once' in CustomizableObjectEditor.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;

// ********** Begin Class UUpdateClassWrapper ******************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDelegatedCallback);


struct Z_Construct_UClass_UUpdateClassWrapper_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassWrapper_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateClassWrapper(); \
	friend struct ::Z_Construct_UClass_UUpdateClassWrapper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UUpdateClassWrapper_NoRegister(); \
public: \
	DECLARE_CLASS2(UUpdateClassWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UUpdateClassWrapper_NoRegister) \
	DECLARE_SERIALIZER(UUpdateClassWrapper)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateClassWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUpdateClassWrapper(UUpdateClassWrapper&&) = delete; \
	UUpdateClassWrapper(const UUpdateClassWrapper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateClassWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateClassWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateClassWrapper) \
	NO_API virtual ~UUpdateClassWrapper();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_68_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h_72_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUpdateClassWrapper;

// ********** End Class UUpdateClassWrapper ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
