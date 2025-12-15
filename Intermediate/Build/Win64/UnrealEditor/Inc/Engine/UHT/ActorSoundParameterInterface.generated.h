// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/ActorSoundParameterInterface.h"

#ifdef ENGINE_ActorSoundParameterInterface_generated_h
#error "ActorSoundParameterInterface.generated.h already included, missing '#pragma once' in ActorSoundParameterInterface.h"
#endif
#define ENGINE_ActorSoundParameterInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioParameter;

// ********** Begin Interface UActorSoundParameterInterface ****************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActorSoundParams);


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UActorSoundParameterInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorSoundParameterInterface(UActorSoundParameterInterface&&) = delete; \
	UActorSoundParameterInterface(const UActorSoundParameterInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorSoundParameterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSoundParameterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSoundParameterInterface) \
	virtual ~UActorSoundParameterInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorSoundParameterInterface(); \
	friend struct ::Z_Construct_UClass_UActorSoundParameterInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorSoundParameterInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorSoundParameterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorSoundParameterInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorSoundParameterInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorSoundParameterInterface() {} \
public: \
	typedef UActorSoundParameterInterface UClassType; \
	typedef IActorSoundParameterInterface ThisClass; \
	ENGINE_API static void Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorSoundParameterInterface;

// ********** End Interface UActorSoundParameterInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
