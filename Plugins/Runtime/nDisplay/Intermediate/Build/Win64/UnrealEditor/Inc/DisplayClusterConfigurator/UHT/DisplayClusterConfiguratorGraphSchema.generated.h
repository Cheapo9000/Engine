// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h"

#ifdef DISPLAYCLUSTERCONFIGURATOR_DisplayClusterConfiguratorGraphSchema_generated_h
#error "DisplayClusterConfiguratorGraphSchema.generated.h already included, missing '#pragma once' in DisplayClusterConfiguratorGraphSchema.h"
#endif
#define DISPLAYCLUSTERCONFIGURATOR_DisplayClusterConfiguratorGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDisplayClusterConfiguratorSchemaAction_NewNode *******************
struct Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics;
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics; \
	DISPLAYCLUSTERCONFIGURATOR_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FDisplayClusterConfiguratorSchemaAction_NewNode;
// ********** End ScriptStruct FDisplayClusterConfiguratorSchemaAction_NewNode *********************

// ********** Begin Class UDisplayClusterConfiguratorGraphSchema ***********************************
struct Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics;
DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterConfiguratorGraphSchema(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTERCONFIGURATOR_API UClass* ::Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterConfiguratorGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayClusterConfigurator"), Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterConfiguratorGraphSchema)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterConfiguratorGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterConfiguratorGraphSchema(UDisplayClusterConfiguratorGraphSchema&&) = delete; \
	UDisplayClusterConfiguratorGraphSchema(const UDisplayClusterConfiguratorGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterConfiguratorGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterConfiguratorGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterConfiguratorGraphSchema) \
	NO_API virtual ~UDisplayClusterConfiguratorGraphSchema();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterConfiguratorGraphSchema;

// ********** End Class UDisplayClusterConfiguratorGraphSchema *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h

// ********** Begin Enum EClusterItemType **********************************************************
#define FOREACH_ENUM_ECLUSTERITEMTYPE(op) \
	op(EClusterItemType::ClusterNode) \
	op(EClusterItemType::Viewport) 

enum class EClusterItemType : uint8;
template<> struct TIsUEnumClass<EClusterItemType> { enum { Value = true }; };
template<> DISPLAYCLUSTERCONFIGURATOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EClusterItemType>();
// ********** End Enum EClusterItemType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
