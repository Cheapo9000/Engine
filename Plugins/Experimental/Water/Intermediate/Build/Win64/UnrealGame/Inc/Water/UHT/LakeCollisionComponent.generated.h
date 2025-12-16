// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LakeCollisionComponent.h"

#ifdef WATER_LakeCollisionComponent_generated_h
#error "LakeCollisionComponent.generated.h already included, missing '#pragma once' in LakeCollisionComponent.h"
#endif
#define WATER_LakeCollisionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULakeCollisionComponent **************************************************
struct Z_Construct_UClass_ULakeCollisionComponent_Statics;
WATER_API UClass* Z_Construct_UClass_ULakeCollisionComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULakeCollisionComponent(); \
	friend struct ::Z_Construct_UClass_ULakeCollisionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_ULakeCollisionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULakeCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_ULakeCollisionComponent_NoRegister) \
	DECLARE_SERIALIZER(ULakeCollisionComponent)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API ULakeCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULakeCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, ULakeCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULakeCollisionComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULakeCollisionComponent(ULakeCollisionComponent&&) = delete; \
	ULakeCollisionComponent(const ULakeCollisionComponent&) = delete; \
	WATER_API virtual ~ULakeCollisionComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULakeCollisionComponent;

// ********** End Class ULakeCollisionComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
