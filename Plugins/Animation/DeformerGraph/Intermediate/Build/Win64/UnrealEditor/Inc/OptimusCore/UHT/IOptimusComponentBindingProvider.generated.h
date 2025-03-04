// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusComponentBindingProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSCORE_IOptimusComponentBindingProvider_generated_h
#error "IOptimusComponentBindingProvider.generated.h already included, missing '#pragma once' in IOptimusComponentBindingProvider.h"
#endif
#define OPTIMUSCORE_IOptimusComponentBindingProvider_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusComponentBindingProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOptimusComponentBindingProvider(UOptimusComponentBindingProvider&&); \
	UOptimusComponentBindingProvider(const UOptimusComponentBindingProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusComponentBindingProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComponentBindingProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComponentBindingProvider) \
	NO_API virtual ~UOptimusComponentBindingProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusComponentBindingProvider(); \
	friend struct Z_Construct_UClass_UOptimusComponentBindingProvider_Statics; \
public: \
	DECLARE_CLASS(UOptimusComponentBindingProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusComponentBindingProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusComponentBindingProvider() {} \
public: \
	typedef UOptimusComponentBindingProvider UClassType; \
	typedef IOptimusComponentBindingProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_16_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusComponentBindingProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
