// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/AssetBackedTarget.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_AssetBackedTarget_generated_h
#error "AssetBackedTarget.generated.h already included, missing '#pragma once' in AssetBackedTarget.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_AssetBackedTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAssetBackedTarget ***************************************************
struct Z_Construct_UClass_UAssetBackedTarget_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UAssetBackedTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetBackedTarget(UAssetBackedTarget&&) = delete; \
	UAssetBackedTarget(const UAssetBackedTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UAssetBackedTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetBackedTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetBackedTarget) \
	virtual ~UAssetBackedTarget() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetBackedTarget(); \
	friend struct ::Z_Construct_UClass_UAssetBackedTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UAssetBackedTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetBackedTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UAssetBackedTarget_NoRegister) \
	DECLARE_SERIALIZER(UAssetBackedTarget)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetBackedTarget() {} \
public: \
	typedef UAssetBackedTarget UClassType; \
	typedef IAssetBackedTarget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_12_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetBackedTarget;

// ********** End Interface UAssetBackedTarget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
