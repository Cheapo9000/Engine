// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusPropertyPinProvider.h"

#ifdef OPTIMUSCORE_IOptimusPropertyPinProvider_generated_h
#error "IOptimusPropertyPinProvider.generated.h already included, missing '#pragma once' in IOptimusPropertyPinProvider.h"
#endif
#define OPTIMUSCORE_IOptimusPropertyPinProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusPropertyPinProvider ******************************************
struct Z_Construct_UClass_UOptimusPropertyPinProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusPropertyPinProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusPropertyPinProvider(UOptimusPropertyPinProvider&&) = delete; \
	UOptimusPropertyPinProvider(const UOptimusPropertyPinProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusPropertyPinProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusPropertyPinProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusPropertyPinProvider) \
	virtual ~UOptimusPropertyPinProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusPropertyPinProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusPropertyPinProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusPropertyPinProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusPropertyPinProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusPropertyPinProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusPropertyPinProvider() {} \
public: \
	typedef UOptimusPropertyPinProvider UClassType; \
	typedef IOptimusPropertyPinProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusPropertyPinProvider;

// ********** End Interface UOptimusPropertyPinProvider ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusPropertyPinProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
