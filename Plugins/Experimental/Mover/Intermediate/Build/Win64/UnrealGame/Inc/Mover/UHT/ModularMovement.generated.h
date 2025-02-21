// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoveLibrary/ModularMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoverBlackboard;
struct FMoverDefaultSyncState;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
#ifdef MOVER_ModularMovement_generated_h
#error "ModularMovement.generated.h already included, missing '#pragma once' in ModularMovement.h"
#endif
#define MOVER_ModularMovement_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FRotator GetTurn_Implementation(FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard) { return FRotator(ForceInit); }; \
	DECLARE_FUNCTION(execGetTurn);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnGeneratorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTurnGeneratorInterface(UTurnGeneratorInterface&&); \
	UTurnGeneratorInterface(const UTurnGeneratorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnGeneratorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnGeneratorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnGeneratorInterface) \
	NO_API virtual ~UTurnGeneratorInterface();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTurnGeneratorInterface(); \
	friend struct Z_Construct_UClass_UTurnGeneratorInterface_Statics; \
public: \
	DECLARE_CLASS(UTurnGeneratorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UTurnGeneratorInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITurnGeneratorInterface() {} \
public: \
	typedef UTurnGeneratorInterface UClassType; \
	typedef ITurnGeneratorInterface ThisClass; \
	static FRotator Execute_GetTurn(UObject* O, FRotator TargetOrientation, FMoverTickStartData const& FullStartState, FMoverDefaultSyncState const& MoverState, FMoverTimeStep const& TimeStep, FProposedMove const& ProposedMove, UMoverBlackboard* SimBlackboard); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UTurnGeneratorInterface>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinearTurnGenerator(); \
	friend struct Z_Construct_UClass_ULinearTurnGenerator_Statics; \
public: \
	DECLARE_CLASS(ULinearTurnGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(ULinearTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<ULinearTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinearTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULinearTurnGenerator(ULinearTurnGenerator&&); \
	ULinearTurnGenerator(const ULinearTurnGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinearTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinearTurnGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinearTurnGenerator) \
	NO_API virtual ~ULinearTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class ULinearTurnGenerator>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExactDampedTurnGenerator(); \
	friend struct Z_Construct_UClass_UExactDampedTurnGenerator_Statics; \
public: \
	DECLARE_CLASS(UExactDampedTurnGenerator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UExactDampedTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UExactDampedTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExactDampedTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExactDampedTurnGenerator(UExactDampedTurnGenerator&&); \
	UExactDampedTurnGenerator(const UExactDampedTurnGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExactDampedTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExactDampedTurnGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExactDampedTurnGenerator) \
	NO_API virtual ~UExactDampedTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_67_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UExactDampedTurnGenerator>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintableTurnGenerator(); \
	friend struct Z_Construct_UClass_UBlueprintableTurnGenerator_Statics; \
public: \
	DECLARE_CLASS(UBlueprintableTurnGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintableTurnGenerator) \
	virtual UObject* _getUObject() const override { return const_cast<UBlueprintableTurnGenerator*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintableTurnGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintableTurnGenerator(UBlueprintableTurnGenerator&&); \
	UBlueprintableTurnGenerator(const UBlueprintableTurnGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintableTurnGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintableTurnGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintableTurnGenerator) \
	NO_API virtual ~UBlueprintableTurnGenerator();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_86_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UBlueprintableTurnGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MoveLibrary_ModularMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
