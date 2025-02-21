// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMMaterialComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMMaterialComponent;
class UObject;
enum class EDMComponentLifetimeState : uint8;
enum class EDMUpdateType : uint8;
#ifdef DYNAMICMATERIAL_DMMaterialComponent_generated_h
#error "DMMaterialComponent.generated.h already included, missing '#pragma once' in DMMaterialComponent.h"
#endif
#define DYNAMICMATERIAL_DMMaterialComponent_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOuterSafe); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execGetComponentByPath); \
	DECLARE_FUNCTION(execIsComponentValid);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
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
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialComponent(); \
	friend struct Z_Construct_UClass_UDMMaterialComponent_Statics; \
public: \
	DECLARE_CLASS(UDMMaterialComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DynamicMaterial"), DYNAMICMATERIAL_API) \
	DECLARE_SERIALIZER(UDMMaterialComponent)


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMMaterialComponent(UDMMaterialComponent&&); \
	UDMMaterialComponent(const UDMMaterialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIAL_API, UDMMaterialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialComponent) \
	DYNAMICMATERIAL_API virtual ~UDMMaterialComponent();


#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DYNAMICMATERIAL_API UClass* StaticClass<class UDMMaterialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_Components_DMMaterialComponent_h


#define FOREACH_ENUM_EDMCOMPONENTLIFETIMESTATE(op) \
	op(EDMComponentLifetimeState::Created) \
	op(EDMComponentLifetimeState::Added) \
	op(EDMComponentLifetimeState::Removed) 

enum class EDMComponentLifetimeState : uint8;
template<> struct TIsUEnumClass<EDMComponentLifetimeState> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMComponentLifetimeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
