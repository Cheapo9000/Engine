// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoverSimulationTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoverInputCmdContext;
#ifdef MOVER_MoverSimulationTypes_generated_h
#error "MoverSimulationTypes.generated.h already included, missing '#pragma once' in MoverSimulationTypes.h"
#endif
#define MOVER_MoverSimulationTypes_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementModeTickEndState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMovementModeTickEndState>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverInputCmdContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverInputCmdContext>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverSyncState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverSyncState>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverAuxStateContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverAuxStateContext>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTickStartData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverTickStartData>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_227_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoverTickEndData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FMoverTickEndData>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimulationTickParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVER_API UScriptStruct* StaticStruct<struct FSimulationTickParams>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ProduceInput_Implementation(int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult) {}; \
	DECLARE_FUNCTION(execProduceInput);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoverInputProducerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverInputProducerInterface(UMoverInputProducerInterface&&); \
	UMoverInputProducerInterface(const UMoverInputProducerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverInputProducerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverInputProducerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverInputProducerInterface) \
	NO_API virtual ~UMoverInputProducerInterface();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMoverInputProducerInterface(); \
	friend struct Z_Construct_UClass_UMoverInputProducerInterface_Statics; \
public: \
	DECLARE_CLASS(UMoverInputProducerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverInputProducerInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMoverInputProducerInterface() {} \
public: \
	typedef UMoverInputProducerInterface UClassType; \
	typedef IMoverInputProducerInterface ThisClass; \
	static void Execute_ProduceInput(UObject* O, int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_272_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_283_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h_275_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverInputProducerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoverSimulationTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
