// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusAlternativeSelectedObjectProvider.h"

#ifdef OPTIMUSCORE_IOptimusAlternativeSelectedObjectProvider_generated_h
#error "IOptimusAlternativeSelectedObjectProvider.generated.h already included, missing '#pragma once' in IOptimusAlternativeSelectedObjectProvider.h"
#endif
#define OPTIMUSCORE_IOptimusAlternativeSelectedObjectProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusAlternativeSelectedObjectProvider ****************************
struct Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusAlternativeSelectedObjectProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusAlternativeSelectedObjectProvider(UOptimusAlternativeSelectedObjectProvider&&) = delete; \
	UOptimusAlternativeSelectedObjectProvider(const UOptimusAlternativeSelectedObjectProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusAlternativeSelectedObjectProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAlternativeSelectedObjectProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusAlternativeSelectedObjectProvider) \
	virtual ~UOptimusAlternativeSelectedObjectProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusAlternativeSelectedObjectProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusAlternativeSelectedObjectProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusAlternativeSelectedObjectProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusAlternativeSelectedObjectProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusAlternativeSelectedObjectProvider() {} \
public: \
	typedef UOptimusAlternativeSelectedObjectProvider UClassType; \
	typedef IOptimusAlternativeSelectedObjectProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_10_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusAlternativeSelectedObjectProvider;

// ********** End Interface UOptimusAlternativeSelectedObjectProvider ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusAlternativeSelectedObjectProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
