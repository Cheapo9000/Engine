// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyActorFactory.h"

#ifdef WATEREDITOR_WaterBodyActorFactory_generated_h
#error "WaterBodyActorFactory.generated.h already included, missing '#pragma once' in WaterBodyActorFactory.h"
#endif
#define WATEREDITOR_WaterBodyActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaterBodyActorFactory ***************************************************
struct Z_Construct_UClass_UWaterBodyActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyActorFactory, UActorFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyActorFactory(UWaterBodyActorFactory&&) = delete; \
	UWaterBodyActorFactory(const UWaterBodyActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyActorFactory;

// ********** End Class UWaterBodyActorFactory *****************************************************

// ********** Begin Class UWaterBodyRiverActorFactory **********************************************
struct Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyRiverActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyRiverActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyRiverActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyRiverActorFactory, UWaterBodyActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyRiverActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyRiverActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyRiverActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyRiverActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyRiverActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyRiverActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyRiverActorFactory(UWaterBodyRiverActorFactory&&) = delete; \
	UWaterBodyRiverActorFactory(const UWaterBodyRiverActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyRiverActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyRiverActorFactory;

// ********** End Class UWaterBodyRiverActorFactory ************************************************

// ********** Begin Class UWaterBodyOceanActorFactory **********************************************
struct Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyOceanActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyOceanActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyOceanActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyOceanActorFactory, UWaterBodyActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyOceanActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyOceanActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyOceanActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyOceanActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyOceanActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyOceanActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyOceanActorFactory(UWaterBodyOceanActorFactory&&) = delete; \
	UWaterBodyOceanActorFactory(const UWaterBodyOceanActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyOceanActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyOceanActorFactory;

// ********** End Class UWaterBodyOceanActorFactory ************************************************

// ********** Begin Class UWaterBodyLakeActorFactory ***********************************************
struct Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyLakeActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyLakeActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyLakeActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyLakeActorFactory, UWaterBodyActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyLakeActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyLakeActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyLakeActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyLakeActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyLakeActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyLakeActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyLakeActorFactory(UWaterBodyLakeActorFactory&&) = delete; \
	UWaterBodyLakeActorFactory(const UWaterBodyLakeActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyLakeActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_46_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyLakeActorFactory;

// ********** End Class UWaterBodyLakeActorFactory *************************************************

// ********** Begin Class UWaterBodyCustomActorFactory *********************************************
struct Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics;
WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyCustomActorFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyCustomActorFactory(); \
	friend struct ::Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATEREDITOR_API UClass* ::Z_Construct_UClass_UWaterBodyCustomActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaterBodyCustomActorFactory, UWaterBodyActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), Z_Construct_UClass_UWaterBodyCustomActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UWaterBodyCustomActorFactory)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATEREDITOR_API UWaterBodyCustomActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyCustomActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATEREDITOR_API, UWaterBodyCustomActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyCustomActorFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaterBodyCustomActorFactory(UWaterBodyCustomActorFactory&&) = delete; \
	UWaterBodyCustomActorFactory(const UWaterBodyCustomActorFactory&) = delete; \
	WATEREDITOR_API virtual ~UWaterBodyCustomActorFactory();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_53_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_56_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaterBodyCustomActorFactory;

// ********** End Class UWaterBodyCustomActorFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
