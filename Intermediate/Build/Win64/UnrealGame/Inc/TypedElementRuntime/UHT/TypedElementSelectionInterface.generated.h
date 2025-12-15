// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementSelectionInterface.h"

#ifdef TYPEDELEMENTRUNTIME_TypedElementSelectionInterface_generated_h
#error "TypedElementSelectionInterface.generated.h already included, missing '#pragma once' in TypedElementSelectionInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETypedElementSelectionMethod : uint8;
struct FScriptTypedElementHandle;
struct FScriptTypedElementListProxy;
struct FTypedElementIsSelectedOptions;
struct FTypedElementSelectionOptions;

// ********** Begin ScriptStruct FTypedElementIsSelectedOptions ************************************
struct Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics;
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


struct FTypedElementIsSelectedOptions;
// ********** End ScriptStruct FTypedElementIsSelectedOptions **************************************

// ********** Begin ScriptStruct FTypedElementSelectionOptions *************************************
struct Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics;
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


struct FTypedElementSelectionOptions;
// ********** End ScriptStruct FTypedElementSelectionOptions ***************************************

// ********** Begin Interface UTypedElementSelectionInterface **************************************
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected);


struct Z_Construct_UClass_UTypedElementSelectionInterface_Statics;
TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTypedElementSelectionInterface(UTypedElementSelectionInterface&&) = delete; \
	UTypedElementSelectionInterface(const UTypedElementSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementSelectionInterface) \
	virtual ~UTypedElementSelectionInterface() = default;


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UTypedElementSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TYPEDELEMENTRUNTIME_API UClass* ::Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTypedElementSelectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UTypedElementSelectionInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementSelectionInterface() {} \
public: \
	typedef UTypedElementSelectionInterface UClassType; \
	typedef ITypedElementSelectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_163_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_166_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTypedElementSelectionInterface;

// ********** End Interface UTypedElementSelectionInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h

// ********** Begin Enum ETypedElementSelectionMethod **********************************************
#define FOREACH_ENUM_ETYPEDELEMENTSELECTIONMETHOD(op) \
	op(ETypedElementSelectionMethod::Primary) \
	op(ETypedElementSelectionMethod::Secondary) \
	op(ETypedElementSelectionMethod::FromSecondary) 

enum class ETypedElementSelectionMethod : uint8;
template<> struct TIsUEnumClass<ETypedElementSelectionMethod> { enum { Value = true }; };
template<> TYPEDELEMENTRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypedElementSelectionMethod>();
// ********** End Enum ETypedElementSelectionMethod ************************************************

// ********** Begin Enum ETypedElementChildInclusionMethod *****************************************
#define FOREACH_ENUM_ETYPEDELEMENTCHILDINCLUSIONMETHOD(op) \
	op(ETypedElementChildInclusionMethod::None) \
	op(ETypedElementChildInclusionMethod::Immediate) \
	op(ETypedElementChildInclusionMethod::Recursive) 

enum class ETypedElementChildInclusionMethod : uint8;
template<> struct TIsUEnumClass<ETypedElementChildInclusionMethod> { enum { Value = true }; };
template<> TYPEDELEMENTRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ETypedElementChildInclusionMethod>();
// ********** End Enum ETypedElementChildInclusionMethod *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
