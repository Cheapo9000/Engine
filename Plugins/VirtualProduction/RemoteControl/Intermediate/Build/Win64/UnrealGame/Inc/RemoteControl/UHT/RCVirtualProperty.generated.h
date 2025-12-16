// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCVirtualProperty.h"

#ifdef REMOTECONTROL_RCVirtualProperty_generated_h
#error "RCVirtualProperty.generated.h already included, missing '#pragma once' in RCVirtualProperty.h"
#endif
#define REMOTECONTROL_RCVirtualProperty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FColor;
struct FLinearColor;

// ********** Begin Class URCVirtualPropertyBase ***************************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetValueLinearColor); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execSetValueVector2D); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execSetValueNumericInteger); \
	DECLARE_FUNCTION(execSetValueText); \
	DECLARE_FUNCTION(execSetValueName); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execSetValueDouble); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execSetValueUint64); \
	DECLARE_FUNCTION(execSetValueInt64); \
	DECLARE_FUNCTION(execSetValueUInt32); \
	DECLARE_FUNCTION(execSetValueInt32); \
	DECLARE_FUNCTION(execSetValueUint16); \
	DECLARE_FUNCTION(execSetValueInt16); \
	DECLARE_FUNCTION(execSetValueByte); \
	DECLARE_FUNCTION(execSetValueInt8); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetDisplayValueAsString); \
	DECLARE_FUNCTION(execGetValueObject); \
	DECLARE_FUNCTION(execGetValueLinearColor); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execGetValueVector2D); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execGetValueNumericInteger); \
	DECLARE_FUNCTION(execGetValueText); \
	DECLARE_FUNCTION(execGetValueName); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execGetValueDouble); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execGetValueUint64); \
	DECLARE_FUNCTION(execGetValueInt64); \
	DECLARE_FUNCTION(execGetValueUInt32); \
	DECLARE_FUNCTION(execGetValueInt32); \
	DECLARE_FUNCTION(execGetValueUint16); \
	DECLARE_FUNCTION(execGetValueInt16); \
	DECLARE_FUNCTION(execGetValueEnum); \
	DECLARE_FUNCTION(execGetValueByte); \
	DECLARE_FUNCTION(execGetValueInt8); \
	DECLARE_FUNCTION(execGetValueBool);


struct Z_Construct_UClass_URCVirtualPropertyBase_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyBase(); \
	friend struct ::Z_Construct_UClass_URCVirtualPropertyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URCVirtualPropertyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URCVirtualPropertyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URCVirtualPropertyBase_NoRegister) \
	DECLARE_SERIALIZER(URCVirtualPropertyBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCVirtualPropertyBase(URCVirtualPropertyBase&&) = delete; \
	URCVirtualPropertyBase(const URCVirtualPropertyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyBase) \
	NO_API virtual ~URCVirtualPropertyBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCVirtualPropertyBase;

// ********** End Class URCVirtualPropertyBase *****************************************************

// ********** Begin Class URCVirtualPropertyInContainer ********************************************
struct Z_Construct_UClass_URCVirtualPropertyInContainer_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyInContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_398_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyInContainer(); \
	friend struct ::Z_Construct_UClass_URCVirtualPropertyInContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URCVirtualPropertyInContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URCVirtualPropertyInContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URCVirtualPropertyInContainer_NoRegister) \
	DECLARE_SERIALIZER(URCVirtualPropertyInContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_398_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyInContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCVirtualPropertyInContainer(URCVirtualPropertyInContainer&&) = delete; \
	URCVirtualPropertyInContainer(const URCVirtualPropertyInContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyInContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyInContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyInContainer) \
	NO_API virtual ~URCVirtualPropertyInContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_395_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_398_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_398_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_398_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCVirtualPropertyInContainer;

// ********** End Class URCVirtualPropertyInContainer **********************************************

// ********** Begin Class URCVirtualPropertySelfContainer ******************************************
struct Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_418_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertySelfContainer(); \
	friend struct ::Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URCVirtualPropertySelfContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister) \
	DECLARE_SERIALIZER(URCVirtualPropertySelfContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_418_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertySelfContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URCVirtualPropertySelfContainer(URCVirtualPropertySelfContainer&&) = delete; \
	URCVirtualPropertySelfContainer(const URCVirtualPropertySelfContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertySelfContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertySelfContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertySelfContainer) \
	NO_API virtual ~URCVirtualPropertySelfContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_415_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_418_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_418_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_418_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URCVirtualPropertySelfContainer;

// ********** End Class URCVirtualPropertySelfContainer ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
