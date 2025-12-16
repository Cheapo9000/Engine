// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassActorPoolableInterface.h"

#ifdef MASSACTORS_MassActorPoolableInterface_generated_h
#error "MassActorPoolableInterface.generated.h already included, missing '#pragma once' in MassActorPoolableInterface.h"
#endif
#define MASSACTORS_MassActorPoolableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMassActorPoolableInterface ******************************************
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_RPC_WRAPPERS \
	virtual void PrepareForGame_Implementation() {}; \
	virtual void PrepareForPooling_Implementation() {}; \
	virtual bool CanBePooled_Implementation() { return false; }; \
	DECLARE_FUNCTION(execPrepareForGame); \
	DECLARE_FUNCTION(execPrepareForPooling); \
	DECLARE_FUNCTION(execCanBePooled);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMassActorPoolableInterface_Statics;
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSACTORS_API UMassActorPoolableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassActorPoolableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSACTORS_API, UMassActorPoolableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorPoolableInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassActorPoolableInterface(UMassActorPoolableInterface&&) = delete; \
	UMassActorPoolableInterface(const UMassActorPoolableInterface&) = delete; \
	virtual ~UMassActorPoolableInterface() = default;


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassActorPoolableInterface(); \
	friend struct ::Z_Construct_UClass_UMassActorPoolableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSACTORS_API UClass* ::Z_Construct_UClass_UMassActorPoolableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassActorPoolableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassActors"), Z_Construct_UClass_UMassActorPoolableInterface_NoRegister) \
	DECLARE_SERIALIZER(UMassActorPoolableInterface)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMassActorPoolableInterface() {} \
public: \
	typedef UMassActorPoolableInterface UClassType; \
	typedef IMassActorPoolableInterface ThisClass; \
	MASSACTORS_API static bool Execute_CanBePooled(UObject* O); \
	MASSACTORS_API static void Execute_PrepareForGame(UObject* O); \
	MASSACTORS_API static void Execute_PrepareForPooling(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassActorPoolableInterface;

// ********** End Interface UMassActorPoolableInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
