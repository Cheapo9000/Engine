// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusParameterBindingProvider.h"

#ifdef OPTIMUSCORE_IOptimusParameterBindingProvider_generated_h
#error "IOptimusParameterBindingProvider.generated.h already included, missing '#pragma once' in IOptimusParameterBindingProvider.h"
#endif
#define OPTIMUSCORE_IOptimusParameterBindingProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusParameterBindingProvider *************************************
struct Z_Construct_UClass_UOptimusParameterBindingProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusParameterBindingProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusParameterBindingProvider(UOptimusParameterBindingProvider&&) = delete; \
	UOptimusParameterBindingProvider(const UOptimusParameterBindingProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusParameterBindingProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusParameterBindingProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusParameterBindingProvider) \
	virtual ~UOptimusParameterBindingProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusParameterBindingProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusParameterBindingProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusParameterBindingProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusParameterBindingProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusParameterBindingProvider() {} \
public: \
	typedef UOptimusParameterBindingProvider UClassType; \
	typedef IOptimusParameterBindingProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusParameterBindingProvider;

// ********** End Interface UOptimusParameterBindingProvider ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusParameterBindingProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
