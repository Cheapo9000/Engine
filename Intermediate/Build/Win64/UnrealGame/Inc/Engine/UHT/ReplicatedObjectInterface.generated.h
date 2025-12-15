// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ReplicatedObjectInterface.h"

#ifdef ENGINE_ReplicatedObjectInterface_generated_h
#error "ReplicatedObjectInterface.generated.h already included, missing '#pragma once' in ReplicatedObjectInterface.h"
#endif
#define ENGINE_ReplicatedObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UReplicatedObjectInterface *******************************************
struct Z_Construct_UClass_UReplicatedObjectInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UReplicatedObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReplicatedObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReplicatedObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedObjectInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplicatedObjectInterface(UReplicatedObjectInterface&&) = delete; \
	UReplicatedObjectInterface(const UReplicatedObjectInterface&) = delete; \
	virtual ~UReplicatedObjectInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUReplicatedObjectInterface(); \
	friend struct ::Z_Construct_UClass_UReplicatedObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UReplicatedObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplicatedObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UReplicatedObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UReplicatedObjectInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IReplicatedObjectInterface() {} \
public: \
	typedef UReplicatedObjectInterface UClassType; \
	typedef IReplicatedObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplicatedObjectInterface;

// ********** End Interface UReplicatedObjectInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_ReplicatedObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
