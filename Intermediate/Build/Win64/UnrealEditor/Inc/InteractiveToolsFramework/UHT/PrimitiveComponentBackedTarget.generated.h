// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/PrimitiveComponentBackedTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_PrimitiveComponentBackedTarget_generated_h
#error "PrimitiveComponentBackedTarget.generated.h already included, missing '#pragma once' in PrimitiveComponentBackedTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_PrimitiveComponentBackedTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPrimitiveComponentBackedTarget **************************************
struct Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UPrimitiveComponentBackedTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPrimitiveComponentBackedTarget(UPrimitiveComponentBackedTarget&&) = delete; \
	UPrimitiveComponentBackedTarget(const UPrimitiveComponentBackedTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UPrimitiveComponentBackedTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveComponentBackedTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveComponentBackedTarget) \
	virtual ~UPrimitiveComponentBackedTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPrimitiveComponentBackedTarget(); \
	friend struct ::Z_Construct_UClass_UPrimitiveComponentBackedTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UPrimitiveComponentBackedTarget, USceneComponentBackedTarget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister) \
	DECLARE_SERIALIZER(UPrimitiveComponentBackedTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPrimitiveComponentBackedTarget() {} \
public: \
	typedef UPrimitiveComponentBackedTarget UClassType; \
	typedef IPrimitiveComponentBackedTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_18_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPrimitiveComponentBackedTarget;

// ********** End Interface UPrimitiveComponentBackedTarget ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PrimitiveComponentBackedTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
