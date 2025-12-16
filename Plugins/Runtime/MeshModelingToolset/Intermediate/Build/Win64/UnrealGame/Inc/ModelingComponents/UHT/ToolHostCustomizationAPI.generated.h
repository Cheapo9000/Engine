// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolHostCustomizationAPI.h"

#ifdef MODELINGCOMPONENTS_ToolHostCustomizationAPI_generated_h
#error "ToolHostCustomizationAPI.generated.h already included, missing '#pragma once' in ToolHostCustomizationAPI.h"
#endif
#define MODELINGCOMPONENTS_ToolHostCustomizationAPI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UToolHostCustomizationAPI ********************************************
struct Z_Construct_UClass_UToolHostCustomizationAPI_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UToolHostCustomizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolHostCustomizationAPI(UToolHostCustomizationAPI&&) = delete; \
	UToolHostCustomizationAPI(const UToolHostCustomizationAPI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UToolHostCustomizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolHostCustomizationAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolHostCustomizationAPI) \
	virtual ~UToolHostCustomizationAPI() = default;


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolHostCustomizationAPI(); \
	friend struct ::Z_Construct_UClass_UToolHostCustomizationAPI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolHostCustomizationAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UToolHostCustomizationAPI_NoRegister) \
	DECLARE_SERIALIZER(UToolHostCustomizationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolHostCustomizationAPI() {} \
public: \
	typedef UToolHostCustomizationAPI UClassType; \
	typedef IToolHostCustomizationAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolHostCustomizationAPI;

// ********** End Interface UToolHostCustomizationAPI **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
