// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/DMBuildRequestSubsystem.h"

#ifdef DYNAMICMATERIALEDITOR_DMBuildRequestSubsystem_generated_h
#error "DMBuildRequestSubsystem.generated.h already included, missing '#pragma once' in DMBuildRequestSubsystem.h"
#endif
#define DYNAMICMATERIALEDITOR_DMBuildRequestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMBuildRequestSubsystem *************************************************
struct Z_Construct_UClass_UDMBuildRequestSubsystem_Statics;
DYNAMICMATERIALEDITOR_API UClass* Z_Construct_UClass_UDMBuildRequestSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMBuildRequestSubsystem(); \
	friend struct ::Z_Construct_UClass_UDMBuildRequestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALEDITOR_API UClass* ::Z_Construct_UClass_UDMBuildRequestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMBuildRequestSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialEditor"), Z_Construct_UClass_UDMBuildRequestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDMBuildRequestSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMBuildRequestSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMBuildRequestSubsystem(UDMBuildRequestSubsystem&&) = delete; \
	UDMBuildRequestSubsystem(const UDMBuildRequestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMBuildRequestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMBuildRequestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMBuildRequestSubsystem) \
	NO_API virtual ~UDMBuildRequestSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMBuildRequestSubsystem;

// ********** End Class UDMBuildRequestSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterialEditor_Private_Utils_DMBuildRequestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
