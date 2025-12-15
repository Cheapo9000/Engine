// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/PhysicsDataSource.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_PhysicsDataSource_generated_h
#error "PhysicsDataSource.generated.h already included, missing '#pragma once' in PhysicsDataSource.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_PhysicsDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPhysicsDataSource ***************************************************
struct Z_Construct_UClass_UPhysicsDataSource_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPhysicsDataSource_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UPhysicsDataSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPhysicsDataSource(UPhysicsDataSource&&) = delete; \
	UPhysicsDataSource(const UPhysicsDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UPhysicsDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsDataSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsDataSource) \
	virtual ~UPhysicsDataSource() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsDataSource(); \
	friend struct ::Z_Construct_UClass_UPhysicsDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UPhysicsDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPhysicsDataSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UPhysicsDataSource_NoRegister) \
	DECLARE_SERIALIZER(UPhysicsDataSource)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsDataSource() {} \
public: \
	typedef UPhysicsDataSource UClassType; \
	typedef IPhysicsDataSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_13_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPhysicsDataSource;

// ********** End Interface UPhysicsDataSource *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_PhysicsDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
