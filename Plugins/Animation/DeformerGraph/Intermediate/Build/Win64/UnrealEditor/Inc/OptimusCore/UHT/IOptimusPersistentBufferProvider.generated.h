// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusPersistentBufferProvider.h"

#ifdef OPTIMUSCORE_IOptimusPersistentBufferProvider_generated_h
#error "IOptimusPersistentBufferProvider.generated.h already included, missing '#pragma once' in IOptimusPersistentBufferProvider.h"
#endif
#define OPTIMUSCORE_IOptimusPersistentBufferProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusPersistentBufferProvider *************************************
struct Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusPersistentBufferProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusPersistentBufferProvider(UOptimusPersistentBufferProvider&&) = delete; \
	UOptimusPersistentBufferProvider(const UOptimusPersistentBufferProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusPersistentBufferProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusPersistentBufferProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusPersistentBufferProvider) \
	virtual ~UOptimusPersistentBufferProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusPersistentBufferProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusPersistentBufferProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusPersistentBufferProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusPersistentBufferProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusPersistentBufferProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusPersistentBufferProvider() {} \
public: \
	typedef UOptimusPersistentBufferProvider UClassType; \
	typedef IOptimusPersistentBufferProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_12_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusPersistentBufferProvider;

// ********** End Interface UOptimusPersistentBufferProvider ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPersistentBufferProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
