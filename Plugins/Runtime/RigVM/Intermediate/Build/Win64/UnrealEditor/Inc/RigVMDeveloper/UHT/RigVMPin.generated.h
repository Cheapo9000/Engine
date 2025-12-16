// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMPin.h"

#ifdef RIGVMDEVELOPER_RigVMPin_generated_h
#error "RigVMPin.generated.h already included, missing '#pragma once' in RigVMPin.h"
#endif
#define RIGVMDEVELOPER_RigVMPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UObject;
class URigVMGraph;
class URigVMLink;
class URigVMNode;
class URigVMPin;
class URigVMUnitNode;
class UScriptStruct;
enum class ERigVMPinDefaultValueType : uint8;
enum class ERigVMPinDirection : uint8;

// ********** Begin Class URigVMInjectionInfo ******************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPin); \
	DECLARE_FUNCTION(execGetGraph);


struct Z_Construct_UClass_URigVMInjectionInfo_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInjectionInfo_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMInjectionInfo(); \
	friend struct ::Z_Construct_UClass_URigVMInjectionInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMInjectionInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMInjectionInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMInjectionInfo_NoRegister) \
	DECLARE_SERIALIZER(URigVMInjectionInfo)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMInjectionInfo(URigVMInjectionInfo&&) = delete; \
	URigVMInjectionInfo(const URigVMInjectionInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMInjectionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMInjectionInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMInjectionInfo) \
	RIGVMDEVELOPER_API virtual ~URigVMInjectionInfo();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMInjectionInfo;

// ********** End Class URigVMInjectionInfo ********************************************************

// ********** Begin Class URigVMPin ****************************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTraitPin); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetTargetLinks); \
	DECLARE_FUNCTION(execGetSourceLinks); \
	DECLARE_FUNCTION(execGetLinkedTargetPins); \
	DECLARE_FUNCTION(execGetLinkedSourcePins); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execFindSubPin); \
	DECLARE_FUNCTION(execGetAllSubPinsRecursively); \
	DECLARE_FUNCTION(execGetSubPins); \
	DECLARE_FUNCTION(execGetOriginalPinFromInjectedNode); \
	DECLARE_FUNCTION(execFindLinkForPin); \
	DECLARE_FUNCTION(execGetPinForLink); \
	DECLARE_FUNCTION(execIsRootPin); \
	DECLARE_FUNCTION(execGetRootPin); \
	DECLARE_FUNCTION(execGetParentPin); \
	DECLARE_FUNCTION(execGetEnum); \
	DECLARE_FUNCTION(execGetParentScriptStruct); \
	DECLARE_FUNCTION(execGetScriptStruct); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetCustomWidgetName); \
	DECLARE_FUNCTION(execHasMetaData); \
	DECLARE_FUNCTION(execGetMetaData); \
	DECLARE_FUNCTION(execCanProvideDefaultValue); \
	DECLARE_FUNCTION(execGetDefaultValueType); \
	DECLARE_FUNCTION(execHasDefaultValueOverride); \
	DECLARE_FUNCTION(execHasUserProvidedDefaultValue); \
	DECLARE_FUNCTION(execIsValidDefaultValue); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execHasOriginalDefaultValue); \
	DECLARE_FUNCTION(execGetOriginalDefaultValue); \
	DECLARE_FUNCTION(execShouldHideSubPins); \
	DECLARE_FUNCTION(execShouldOnlyShowSubPins); \
	DECLARE_FUNCTION(execIsFixedSizeArray); \
	DECLARE_FUNCTION(execContainsWildCardSubPin); \
	DECLARE_FUNCTION(execIsWildCard); \
	DECLARE_FUNCTION(execIsExecuteContext); \
	DECLARE_FUNCTION(execIsStringType); \
	DECLARE_FUNCTION(execGetArrayElementCppType); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execGetArraySize); \
	DECLARE_FUNCTION(execGetAbsolutePinIndex); \
	DECLARE_FUNCTION(execGetPinIndex); \
	DECLARE_FUNCTION(execIsLazy); \
	DECLARE_FUNCTION(execIsReferenceCountedContainer); \
	DECLARE_FUNCTION(execIsDynamicArray); \
	DECLARE_FUNCTION(execIsArrayElement); \
	DECLARE_FUNCTION(execIsArray); \
	DECLARE_FUNCTION(execIsInterface); \
	DECLARE_FUNCTION(execIsUObject); \
	DECLARE_FUNCTION(execIsStructMember); \
	DECLARE_FUNCTION(execIsStruct); \
	DECLARE_FUNCTION(execIsEnum); \
	DECLARE_FUNCTION(execRequiresWatch); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsExpanded); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetSegmentPath); \
	DECLARE_FUNCTION(execGetIndexInCategory); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetSubPinPath); \
	DECLARE_FUNCTION(execGetPinPath);


struct Z_Construct_UClass_URigVMPin_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMPin_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMPin(); \
	friend struct ::Z_Construct_UClass_URigVMPin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMPin_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMPin_NoRegister) \
	DECLARE_SERIALIZER(URigVMPin)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMPin(URigVMPin&&) = delete; \
	URigVMPin(const URigVMPin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMPin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMPin) \
	RIGVMDEVELOPER_API virtual ~URigVMPin();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_101_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMPin;

// ********** End Class URigVMPin ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMPin_h

// ********** Begin Enum ERigVMPinDefaultValueType *************************************************
#define FOREACH_ENUM_ERIGVMPINDEFAULTVALUETYPE(op) \
	op(ERigVMPinDefaultValueType::AutoDetect) \
	op(ERigVMPinDefaultValueType::Unset) \
	op(ERigVMPinDefaultValueType::Override) \
	op(ERigVMPinDefaultValueType::KeepValueType) 

enum class ERigVMPinDefaultValueType : uint8;
template<> struct TIsUEnumClass<ERigVMPinDefaultValueType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMPinDefaultValueType>();
// ********** End Enum ERigVMPinDefaultValueType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
