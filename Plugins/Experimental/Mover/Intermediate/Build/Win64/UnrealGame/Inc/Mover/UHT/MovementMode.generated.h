// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovementMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoverComponent;
struct FMoverTickEndData;
struct FMoverTickStartData;
struct FMoverTimeStep;
struct FProposedMove;
struct FSimulationTickParams;
#ifdef MOVER_MovementMode_generated_h
#error "MovementMode.generated.h already included, missing '#pragma once' in MovementMode.h"
#endif
#define MOVER_MovementMode_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVER_API UMovementSettingsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMovementSettingsInterface(UMovementSettingsInterface&&); \
	UMovementSettingsInterface(const UMovementSettingsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVER_API, UMovementSettingsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovementSettingsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovementSettingsInterface) \
	MOVER_API virtual ~UMovementSettingsInterface();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovementSettingsInterface(); \
	friend struct Z_Construct_UClass_UMovementSettingsInterface_Statics; \
public: \
	DECLARE_CLASS(UMovementSettingsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mover"), MOVER_API) \
	DECLARE_SERIALIZER(UMovementSettingsInterface)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovementSettingsInterface() {} \
public: \
	typedef UMovementSettingsInterface UClassType; \
	typedef IMovementSettingsInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMovementSettingsInterface>();

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetMoverComponent);


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUBaseMovementMode(); \
	friend struct Z_Construct_UClass_UBaseMovementMode_Statics; \
public: \
	DECLARE_CLASS(UBaseMovementMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UBaseMovementMode)


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMovementMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMovementMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMovementMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseMovementMode(UBaseMovementMode&&); \
	UBaseMovementMode(const UBaseMovementMode&); \
public: \
	NO_API virtual ~UBaseMovementMode();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_INCLASS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UBaseMovementMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_MovementMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
