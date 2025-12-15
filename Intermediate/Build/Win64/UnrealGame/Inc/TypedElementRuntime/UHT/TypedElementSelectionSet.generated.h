// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementSelectionSet.h"

#ifdef TYPEDELEMENTRUNTIME_TypedElementSelectionSet_generated_h
#error "TypedElementSelectionSet.generated.h already included, missing '#pragma once' in TypedElementSelectionSet.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementSelectionSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UInterface;
class UObject;
class UTypedElementSelectionSet;
enum class ETypedElementSelectionMethod : uint8;
struct FScriptTypedElementHandle;
struct FTypedElementIsSelectedOptions;
struct FTypedElementSelectionOptions;
struct FTypedElementSelectionSetState;

// ********** Begin ScriptStruct FTypedElementSelectionNormalizationOptions ************************
struct Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics;
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


struct FTypedElementSelectionNormalizationOptions;
// ********** End ScriptStruct FTypedElementSelectionNormalizationOptions **************************

// ********** Begin ScriptStruct FTypedElementSelectionSetState ************************************
struct Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics;
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


struct FTypedElementSelectionSetState;
// ********** End ScriptStruct FTypedElementSelectionSetState **************************************

// ********** Begin Delegate FOnPreChangeDynamic ***************************************************
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_649_DELEGATE \
static TYPEDELEMENTRUNTIME_API void FOnPreChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnPreChangeDynamic, const UTypedElementSelectionSet* SelectionSet);


// ********** End Delegate FOnPreChangeDynamic *****************************************************

// ********** Begin Delegate FOnChangeDynamic ******************************************************
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_655_DELEGATE \
static TYPEDELEMENTRUNTIME_API void FOnChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnChangeDynamic, const UTypedElementSelectionSet* SelectionSet);


// ********** End Delegate FOnChangeDynamic ********************************************************

// ********** Begin Class UTypedElementSelectionSet ************************************************
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_GetSelectedElementHandles); \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElements); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElements); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected); \
	DECLARE_FUNCTION(execRestoreSelectionState); \
	DECLARE_FUNCTION(execGetCurrentSelectionState); \
	DECLARE_FUNCTION(execGetBottomSelectedObject); \
	DECLARE_FUNCTION(execGetTopSelectedObject); \
	DECLARE_FUNCTION(execGetSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedObjects); \
	DECLARE_FUNCTION(execHasSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedElements); \
	DECLARE_FUNCTION(execHasSelectedElements); \
	DECLARE_FUNCTION(execGetNumSelectedElements); \
	DECLARE_FUNCTION(execClearSelection);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTypedElementSelectionSet, TYPEDELEMENTRUNTIME_API)


struct Z_Construct_UClass_UTypedElementSelectionSet_Statics;
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementSelectionSet(); \
	friend struct ::Z_Construct_UClass_UTypedElementSelectionSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTRUNTIME_API UClass* ::Z_Construct_UClass_UTypedElementSelectionSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementSelectionSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementSelectionSet) \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementSelectionSet(UTypedElementSelectionSet&&) = delete; \
	UTypedElementSelectionSet(const UTypedElementSelectionSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementSelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTypedElementSelectionSet) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementSelectionSet();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_178_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementSelectionSet;

// ********** End Class UTypedElementSelectionSet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
