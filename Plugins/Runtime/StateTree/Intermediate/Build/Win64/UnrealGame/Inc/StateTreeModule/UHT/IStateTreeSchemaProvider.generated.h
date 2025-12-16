// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IStateTreeSchemaProvider.h"

#ifdef STATETREEMODULE_IStateTreeSchemaProvider_generated_h
#error "IStateTreeSchemaProvider.generated.h already included, missing '#pragma once' in IStateTreeSchemaProvider.h"
#endif
#define STATETREEMODULE_IStateTreeSchemaProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UStateTreeSchemaProvider *********************************************
struct Z_Construct_UClass_UStateTreeSchemaProvider_Statics;
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeSchemaProvider_NoRegister();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATETREEMODULE_API UStateTreeSchemaProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateTreeSchemaProvider(UStateTreeSchemaProvider&&) = delete; \
	UStateTreeSchemaProvider(const UStateTreeSchemaProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATETREEMODULE_API, UStateTreeSchemaProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeSchemaProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeSchemaProvider) \
	virtual ~UStateTreeSchemaProvider() = default;


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStateTreeSchemaProvider(); \
	friend struct ::Z_Construct_UClass_UStateTreeSchemaProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STATETREEMODULE_API UClass* ::Z_Construct_UClass_UStateTreeSchemaProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateTreeSchemaProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StateTreeModule"), Z_Construct_UClass_UStateTreeSchemaProvider_NoRegister) \
	DECLARE_SERIALIZER(UStateTreeSchemaProvider)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStateTreeSchemaProvider() {} \
public: \
	typedef UStateTreeSchemaProvider UClassType; \
	typedef IStateTreeSchemaProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateTreeSchemaProvider;

// ********** End Interface UStateTreeSchemaProvider ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_IStateTreeSchemaProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
