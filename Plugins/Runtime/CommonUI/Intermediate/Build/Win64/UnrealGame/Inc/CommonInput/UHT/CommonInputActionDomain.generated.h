// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputActionDomain.h"

#ifdef COMMONINPUT_CommonInputActionDomain_generated_h
#error "CommonInputActionDomain.generated.h already included, missing '#pragma once' in CommonInputActionDomain.h"
#endif
#define COMMONINPUT_CommonInputActionDomain_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCommonInputActionDomain *************************************************
struct Z_Construct_UClass_UCommonInputActionDomain_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomain_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputActionDomain(); \
	friend struct ::Z_Construct_UClass_UCommonInputActionDomain_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputActionDomain_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputActionDomain, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputActionDomain_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputActionDomain)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONINPUT_API UCommonInputActionDomain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputActionDomain(UCommonInputActionDomain&&) = delete; \
	UCommonInputActionDomain(const UCommonInputActionDomain&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputActionDomain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputActionDomain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputActionDomain) \
	COMMONINPUT_API virtual ~UCommonInputActionDomain();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputActionDomain;

// ********** End Class UCommonInputActionDomain ***************************************************

// ********** Begin Class UCommonInputActionDomainTable ********************************************
struct Z_Construct_UClass_UCommonInputActionDomainTable_Statics;
COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputActionDomainTable(); \
	friend struct ::Z_Construct_UClass_UCommonInputActionDomainTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONINPUT_API UClass* ::Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputActionDomainTable, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonInput"), Z_Construct_UClass_UCommonInputActionDomainTable_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputActionDomainTable)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONINPUT_API UCommonInputActionDomainTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputActionDomainTable(UCommonInputActionDomainTable&&) = delete; \
	UCommonInputActionDomainTable(const UCommonInputActionDomainTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONINPUT_API, UCommonInputActionDomainTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputActionDomainTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputActionDomainTable) \
	COMMONINPUT_API virtual ~UCommonInputActionDomainTable();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_75_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputActionDomainTable;

// ********** End Class UCommonInputActionDomainTable **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonInput_Public_CommonInputActionDomain_h

// ********** Begin Enum ECommonInputEventFlowBehavior *********************************************
#define FOREACH_ENUM_ECOMMONINPUTEVENTFLOWBEHAVIOR(op) \
	op(ECommonInputEventFlowBehavior::BlockIfActive) \
	op(ECommonInputEventFlowBehavior::BlockIfHandled) \
	op(ECommonInputEventFlowBehavior::NeverBlock) 

enum class ECommonInputEventFlowBehavior;
template<> struct TIsUEnumClass<ECommonInputEventFlowBehavior> { enum { Value = true }; };
template<> COMMONINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommonInputEventFlowBehavior>();
// ********** End Enum ECommonInputEventFlowBehavior ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
