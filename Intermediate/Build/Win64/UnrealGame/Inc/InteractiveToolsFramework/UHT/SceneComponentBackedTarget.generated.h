// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/SceneComponentBackedTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SceneComponentBackedTarget_generated_h
#error "SceneComponentBackedTarget.generated.h already included, missing '#pragma once' in SceneComponentBackedTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SceneComponentBackedTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USceneComponentBackedTarget ******************************************
struct Z_Construct_UClass_USceneComponentBackedTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USceneComponentBackedTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneComponentBackedTarget(USceneComponentBackedTarget&&) = delete; \
	USceneComponentBackedTarget(const USceneComponentBackedTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USceneComponentBackedTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponentBackedTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponentBackedTarget) \
	virtual ~USceneComponentBackedTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSceneComponentBackedTarget(); \
	friend struct ::Z_Construct_UClass_USceneComponentBackedTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USceneComponentBackedTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneComponentBackedTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USceneComponentBackedTarget_NoRegister) \
	DECLARE_SERIALIZER(USceneComponentBackedTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISceneComponentBackedTarget() {} \
public: \
	typedef USceneComponentBackedTarget UClassType; \
	typedef ISceneComponentBackedTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_15_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneComponentBackedTarget;

// ********** End Interface USceneComponentBackedTarget ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SceneComponentBackedTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
