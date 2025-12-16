// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOptimusNodePinRouter.h"

#ifdef OPTIMUSCORE_IOptimusNodePinRouter_generated_h
#error "IOptimusNodePinRouter.generated.h already included, missing '#pragma once' in IOptimusNodePinRouter.h"
#endif
#define OPTIMUSCORE_IOptimusNodePinRouter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UOptimusNodePinRouter ************************************************
struct Z_Construct_UClass_UOptimusNodePinRouter_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusNodePinRouter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusNodePinRouter(UOptimusNodePinRouter&&) = delete; \
	UOptimusNodePinRouter(const UOptimusNodePinRouter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusNodePinRouter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodePinRouter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodePinRouter) \
	virtual ~UOptimusNodePinRouter() = default;


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOptimusNodePinRouter(); \
	friend struct ::Z_Construct_UClass_UOptimusNodePinRouter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusNodePinRouter_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusNodePinRouter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusNodePinRouter_NoRegister) \
	DECLARE_SERIALIZER(UOptimusNodePinRouter)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOptimusNodePinRouter() {} \
public: \
	typedef UOptimusNodePinRouter UClassType; \
	typedef IOptimusNodePinRouter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_125_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_129_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusNodePinRouter;

// ********** End Interface UOptimusNodePinRouter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
