// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementCounterInterface.h"

#ifdef ENGINE_ActorElementCounterInterface_generated_h
#error "ActorElementCounterInterface.generated.h already included, missing '#pragma once' in ActorElementCounterInterface.h"
#endif
#define ENGINE_ActorElementCounterInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementCounterInterface ********************************************
struct Z_Construct_UClass_UActorElementCounterInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorElementCounterInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementCounterInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementCounterInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorElementCounterInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementCounterInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorElementCounterInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementCounterInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementCounterInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementCounterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementCounterInterface(UActorElementCounterInterface&&) = delete; \
	UActorElementCounterInterface(const UActorElementCounterInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementCounterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementCounterInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementCounterInterface) \
	ENGINE_API virtual ~UActorElementCounterInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementCounterInterface;

// ********** End Class UActorElementCounterInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementCounterInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
