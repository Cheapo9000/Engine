// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowComponentToolTarget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWEDITOR_DataflowComponentToolTarget_generated_h
#error "DataflowComponentToolTarget.generated.h already included, missing '#pragma once' in DataflowComponentToolTarget.h"
#endif
#define DATAFLOWEDITOR_DataflowComponentToolTarget_generated_h

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowComponentReadOnlyToolTarget(); \
	friend struct Z_Construct_UClass_UDataflowComponentReadOnlyToolTarget_Statics; \
public: \
	DECLARE_CLASS(UDataflowComponentReadOnlyToolTarget, UPrimitiveComponentToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataflowEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataflowComponentReadOnlyToolTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UDataflowComponentReadOnlyToolTarget*>(this); }


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowComponentReadOnlyToolTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowComponentReadOnlyToolTarget(UDataflowComponentReadOnlyToolTarget&&); \
	UDataflowComponentReadOnlyToolTarget(const UDataflowComponentReadOnlyToolTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowComponentReadOnlyToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowComponentReadOnlyToolTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowComponentReadOnlyToolTarget) \
	NO_API virtual ~UDataflowComponentReadOnlyToolTarget();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowComponentReadOnlyToolTarget>();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowComponentToolTarget(); \
	friend struct Z_Construct_UClass_UDataflowComponentToolTarget_Statics; \
public: \
	DECLARE_CLASS(UDataflowComponentToolTarget, UDataflowComponentReadOnlyToolTarget, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataflowEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataflowComponentToolTarget) \
	virtual UObject* _getUObject() const override { return const_cast<UDataflowComponentToolTarget*>(this); }


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowComponentToolTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowComponentToolTarget(UDataflowComponentToolTarget&&); \
	UDataflowComponentToolTarget(const UDataflowComponentToolTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowComponentToolTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowComponentToolTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowComponentToolTarget) \
	NO_API virtual ~UDataflowComponentToolTarget();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_60_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowComponentToolTarget>();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowComponentReadOnlyToolTargetFactory(); \
	friend struct Z_Construct_UClass_UDataflowComponentReadOnlyToolTargetFactory_Statics; \
public: \
	DECLARE_CLASS(UDataflowComponentReadOnlyToolTargetFactory, UToolTargetFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataflowEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataflowComponentReadOnlyToolTargetFactory)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowComponentReadOnlyToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowComponentReadOnlyToolTargetFactory(UDataflowComponentReadOnlyToolTargetFactory&&); \
	UDataflowComponentReadOnlyToolTargetFactory(const UDataflowComponentReadOnlyToolTargetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowComponentReadOnlyToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowComponentReadOnlyToolTargetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowComponentReadOnlyToolTargetFactory) \
	NO_API virtual ~UDataflowComponentReadOnlyToolTargetFactory();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_84_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowComponentReadOnlyToolTargetFactory>();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowComponentToolTargetFactory(); \
	friend struct Z_Construct_UClass_UDataflowComponentToolTargetFactory_Statics; \
public: \
	DECLARE_CLASS(UDataflowComponentToolTargetFactory, UToolTargetFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DataflowEditor"), NO_API) \
	DECLARE_SERIALIZER(UDataflowComponentToolTargetFactory)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowComponentToolTargetFactory(UDataflowComponentToolTargetFactory&&); \
	UDataflowComponentToolTargetFactory(const UDataflowComponentToolTargetFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowComponentToolTargetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowComponentToolTargetFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowComponentToolTargetFactory) \
	NO_API virtual ~UDataflowComponentToolTargetFactory();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_98_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowComponentToolTargetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowComponentToolTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
