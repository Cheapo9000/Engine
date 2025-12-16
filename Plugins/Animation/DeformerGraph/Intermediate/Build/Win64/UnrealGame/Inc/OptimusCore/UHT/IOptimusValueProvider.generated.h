// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusValueProvider.h"

#ifdef OPTIMUSCORE_IOptimusValueProvider_generated_h
#error "IOptimusValueProvider.generated.h already included, missing '#pragma once' in IOptimusValueProvider.h"
#endif
#define OPTIMUSCORE_IOptimusValueProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusValueProvider ************************************************
struct Z_Construct_UClass_UOptimusValueProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusValueProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusValueProvider(UOptimusValueProvider&&) = delete; \
	UOptimusValueProvider(const UOptimusValueProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusValueProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusValueProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusValueProvider) \
	virtual ~UOptimusValueProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusValueProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusValueProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusValueProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusValueProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusValueProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusValueProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusValueProvider() {} \
public: \
	typedef UOptimusValueProvider UClassType; \
	typedef IOptimusValueProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusValueProvider;

// ********** End Interface UOptimusValueProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusValueProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
