// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClothingSimulationFactory.h"

#ifdef CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationFactory_generated_h
#error "ClothingSimulationFactory.generated.h already included, missing '#pragma once' in ClothingSimulationFactory.h"
#endif
#define CLOTHINGSYSTEMRUNTIMEINTERFACE_ClothingSimulationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClothingSimulationFactory ***********************************************
struct Z_Construct_UClass_UClothingSimulationFactory_Statics;
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister();

#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothingSimulationFactory(); \
	friend struct ::Z_Construct_UClass_UClothingSimulationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* ::Z_Construct_UClass_UClothingSimulationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UClothingSimulationFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ClothingSystemRuntimeInterface"), Z_Construct_UClass_UClothingSimulationFactory_NoRegister) \
	DECLARE_SERIALIZER(UClothingSimulationFactory)


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothingSimulationFactory(UClothingSimulationFactory&&) = delete; \
	UClothingSimulationFactory(const UClothingSimulationFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLOTHINGSYSTEMRUNTIMEINTERFACE_API, UClothingSimulationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothingSimulationFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothingSimulationFactory) \
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API virtual ~UClothingSimulationFactory();


#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_42_PROLOG
#define FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothingSimulationFactory;

// ********** End Class UClothingSimulationFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
