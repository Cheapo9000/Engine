// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementObjectInterface.h"

#ifdef ENGINE_ActorElementObjectInterface_generated_h
#error "ActorElementObjectInterface.generated.h already included, missing '#pragma once' in ActorElementObjectInterface.h"
#endif
#define ENGINE_ActorElementObjectInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementObjectInterface *********************************************
struct Z_Construct_UClass_UActorElementObjectInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorElementObjectInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementObjectInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementObjectInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorElementObjectInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementObjectInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorElementObjectInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementObjectInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementObjectInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementObjectInterface(UActorElementObjectInterface&&) = delete; \
	UActorElementObjectInterface(const UActorElementObjectInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementObjectInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementObjectInterface) \
	ENGINE_API virtual ~UActorElementObjectInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementObjectInterface;

// ********** End Class UActorElementObjectInterface ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementObjectInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
