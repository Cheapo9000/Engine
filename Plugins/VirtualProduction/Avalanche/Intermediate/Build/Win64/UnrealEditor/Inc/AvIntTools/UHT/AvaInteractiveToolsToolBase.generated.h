// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaInteractiveToolsToolBase.h"

#ifdef AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolBase_generated_h
#error "AvaInteractiveToolsToolBase.generated.h already included, missing '#pragma once' in AvaInteractiveToolsToolBase.h"
#endif
#define AVALANCHEINTERACTIVETOOLS_AvaInteractiveToolsToolBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UAvaInteractiveToolsRightClickBehavior ***********************************
struct Z_Construct_UClass_UAvaInteractiveToolsRightClickBehavior_Statics;
AVALANCHEINTERACTIVETOOLS_API UClass* Z_Construct_UClass_UAvaInteractiveToolsRightClickBehavior_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsRightClickBehavior(); \
	friend struct ::Z_Construct_UClass_UAvaInteractiveToolsRightClickBehavior_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEINTERACTIVETOOLS_API UClass* ::Z_Construct_UClass_UAvaInteractiveToolsRightClickBehavior_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaInteractiveToolsRightClickBehavior, USingleClickInputBehavior, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), Z_Construct_UClass_UAvaInteractiveToolsRightClickBehavior_NoRegister) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsRightClickBehavior)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsRightClickBehavior(UAvaInteractiveToolsRightClickBehavior&&) = delete; \
	UAvaInteractiveToolsRightClickBehavior(const UAvaInteractiveToolsRightClickBehavior&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsRightClickBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsRightClickBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsRightClickBehavior) \
	NO_API virtual ~UAvaInteractiveToolsRightClickBehavior();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaInteractiveToolsRightClickBehavior;

// ********** End Class UAvaInteractiveToolsRightClickBehavior *************************************

// ********** Begin Class UAvaInteractiveToolsToolBase *********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPreviewActorDestroyed);


struct Z_Construct_UClass_UAvaInteractiveToolsToolBase_Statics;
AVALANCHEINTERACTIVETOOLS_API UClass* Z_Construct_UClass_UAvaInteractiveToolsToolBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaInteractiveToolsToolBase(); \
	friend struct ::Z_Construct_UClass_UAvaInteractiveToolsToolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEINTERACTIVETOOLS_API UClass* ::Z_Construct_UClass_UAvaInteractiveToolsToolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaInteractiveToolsToolBase, UInteractiveTool, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AvalancheInteractiveTools"), Z_Construct_UClass_UAvaInteractiveToolsToolBase_NoRegister) \
	DECLARE_SERIALIZER(UAvaInteractiveToolsToolBase)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaInteractiveToolsToolBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaInteractiveToolsToolBase(UAvaInteractiveToolsToolBase&&) = delete; \
	UAvaInteractiveToolsToolBase(const UAvaInteractiveToolsToolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaInteractiveToolsToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaInteractiveToolsToolBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaInteractiveToolsToolBase)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaInteractiveToolsToolBase;

// ********** End Class UAvaInteractiveToolsToolBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheInteractiveTools_Public_Tools_AvaInteractiveToolsToolBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
