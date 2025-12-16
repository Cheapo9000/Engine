// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusUnnamedNodePinProvider.h"

#ifdef OPTIMUSCORE_IOptimusUnnamedNodePinProvider_generated_h
#error "IOptimusUnnamedNodePinProvider.generated.h already included, missing '#pragma once' in IOptimusUnnamedNodePinProvider.h"
#endif
#define OPTIMUSCORE_IOptimusUnnamedNodePinProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusUnnamedNodePinProvider ***************************************
struct Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusUnnamedNodePinProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusUnnamedNodePinProvider(UOptimusUnnamedNodePinProvider&&) = delete; \
	UOptimusUnnamedNodePinProvider(const UOptimusUnnamedNodePinProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusUnnamedNodePinProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusUnnamedNodePinProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusUnnamedNodePinProvider) \
	virtual ~UOptimusUnnamedNodePinProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusUnnamedNodePinProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusUnnamedNodePinProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusUnnamedNodePinProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusUnnamedNodePinProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusUnnamedNodePinProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusUnnamedNodePinProvider() {} \
public: \
	typedef UOptimusUnnamedNodePinProvider UClassType; \
	typedef IOptimusUnnamedNodePinProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusUnnamedNodePinProvider;

// ********** End Interface UOptimusUnnamedNodePinProvider *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusUnnamedNodePinProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
