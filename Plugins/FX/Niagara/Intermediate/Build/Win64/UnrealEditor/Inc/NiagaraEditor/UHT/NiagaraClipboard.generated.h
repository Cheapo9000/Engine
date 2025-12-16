// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraClipboard.h"

#ifdef NIAGARAEDITOR_NiagaraClipboard_generated_h
#error "NiagaraClipboard.generated.h already included, missing '#pragma once' in NiagaraClipboard.h"
#endif
#define NIAGARAEDITOR_NiagaraClipboard_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraClipboardFunctionInput;
class UNiagaraDataInterface;
class UNiagaraNodeFunctionCall;
class UNiagaraScript;
class UObject;
class UUserDefinedEnum;
class UUserDefinedStruct;
struct FLinearColor;

// ********** Begin Class UNiagaraClipboardFunctionInput *******************************************
struct Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardFunctionInput(); \
	friend struct ::Z_Construct_UClass_UNiagaraClipboardFunctionInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraClipboardFunctionInput, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraClipboardFunctionInput_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraClipboardFunctionInput)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraClipboardFunctionInput(UNiagaraClipboardFunctionInput&&) = delete; \
	UNiagaraClipboardFunctionInput(const UNiagaraClipboardFunctionInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardFunctionInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardFunctionInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardFunctionInput) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardFunctionInput();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_36_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraClipboardFunctionInput;

// ********** End Class UNiagaraClipboardFunctionInput *********************************************

// ********** Begin Class UNiagaraClipboardRenderer ************************************************
struct Z_Construct_UClass_UNiagaraClipboardRenderer_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardRenderer_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardRenderer(); \
	friend struct ::Z_Construct_UClass_UNiagaraClipboardRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraClipboardRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraClipboardRenderer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraClipboardRenderer_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraClipboardRenderer)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraClipboardRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraClipboardRenderer(UNiagaraClipboardRenderer&&) = delete; \
	UNiagaraClipboardRenderer(const UNiagaraClipboardRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraClipboardRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardRenderer) \
	NO_API virtual ~UNiagaraClipboardRenderer();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_98_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraClipboardRenderer;

// ********** End Class UNiagaraClipboardRenderer **************************************************

// ********** Begin Delegate FOnPastedFunctionCallNode *********************************************
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_126_DELEGATE \
static NIAGARAEDITOR_API void FOnPastedFunctionCallNode_DelegateWrapper(const FScriptDelegate& OnPastedFunctionCallNode, UNiagaraNodeFunctionCall* PastedFunctionCall);


// ********** End Delegate FOnPastedFunctionCallNode ***********************************************

// ********** Begin Class UNiagaraClipboardFunction ************************************************
struct Z_Construct_UClass_UNiagaraClipboardFunction_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardFunction(); \
	friend struct ::Z_Construct_UClass_UNiagaraClipboardFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraClipboardFunction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraClipboardFunction_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraClipboardFunction)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraClipboardFunction(UNiagaraClipboardFunction&&) = delete; \
	UNiagaraClipboardFunction(const UNiagaraClipboardFunction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardFunction) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardFunction();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_120_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraClipboardFunction;

// ********** End Class UNiagaraClipboardFunction **************************************************

// ********** Begin ScriptStruct FNiagaraClipboardScriptVariable ***********************************
struct Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraClipboardScriptVariable_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraClipboardScriptVariable;
// ********** End ScriptStruct FNiagaraClipboardScriptVariable *************************************

// ********** Begin ScriptStruct FNiagaraClipboardCurveCollection **********************************
struct Z_Construct_UScriptStruct_FNiagaraClipboardCurveCollection_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_192_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraClipboardCurveCollection_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraClipboardCurveCollection;
// ********** End ScriptStruct FNiagaraClipboardCurveCollection ************************************

// ********** Begin ScriptStruct FNiagaraClipboardPortableValue ************************************
struct Z_Construct_UScriptStruct_FNiagaraClipboardPortableValue_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraClipboardPortableValue_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


struct FNiagaraClipboardPortableValue;
// ********** End ScriptStruct FNiagaraClipboardPortableValue **************************************

// ********** Begin Class UNiagaraClipboardContent *************************************************
struct Z_Construct_UClass_UNiagaraClipboardContent_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardContent_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_249_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardContent(); \
	friend struct ::Z_Construct_UClass_UNiagaraClipboardContent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraClipboardContent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraClipboardContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraClipboardContent_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraClipboardContent)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_249_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraClipboardContent(UNiagaraClipboardContent&&) = delete; \
	UNiagaraClipboardContent(const UNiagaraClipboardContent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardContent) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardContent();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_246_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_249_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_249_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_249_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraClipboardContent;

// ********** End Class UNiagaraClipboardContent ***************************************************

// ********** Begin Class UNiagaraClipboardEditorScriptingUtilities ********************************
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDynamicValueInput); \
	DECLARE_FUNCTION(execCreateExpressionValueInput); \
	DECLARE_FUNCTION(execCreateDataValueInput); \
	DECLARE_FUNCTION(execCreateLinkedValueInput); \
	DECLARE_FUNCTION(execCreateEnumLinkedValueInput); \
	DECLARE_FUNCTION(execCreateEnumLocalValueInput); \
	DECLARE_FUNCTION(execCreateStructLocalValueInput); \
	DECLARE_FUNCTION(execCreateBoolLocalValueInput); \
	DECLARE_FUNCTION(execCreateIntLocalValueInput); \
	DECLARE_FUNCTION(execCreateVec4LocalValueInput); \
	DECLARE_FUNCTION(execCreateVec3LocalValueInput); \
	DECLARE_FUNCTION(execCreateVec2LocalValueInput); \
	DECLARE_FUNCTION(execCreateQuatLocalValueInput); \
	DECLARE_FUNCTION(execCreateMatrixLocalValueInput); \
	DECLARE_FUNCTION(execCreateFloatLocalValueInput); \
	DECLARE_FUNCTION(execCreateColorLocalValueInput); \
	DECLARE_FUNCTION(execGetTypeName); \
	DECLARE_FUNCTION(execTrySetLocalValueAsInt); \
	DECLARE_FUNCTION(execTryGetLocalValueAsInt); \
	DECLARE_FUNCTION(execTryGetLocalValueAsFloat); \
	DECLARE_FUNCTION(execTryGetInputByName);


struct Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics;
NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraClipboardEditorScriptingUtilities(); \
	friend struct ::Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARAEDITOR_API UClass* ::Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraClipboardEditorScriptingUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), Z_Construct_UClass_UNiagaraClipboardEditorScriptingUtilities_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraClipboardEditorScriptingUtilities)


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARAEDITOR_API UNiagaraClipboardEditorScriptingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraClipboardEditorScriptingUtilities(UNiagaraClipboardEditorScriptingUtilities&&) = delete; \
	UNiagaraClipboardEditorScriptingUtilities(const UNiagaraClipboardEditorScriptingUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARAEDITOR_API, UNiagaraClipboardEditorScriptingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraClipboardEditorScriptingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraClipboardEditorScriptingUtilities) \
	NIAGARAEDITOR_API virtual ~UNiagaraClipboardEditorScriptingUtilities();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_297_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h_300_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraClipboardEditorScriptingUtilities;

// ********** End Class UNiagaraClipboardEditorScriptingUtilities **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraClipboard_h

// ********** Begin Enum ENiagaraClipboardFunctionInputValueMode ***********************************
#define FOREACH_ENUM_ENIAGARACLIPBOARDFUNCTIONINPUTVALUEMODE(op) \
	op(ENiagaraClipboardFunctionInputValueMode::Local) \
	op(ENiagaraClipboardFunctionInputValueMode::Linked) \
	op(ENiagaraClipboardFunctionInputValueMode::Data) \
	op(ENiagaraClipboardFunctionInputValueMode::ObjectAsset) \
	op(ENiagaraClipboardFunctionInputValueMode::Expression) \
	op(ENiagaraClipboardFunctionInputValueMode::Dynamic) \
	op(ENiagaraClipboardFunctionInputValueMode::ResetToDefault) 

enum class ENiagaraClipboardFunctionInputValueMode;
template<> struct TIsUEnumClass<ENiagaraClipboardFunctionInputValueMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraClipboardFunctionInputValueMode>();
// ********** End Enum ENiagaraClipboardFunctionInputValueMode *************************************

// ********** Begin Enum ENiagaraClipboardFunctionScriptMode ***************************************
#define FOREACH_ENUM_ENIAGARACLIPBOARDFUNCTIONSCRIPTMODE(op) \
	op(ENiagaraClipboardFunctionScriptMode::ScriptAsset) \
	op(ENiagaraClipboardFunctionScriptMode::Assignment) 

enum class ENiagaraClipboardFunctionScriptMode;
template<> struct TIsUEnumClass<ENiagaraClipboardFunctionScriptMode> { enum { Value = true }; };
template<> NIAGARAEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraClipboardFunctionScriptMode>();
// ********** End Enum ENiagaraClipboardFunctionScriptMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
