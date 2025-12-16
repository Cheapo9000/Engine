// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NearestNeighborOptimizedNetwork.h"

#ifdef NEARESTNEIGHBORMODEL_NearestNeighborOptimizedNetwork_generated_h
#error "NearestNeighborOptimizedNetwork.generated.h already included, missing '#pragma once' in NearestNeighborOptimizedNetwork.h"
#endif
#define NEARESTNEIGHBORMODEL_NearestNeighborOptimizedNetwork_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNearestNeighborNetworkParameter **********************************
struct Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics;
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNearestNeighborNetworkParameter_Statics; \
	NEARESTNEIGHBORMODEL_API static class UScriptStruct* StaticStruct();


struct FNearestNeighborNetworkParameter;
// ********** End ScriptStruct FNearestNeighborNetworkParameter ************************************

// ********** Begin Class UNearestNeighborNetworkLayer *********************************************
struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborNetworkLayer(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborNetworkLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborNetworkLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborNetworkLayer_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborNetworkLayer)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborNetworkLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborNetworkLayer(UNearestNeighborNetworkLayer&&) = delete; \
	UNearestNeighborNetworkLayer(const UNearestNeighborNetworkLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborNetworkLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborNetworkLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborNetworkLayer) \
	NO_API virtual ~UNearestNeighborNetworkLayer();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_30_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborNetworkLayer;

// ********** End Class UNearestNeighborNetworkLayer ***********************************************

// ********** Begin Class UNearestNeighborNetworkLayer_Gemm_Prelu **********************************
struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborNetworkLayer_Gemm_Prelu(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborNetworkLayer_Gemm_Prelu, UNearestNeighborNetworkLayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Prelu_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborNetworkLayer_Gemm_Prelu)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborNetworkLayer_Gemm_Prelu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborNetworkLayer_Gemm_Prelu(UNearestNeighborNetworkLayer_Gemm_Prelu&&) = delete; \
	UNearestNeighborNetworkLayer_Gemm_Prelu(const UNearestNeighborNetworkLayer_Gemm_Prelu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborNetworkLayer_Gemm_Prelu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborNetworkLayer_Gemm_Prelu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborNetworkLayer_Gemm_Prelu) \
	NO_API virtual ~UNearestNeighborNetworkLayer_Gemm_Prelu();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_53_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborNetworkLayer_Gemm_Prelu;

// ********** End Class UNearestNeighborNetworkLayer_Gemm_Prelu ************************************

// ********** Begin Class UNearestNeighborNetworkLayer_Gemm ****************************************
struct Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborNetworkLayer_Gemm(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborNetworkLayer_Gemm, UNearestNeighborNetworkLayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborNetworkLayer_Gemm_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborNetworkLayer_Gemm)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborNetworkLayer_Gemm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborNetworkLayer_Gemm(UNearestNeighborNetworkLayer_Gemm&&) = delete; \
	UNearestNeighborNetworkLayer_Gemm(const UNearestNeighborNetworkLayer_Gemm&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborNetworkLayer_Gemm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborNetworkLayer_Gemm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborNetworkLayer_Gemm) \
	NO_API virtual ~UNearestNeighborNetworkLayer_Gemm();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_59_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborNetworkLayer_Gemm;

// ********** End Class UNearestNeighborNetworkLayer_Gemm ******************************************

// ********** Begin Class UNearestNeighborOptimizedNetwork *****************************************
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEmpty);


struct Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborOptimizedNetwork(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborOptimizedNetwork_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborOptimizedNetwork, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborOptimizedNetwork)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearestNeighborOptimizedNetwork(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborOptimizedNetwork(UNearestNeighborOptimizedNetwork&&) = delete; \
	UNearestNeighborOptimizedNetwork(const UNearestNeighborOptimizedNetwork&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearestNeighborOptimizedNetwork); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborOptimizedNetwork); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborOptimizedNetwork) \
	NO_API virtual ~UNearestNeighborOptimizedNetwork();


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_71_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborOptimizedNetwork;

// ********** End Class UNearestNeighborOptimizedNetwork *******************************************

// ********** Begin Class UNearestNeighborOptimizedNetworkInstance *********************************
struct Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics;
NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister();

#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearestNeighborOptimizedNetworkInstance(); \
	friend struct ::Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NEARESTNEIGHBORMODEL_API UClass* ::Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UNearestNeighborOptimizedNetworkInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NearestNeighborModel"), Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister) \
	DECLARE_SERIALIZER(UNearestNeighborOptimizedNetworkInstance)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_178_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNearestNeighborOptimizedNetworkInstance(UNearestNeighborOptimizedNetworkInstance&&) = delete; \
	UNearestNeighborOptimizedNetworkInstance(const UNearestNeighborOptimizedNetworkInstance&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearestNeighborOptimizedNetworkInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearestNeighborOptimizedNetworkInstance)


#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_172_PROLOG
#define FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_178_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNearestNeighborOptimizedNetworkInstance;

// ********** End Class UNearestNeighborOptimizedNetworkInstance ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_NearestNeighborOptimizedNetwork_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
