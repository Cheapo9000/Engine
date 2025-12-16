// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNodeGraphProvider.h"

#ifdef OPTIMUSCORE_IOptimusNodeGraphProvider_generated_h
#error "IOptimusNodeGraphProvider.generated.h already included, missing '#pragma once' in IOptimusNodeGraphProvider.h"
#endif
#define OPTIMUSCORE_IOptimusNodeGraphProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNodeGraphProvider ********************************************
struct Z_Construct_UClass_UOptimusNodeGraphProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNodeGraphProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodeGraphProvider(UOptimusNodeGraphProvider&&) = delete; \
	UOptimusNodeGraphProvider(const UOptimusNodeGraphProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodeGraphProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeGraphProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeGraphProvider) \
	virtual ~UOptimusNodeGraphProvider() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNodeGraphProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusNodeGraphProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodeGraphProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodeGraphProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodeGraphProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNodeGraphProvider() {} \
public: \
	typedef UOptimusNodeGraphProvider UClassType; \
	typedef IOptimusNodeGraphProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_11_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodeGraphProvider;

// ********** End Interface UOptimusNodeGraphProvider **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeGraphProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
