// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectRenderingComponent.h"

#ifdef SMARTOBJECTSMODULE_SmartObjectRenderingComponent_generated_h
#error "SmartObjectRenderingComponent.generated.h already included, missing '#pragma once' in SmartObjectRenderingComponent.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USmartObjectRenderingComponent *******************************************
struct Z_Construct_UClass_USmartObjectRenderingComponent_Statics;
SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectRenderingComponent(); \
	friend struct ::Z_Construct_UClass_USmartObjectRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SMARTOBJECTSMODULE_API UClass* ::Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USmartObjectRenderingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(USmartObjectRenderingComponent)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USmartObjectRenderingComponent(USmartObjectRenderingComponent&&) = delete; \
	USmartObjectRenderingComponent(const USmartObjectRenderingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SMARTOBJECTSMODULE_API, USmartObjectRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectRenderingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectRenderingComponent) \
	SMARTOBJECTSMODULE_API virtual ~USmartObjectRenderingComponent();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USmartObjectRenderingComponent;

// ********** End Class USmartObjectRenderingComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
