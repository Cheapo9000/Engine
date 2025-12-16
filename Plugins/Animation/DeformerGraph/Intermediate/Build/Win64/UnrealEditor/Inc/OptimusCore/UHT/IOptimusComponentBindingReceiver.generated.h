// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusComponentBindingReceiver.h"

#ifdef OPTIMUSCORE_IOptimusComponentBindingReceiver_generated_h
#error "IOptimusComponentBindingReceiver.generated.h already included, missing '#pragma once' in IOptimusComponentBindingReceiver.h"
#endif
#define OPTIMUSCORE_IOptimusComponentBindingReceiver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusComponentBindingReceiver *************************************
struct Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingReceiver_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusComponentBindingReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusComponentBindingReceiver(UOptimusComponentBindingReceiver&&) = delete; \
	UOptimusComponentBindingReceiver(const UOptimusComponentBindingReceiver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusComponentBindingReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusComponentBindingReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusComponentBindingReceiver) \
	virtual ~UOptimusComponentBindingReceiver() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusComponentBindingReceiver(); \
	friend struct ::Z_Construct_UClass_UOptimusComponentBindingReceiver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusComponentBindingReceiver_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusComponentBindingReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusComponentBindingReceiver_NoRegister) \
	DECLARE_SERIALIZER(UOptimusComponentBindingReceiver)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusComponentBindingReceiver() {} \
public: \
	typedef UOptimusComponentBindingReceiver UClassType; \
	typedef IOptimusComponentBindingReceiver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_13_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusComponentBindingReceiver;

// ********** End Interface UOptimusComponentBindingReceiver ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusComponentBindingReceiver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
