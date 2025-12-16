// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDMParameterContainer.h"

#ifdef DYNAMICMATERIAL_IDMParameterContainer_generated_h
#error "IDMParameterContainer.generated.h already included, missing '#pragma once' in IDMParameterContainer.h"
#endif
#define DYNAMICMATERIAL_IDMParameterContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Interface UDMParameterContainer ************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyParametersFrom);


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDMParameterContainer_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMParameterContainer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMParameterContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMParameterContainer(UDMParameterContainer&&) = delete; \
	UDMParameterContainer(const UDMParameterContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMParameterContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMParameterContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMParameterContainer) \
	virtual ~UDMParameterContainer() = default;


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMParameterContainer(); \
	friend struct ::Z_Construct_UClass_UDMParameterContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMParameterContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMParameterContainer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMParameterContainer_NoRegister) \
	DECLARE_SERIALIZER(UDMParameterContainer)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMParameterContainer() {} \
public: \
	typedef UDMParameterContainer UClassType; \
	typedef IDMParameterContainer ThisClass; \
	DYNAMICMATERIAL_API static void Execute_CopyParametersFrom(UObject* O, UObject* InOther); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMParameterContainer;

// ********** End Interface UDMParameterContainer **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_IDMParameterContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
