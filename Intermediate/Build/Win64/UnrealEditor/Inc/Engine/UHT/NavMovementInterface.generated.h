// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NavMovementInterface.h"

#ifdef ENGINE_NavMovementInterface_generated_h
#error "NavMovementInterface.generated.h already included, missing '#pragma once' in NavMovementInterface.h"
#endif
#define ENGINE_NavMovementInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UNavMovementInterface ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopMovementKeepPathing); \
	DECLARE_FUNCTION(execStopActiveMovement); \
	DECLARE_FUNCTION(execIsFlying); \
	DECLARE_FUNCTION(execIsSwimming); \
	DECLARE_FUNCTION(execIsMovingOnGround); \
	DECLARE_FUNCTION(execIsFalling); \
	DECLARE_FUNCTION(execIsCrouching); \
	DECLARE_FUNCTION(execGetMaxSpeedForNavMovement); \
	DECLARE_FUNCTION(execGetVelocityForNavMovement); \
	DECLARE_FUNCTION(execRequestPathMove); \
	DECLARE_FUNCTION(execRequestDirectMove);


struct Z_Construct_UClass_UNavMovementInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNavMovementInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavMovementInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNavMovementInterface(UNavMovementInterface&&) = delete; \
	UNavMovementInterface(const UNavMovementInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavMovementInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMovementInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMovementInterface) \
	virtual ~UNavMovementInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavMovementInterface(); \
	friend struct ::Z_Construct_UClass_UNavMovementInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNavMovementInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UNavMovementInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNavMovementInterface_NoRegister) \
	DECLARE_SERIALIZER(UNavMovementInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavMovementInterface() {} \
public: \
	typedef UNavMovementInterface UClassType; \
	typedef INavMovementInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNavMovementInterface;

// ********** End Interface UNavMovementInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_NavMovementInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
