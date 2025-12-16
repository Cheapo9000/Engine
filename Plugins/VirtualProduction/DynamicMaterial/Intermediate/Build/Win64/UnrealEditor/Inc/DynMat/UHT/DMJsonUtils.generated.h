// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMJsonUtils.h"

#ifdef DYNAMICMATERIAL_DMJsonUtils_generated_h
#error "DMJsonUtils.generated.h already included, missing '#pragma once' in DMJsonUtils.h"
#endif
#define DYNAMICMATERIAL_DMJsonUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDMJsonSerializable **************************************************
struct Z_Construct_UClass_UDMJsonSerializable_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMJsonSerializable_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DYNAMICMATERIAL_API UDMJsonSerializable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMJsonSerializable(UDMJsonSerializable&&) = delete; \
	UDMJsonSerializable(const UDMJsonSerializable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMJsonSerializable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMJsonSerializable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMJsonSerializable) \
	virtual ~UDMJsonSerializable() = default;


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMJsonSerializable(); \
	friend struct ::Z_Construct_UClass_UDMJsonSerializable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMJsonSerializable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMJsonSerializable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMJsonSerializable_NoRegister) \
	DECLARE_SERIALIZER(UDMJsonSerializable)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMJsonSerializable() {} \
public: \
	typedef UDMJsonSerializable UClassType; \
	typedef IDMJsonSerializable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMJsonSerializable;

// ********** End Interface UDMJsonSerializable ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Utils_DMJsonUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
