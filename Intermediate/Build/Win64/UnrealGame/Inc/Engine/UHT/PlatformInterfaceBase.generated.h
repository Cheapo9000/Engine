// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlatformInterfaceBase.h"

#ifdef ENGINE_PlatformInterfaceBase_generated_h
#error "PlatformInterfaceBase.generated.h already included, missing '#pragma once' in PlatformInterfaceBase.h"
#endif
#define ENGINE_PlatformInterfaceBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlatformInterfaceDelegateResult;

// ********** Begin ScriptStruct FPlatformInterfaceData ********************************************
struct Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPlatformInterfaceData;
// ********** End ScriptStruct FPlatformInterfaceData **********************************************

// ********** Begin ScriptStruct FPlatformInterfaceDelegateResult **********************************
struct Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPlatformInterfaceDelegateResult;
// ********** End ScriptStruct FPlatformInterfaceDelegateResult ************************************

// ********** Begin Delegate FPlatformInterfaceDelegate ********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_99_DELEGATE \
ENGINE_API void FPlatformInterfaceDelegate_DelegateWrapper(const FScriptDelegate& PlatformInterfaceDelegate, FPlatformInterfaceDelegateResult const& Result);


// ********** End Delegate FPlatformInterfaceDelegate **********************************************

// ********** Begin ScriptStruct FDelegateArray ****************************************************
struct Z_Construct_UScriptStruct_FDelegateArray_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDelegateArray_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDelegateArray;
// ********** End ScriptStruct FDelegateArray ******************************************************

// ********** Begin Class UPlatformInterfaceBase ***************************************************
struct Z_Construct_UClass_UPlatformInterfaceBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceBase(); \
	friend struct ::Z_Construct_UClass_UPlatformInterfaceBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPlatformInterfaceBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformInterfaceBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPlatformInterfaceBase_NoRegister) \
	DECLARE_SERIALIZER(UPlatformInterfaceBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformInterfaceBase(UPlatformInterfaceBase&&) = delete; \
	UPlatformInterfaceBase(const UPlatformInterfaceBase&) = delete; \
	ENGINE_API virtual ~UPlatformInterfaceBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_115_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformInterfaceBase;

// ********** End Class UPlatformInterfaceBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceBase_h

// ********** Begin Enum EPlatformInterfaceDataType ************************************************
#define FOREACH_ENUM_EPLATFORMINTERFACEDATATYPE(op) \
	op(PIDT_None) \
	op(PIDT_Int) \
	op(PIDT_Float) \
	op(PIDT_String) \
	op(PIDT_Object) \
	op(PIDT_Custom) 

enum EPlatformInterfaceDataType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlatformInterfaceDataType>();
// ********** End Enum EPlatformInterfaceDataType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
