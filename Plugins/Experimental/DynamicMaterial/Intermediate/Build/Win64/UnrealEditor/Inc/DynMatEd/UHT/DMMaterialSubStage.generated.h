// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialSubStage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;
class UDMMaterialStage;
class UDMMaterialSubStage;
#ifdef DYNAMICMATERIALEDITOR_DMMaterialSubStage_generated_h
#error "DMMaterialSubStage.generated.h already included, missing '#pragma once' in DMMaterialSubStage.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialSubStage_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParentComponent); \
	DECLARE_FUNCTION(execGetParentMostStage); \
	DECLARE_FUNCTION(execGetParentStage); \
	DECLARE_FUNCTION(execCreateMaterialSubStage);


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialSubStage(); \
	friend struct Z_Construct_UClass_UDMMaterialSubStage_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialSubStage, UDMMaterialStage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), DYNAMICMATERIALEDITOR_API) \
	DECLARE_SERIALIZER(UDMMaterialSubStage)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialSubStage(UDMMaterialSubStage&&); \
	UDMMaterialSubStage(const UDMMaterialSubStage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialSubStage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialSubStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialSubStage) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialSubStage();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIALEDITOR_API UClass* StaticClass<class UDMMaterialSubStage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
