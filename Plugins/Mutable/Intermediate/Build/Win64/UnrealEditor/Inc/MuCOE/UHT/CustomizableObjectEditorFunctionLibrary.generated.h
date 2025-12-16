// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOE/CustomizableObjectEditorFunctionLibrary.h"

#ifdef CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditorFunctionLibrary_generated_h
#error "CustomizableObjectEditorFunctionLibrary.generated.h already included, missing '#pragma once' in CustomizableObjectEditorFunctionLibrary.h"
#endif
#define CUSTOMIZABLEOBJECTEDITOR_CustomizableObjectEditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObject;
enum class ECustomizableObjectCompilationState : uint8;
enum class ECustomizableObjectOptimizationLevel : uint8;
enum class ECustomizableObjectTextureCompression : uint8;
struct FNewCustomizableObjectParameters;

// ********** Begin ScriptStruct FNewCustomizableObjectParameters **********************************
struct Z_Construct_UScriptStruct_FNewCustomizableObjectParameters_Statics;
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNewCustomizableObjectParameters_Statics; \
	CUSTOMIZABLEOBJECTEDITOR_API static class UScriptStruct* StaticStruct();


struct FNewCustomizableObjectParameters;
// ********** End ScriptStruct FNewCustomizableObjectParameters ************************************

// ********** Begin Class UCustomizableObjectEditorFunctionLibrary *********************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNewCustomizableObject); \
	DECLARE_FUNCTION(execCompileCustomizableObjectSynchronously);


struct Z_Construct_UClass_UCustomizableObjectEditorFunctionLibrary_Statics;
CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectEditorFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTEDITOR_API UClass* ::Z_Construct_UClass_UCustomizableObjectEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectEditor"), Z_Construct_UClass_UCustomizableObjectEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectEditorFunctionLibrary)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECTEDITOR_API UCustomizableObjectEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectEditorFunctionLibrary(UCustomizableObjectEditorFunctionLibrary&&) = delete; \
	UCustomizableObjectEditorFunctionLibrary(const UCustomizableObjectEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECTEDITOR_API, UCustomizableObjectEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectEditorFunctionLibrary) \
	CUSTOMIZABLEOBJECTEDITOR_API virtual ~UCustomizableObjectEditorFunctionLibrary();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_50_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectEditorFunctionLibrary;

// ********** End Class UCustomizableObjectEditorFunctionLibrary ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_CustomizableObjectEditorFunctionLibrary_h

// ********** Begin Enum ECustomizableObjectCompilationState ***************************************
#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTCOMPILATIONSTATE(op) \
	op(ECustomizableObjectCompilationState::None) \
	op(ECustomizableObjectCompilationState::InProgress) \
	op(ECustomizableObjectCompilationState::Completed) \
	op(ECustomizableObjectCompilationState::Failed) 

enum class ECustomizableObjectCompilationState : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectCompilationState> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECTEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizableObjectCompilationState>();
// ********** End Enum ECustomizableObjectCompilationState *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
