// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGComputeDataInterface.h"

#ifdef PCG_PCGComputeDataInterface_generated_h
#error "PCGComputeDataInterface.generated.h already included, missing '#pragma once' in PCGComputeDataInterface.h"
#endif
#define PCG_PCGComputeDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeDataInterface *************************************************
struct Z_Construct_UClass_UPCGComputeDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGComputeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeDataInterface, UComputeDataInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGComputeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeDataInterface(UPCGComputeDataInterface&&) = delete; \
	UPCGComputeDataInterface(const UPCGComputeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComputeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeDataInterface) \
	PCG_API virtual ~UPCGComputeDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeDataInterface;

// ********** End Class UPCGComputeDataInterface ***************************************************

// ********** Begin Class UPCGComputeDataProvider **************************************************
struct Z_Construct_UClass_UPCGComputeDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGComputeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGComputeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeDataProvider(UPCGComputeDataProvider&&) = delete; \
	UPCGComputeDataProvider(const UPCGComputeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGComputeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeDataProvider) \
	PCG_API virtual ~UPCGComputeDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_74_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeDataProvider;

// ********** End Class UPCGComputeDataProvider ****************************************************

// ********** Begin Class UPCGExportableDataInterface **********************************************
struct Z_Construct_UClass_UPCGExportableDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGExportableDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExportableDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGExportableDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGExportableDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExportableDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGExportableDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGExportableDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGExportableDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExportableDataInterface(UPCGExportableDataInterface&&) = delete; \
	UPCGExportableDataInterface(const UPCGExportableDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGExportableDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExportableDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExportableDataInterface) \
	PCG_API virtual ~UPCGExportableDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_138_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExportableDataInterface;

// ********** End Class UPCGExportableDataInterface ************************************************

// ********** Begin Class UPCGExportableDataProvider ***********************************************
struct Z_Construct_UClass_UPCGExportableDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGExportableDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGExportableDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGExportableDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGExportableDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGExportableDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGExportableDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGExportableDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGExportableDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGExportableDataProvider(UPCGExportableDataProvider&&) = delete; \
	UPCGExportableDataProvider(const UPCGExportableDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGExportableDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGExportableDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGExportableDataProvider) \
	PCG_API virtual ~UPCGExportableDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_153_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGExportableDataProvider;

// ********** End Class UPCGExportableDataProvider *************************************************

// ********** Begin Class UPCGKernelParamsDataInterface ********************************************
struct Z_Construct_UClass_UPCGKernelParamsDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGKernelParamsDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGKernelParamsDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGKernelParamsDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGKernelParamsDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGKernelParamsDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGKernelParamsDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGKernelParamsDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGKernelParamsDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGKernelParamsDataInterface(UPCGKernelParamsDataInterface&&) = delete; \
	UPCGKernelParamsDataInterface(const UPCGKernelParamsDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGKernelParamsDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGKernelParamsDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGKernelParamsDataInterface) \
	PCG_API virtual ~UPCGKernelParamsDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_187_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGKernelParamsDataInterface;

// ********** End Class UPCGKernelParamsDataInterface **********************************************

// ********** Begin Class UPCGKernelParamsDataProvider *********************************************
struct Z_Construct_UClass_UPCGKernelParamsDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGKernelParamsDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGKernelParamsDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGKernelParamsDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGKernelParamsDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGKernelParamsDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGKernelParamsDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGKernelParamsDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGKernelParamsDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGKernelParamsDataProvider(UPCGKernelParamsDataProvider&&) = delete; \
	UPCGKernelParamsDataProvider(const UPCGKernelParamsDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGKernelParamsDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGKernelParamsDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGKernelParamsDataProvider) \
	PCG_API virtual ~UPCGKernelParamsDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_199_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_202_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h_202_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGKernelParamsDataProvider;

// ********** End Class UPCGKernelParamsDataProvider ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Compute_DataInterfaces_PCGComputeDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
