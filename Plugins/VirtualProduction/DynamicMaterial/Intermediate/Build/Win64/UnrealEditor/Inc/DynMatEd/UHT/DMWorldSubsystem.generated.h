// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMWorldSubsystem.h"

#ifdef DYNAMICMATERIALEDITOR_DMWorldSubsystem_generated_h
#error "DMWorldSubsystem.generated.h already included, missing '#pragma once' in DMWorldSubsystem.h"
#endif
#define DYNAMICMATERIALEDITOR_DMWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMWorldSubsystem ********************************************************
struct Z_Construct_UClass_UDMWorldSubsystem_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMWorldSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMWorldSubsystem(); \
	friend struct ::Z_Construct_UClass_UDMWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDMWorldSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMWorldSubsystem(UDMWorldSubsystem&&) = delete; \
	UDMWorldSubsystem(const UDMWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALEDITOR_API, UDMWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMWorldSubsystem) \
	DYNAMICMATERIALEDITOR_API virtual ~UDMWorldSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMWorldSubsystem;

// ********** End Class UDMWorldSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Public_DMWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
