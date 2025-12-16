// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialComponent.h"

#ifdef DYNAMICMATERIAL_DMMaterialComponent_generated_h
#error "DMMaterialComponent.generated.h already included, missing '#pragma once' in DMMaterialComponent.h"
#endif
#define DYNAMICMATERIAL_DMMaterialComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDMMaterialComponent;
class UObject;
enum class EDMComponentLifetimeState : uint8;
enum class EDMUpdateType : uint8;

// ********** Begin Class UDMMaterialComponent *****************************************************
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOuterSafe); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execGetComponentByPath); \
	DECLARE_FUNCTION(execIsComponentValid);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execIsPropertyVisible); \
	DECLARE_FUNCTION(execGetEditableProperties); \
	DECLARE_FUNCTION(execSetComponentState); \
	DECLARE_FUNCTION(execHasComponentBeenRemoved); \
	DECLARE_FUNCTION(execIsComponentRemoved); \
	DECLARE_FUNCTION(execHasComponentBeenAdded); \
	DECLARE_FUNCTION(execIsComponentAdded); \
	DECLARE_FUNCTION(execHasComponentBeenCreated); \
	DECLARE_FUNCTION(execIsComponentCreated); \
	DECLARE_FUNCTION(execGetComponentState); \
	DECLARE_FUNCTION(execGetComponentDescription); \
	DECLARE_FUNCTION(execGetTypedParent); \
	DECLARE_FUNCTION(execGetParentComponent); \
	DECLARE_FUNCTION(execGetComponentPath);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialComponent_Statics;
DYNAMICMATERIAL_API UClass* Z_Construct_UClass_UDMMaterialComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialComponent(); \
	friend struct ::Z_Construct_UClass_UDMMaterialComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIAL_API UClass* ::Z_Construct_UClass_UDMMaterialComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), Z_Construct_UClass_UDMMaterialComponent_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialComponent)


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialComponent(UDMMaterialComponent&&) = delete; \
	UDMMaterialComponent(const UDMMaterialComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialComponent) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialComponent();


#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_27_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialComponent;

// ********** End Class UDMMaterialComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h

// ********** Begin Enum EDMComponentLifetimeState *************************************************
#define FOREACH_ENUM_EDMCOMPONENTLIFETIMESTATE(op) \
	op(EDMComponentLifetimeState::Created) \
	op(EDMComponentLifetimeState::Added) \
	op(EDMComponentLifetimeState::Removed) 

enum class EDMComponentLifetimeState : uint8;
template<> struct TIsUEnumClass<EDMComponentLifetimeState> { enum { Value = true }; };
template<> DYNAMICMATERIAL_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMComponentLifetimeState>();
// ********** End Enum EDMComponentLifetimeState ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
