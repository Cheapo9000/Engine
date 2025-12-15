// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementSelectionInterface.h"

#ifdef ENGINE_ActorElementSelectionInterface_generated_h
#error "ActorElementSelectionInterface.generated.h already included, missing '#pragma once' in ActorElementSelectionInterface.h"
#endif
#define ENGINE_ActorElementSelectionInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementSelectionInterface ******************************************
struct Z_Construct_UClass_UActorElementSelectionInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorElementSelectionInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementSelectionInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementSelectionInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorElementSelectionInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementSelectionInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorElementSelectionInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementSelectionInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementSelectionInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementSelectionInterface(UActorElementSelectionInterface&&) = delete; \
	UActorElementSelectionInterface(const UActorElementSelectionInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementSelectionInterface) \
	ENGINE_API virtual ~UActorElementSelectionInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementSelectionInterface;

// ********** End Class UActorElementSelectionInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementSelectionInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
