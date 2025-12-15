// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PropertyViewBase.h"

#ifdef SCRIPTABLEEDITORWIDGETS_PropertyViewBase_generated_h
#error "PropertyViewBase.generated.h already included, missing '#pragma once' in PropertyViewBase.h"
#endif
#define SCRIPTABLEEDITORWIDGETS_PropertyViewBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Delegate FOnPropertyValueChanged ***********************************************
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_17_DELEGATE \
SCRIPTABLEEDITORWIDGETS_API void FOnPropertyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyValueChanged, FName PropertyName);


// ********** End Delegate FOnPropertyValueChanged *************************************************

// ********** Begin Class UPropertyViewBase ********************************************************
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execGetObject);


struct Z_Construct_UClass_UPropertyViewBase_Statics;
SCRIPTABLEEDITORWIDGETS_API UClass* Z_Construct_UClass_UPropertyViewBase_NoRegister();

#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyViewBase(); \
	friend struct ::Z_Construct_UClass_UPropertyViewBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLEEDITORWIDGETS_API UClass* ::Z_Construct_UClass_UPropertyViewBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ScriptableEditorWidgets"), Z_Construct_UClass_UPropertyViewBase_NoRegister) \
	DECLARE_SERIALIZER(UPropertyViewBase)


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLEEDITORWIDGETS_API UPropertyViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyViewBase(UPropertyViewBase&&) = delete; \
	UPropertyViewBase(const UPropertyViewBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLEEDITORWIDGETS_API, UPropertyViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyViewBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyViewBase) \
	SCRIPTABLEEDITORWIDGETS_API virtual ~UPropertyViewBase();


#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_23_PROLOG
#define FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyViewBase;

// ********** End Class UPropertyViewBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ScriptableEditorWidgets_Public_Components_PropertyViewBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
