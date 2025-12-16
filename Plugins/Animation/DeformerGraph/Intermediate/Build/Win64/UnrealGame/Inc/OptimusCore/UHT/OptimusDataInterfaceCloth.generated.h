// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceCloth.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceCloth_generated_h
#error "OptimusDataInterfaceCloth.generated.h already included, missing '#pragma once' in OptimusDataInterfaceCloth.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceCloth_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusClothDataInterface ***********************************************
struct Z_Construct_UClass_UOptimusClothDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusClothDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusClothDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusClothDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusClothDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusClothDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusClothDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusClothDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusClothDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusClothDataInterface(UOptimusClothDataInterface&&) = delete; \
	UOptimusClothDataInterface(const UOptimusClothDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusClothDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusClothDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusClothDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusClothDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_16_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusClothDataInterface;

// ********** End Class UOptimusClothDataInterface *************************************************

// ********** Begin Class UOptimusClothDataProvider ************************************************
struct Z_Construct_UClass_UOptimusClothDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusClothDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusClothDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusClothDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusClothDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusClothDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusClothDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusClothDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusClothDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusClothDataProvider(UOptimusClothDataProvider&&) = delete; \
	UOptimusClothDataProvider(const UOptimusClothDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusClothDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusClothDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusClothDataProvider) \
	NO_API virtual ~UOptimusClothDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_44_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusClothDataProvider;

// ********** End Class UOptimusClothDataProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCloth_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
