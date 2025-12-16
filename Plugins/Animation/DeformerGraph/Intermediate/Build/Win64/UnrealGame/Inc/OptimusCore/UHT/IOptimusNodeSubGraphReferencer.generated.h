// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNodeSubGraphReferencer.h"

#ifdef OPTIMUSCORE_IOptimusNodeSubGraphReferencer_generated_h
#error "IOptimusNodeSubGraphReferencer.generated.h already included, missing '#pragma once' in IOptimusNodeSubGraphReferencer.h"
#endif
#define OPTIMUSCORE_IOptimusNodeSubGraphReferencer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNodeSubGraphReferencer ***************************************
struct Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNodeSubGraphReferencer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodeSubGraphReferencer(UOptimusNodeSubGraphReferencer&&) = delete; \
	UOptimusNodeSubGraphReferencer(const UOptimusNodeSubGraphReferencer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodeSubGraphReferencer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeSubGraphReferencer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeSubGraphReferencer) \
	virtual ~UOptimusNodeSubGraphReferencer() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNodeSubGraphReferencer(); \
	friend struct ::Z_Construct_UClass_UOptimusNodeSubGraphReferencer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodeSubGraphReferencer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodeSubGraphReferencer_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodeSubGraphReferencer)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNodeSubGraphReferencer() {} \
public: \
	typedef UOptimusNodeSubGraphReferencer UClassType; \
	typedef IOptimusNodeSubGraphReferencer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_15_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodeSubGraphReferencer;

// ********** End Interface UOptimusNodeSubGraphReferencer *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeSubGraphReferencer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
