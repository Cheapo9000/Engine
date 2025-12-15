// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoBaseComponent.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoBaseComponent_generated_h
#error "GizmoBaseComponent.generated.h already included, missing '#pragma once' in GizmoBaseComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoBaseComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGizmoBaseComponentInterface *****************************************
struct Z_Construct_UClass_UGizmoBaseComponentInterface_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseComponentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoBaseComponentInterface(UGizmoBaseComponentInterface&&) = delete; \
	UGizmoBaseComponentInterface(const UGizmoBaseComponentInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBaseComponentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseComponentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoBaseComponentInterface) \
	virtual ~UGizmoBaseComponentInterface() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoBaseComponentInterface(); \
	friend struct ::Z_Construct_UClass_UGizmoBaseComponentInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoBaseComponentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoBaseComponentInterface_NoRegister) \
	DECLARE_SERIALIZER(UGizmoBaseComponentInterface)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoBaseComponentInterface() {} \
public: \
	typedef UGizmoBaseComponentInterface UClassType; \
	typedef IGizmoBaseComponentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoBaseComponentInterface;

// ********** End Interface UGizmoBaseComponentInterface *******************************************

// ********** Begin Class UGizmoBaseComponent ******************************************************
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateWorldLocalState); \
	DECLARE_FUNCTION(execUpdateHoverState);


struct Z_Construct_UClass_UGizmoBaseComponent_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBaseComponent(); \
	friend struct ::Z_Construct_UClass_UGizmoBaseComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoBaseComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoBaseComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoBaseComponent_NoRegister) \
	DECLARE_SERIALIZER(UGizmoBaseComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGizmoBaseComponent*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoBaseComponent(UGizmoBaseComponent&&) = delete; \
	UGizmoBaseComponent(const UGizmoBaseComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoBaseComponent) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoBaseComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_40_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoBaseComponent;

// ********** End Class UGizmoBaseComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
