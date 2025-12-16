// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusShaderTextProvider.h"

#ifdef OPTIMUSCORE_IOptimusShaderTextProvider_generated_h
#error "IOptimusShaderTextProvider.generated.h already included, missing '#pragma once' in IOptimusShaderTextProvider.h"
#endif
#define OPTIMUSCORE_IOptimusShaderTextProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusShaderTextProvider *******************************************
struct Z_Construct_UClass_UOptimusShaderTextProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusShaderTextProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusShaderTextProvider(UOptimusShaderTextProvider&&) = delete; \
	UOptimusShaderTextProvider(const UOptimusShaderTextProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusShaderTextProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusShaderTextProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusShaderTextProvider) \
	virtual ~UOptimusShaderTextProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusShaderTextProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusShaderTextProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusShaderTextProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusShaderTextProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusShaderTextProvider() {} \
public: \
	typedef UOptimusShaderTextProvider UClassType; \
	typedef IOptimusShaderTextProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_8_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusShaderTextProvider;

// ********** End Interface UOptimusShaderTextProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusShaderTextProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
