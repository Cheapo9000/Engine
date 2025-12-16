// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialSubStage.h"

#ifdef DYNAMICMATERIALEDITOR_DMMaterialSubStage_generated_h
#error "DMMaterialSubStage.generated.h already included, missing '#pragma once' in DMMaterialSubStage.h"
#endif
#define DYNAMICMATERIALEDITOR_DMMaterialSubStage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;
class UDMMaterialStage;
class UDMMaterialSubStage;

// ********** Begin Class UDMMaterialSubStage ******************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParentComponent); \
	DECLARE_FUNCTION(execGetParentMostStage); \
	DECLARE_FUNCTION(execGetParentStage); \
	DECLARE_FUNCTION(execCreateMaterialSubStage);


struct Z_Construct_UClass_UDMMaterialSubStage_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMMaterialSubStage_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialSubStage(); \
	friend struct ::Z_Construct_UClass_UDMMaterialSubStage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMMaterialSubStage_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialSubStage, UDMMaterialStage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMMaterialSubStage_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialSubStage)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialSubStage(UDMMaterialSubStage&&) = delete; \
	UDMMaterialSubStage(const UDMMaterialSubStage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMMaterialSubStage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialSubStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialSubStage) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMMaterialSubStage();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialSubStage;

// ********** End Class UDMMaterialSubStage ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_Components_DMMaterialSubStage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
