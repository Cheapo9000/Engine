// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementTedsTypedElementBridgeInterface.h"

#ifdef ENGINE_ActorElementTedsTypedElementBridgeInterface_generated_h
#error "ActorElementTedsTypedElementBridgeInterface.generated.h already included, missing '#pragma once' in ActorElementTedsTypedElementBridgeInterface.h"
#endif
#define ENGINE_ActorElementTedsTypedElementBridgeInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementTedsTypedElementBridgeInterface *****************************
struct Z_Construct_UClass_UActorElementTedsTypedElementBridgeInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorElementTedsTypedElementBridgeInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementTedsTypedElementBridgeInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementTedsTypedElementBridgeInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorElementTedsTypedElementBridgeInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementTedsTypedElementBridgeInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorElementTedsTypedElementBridgeInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementTedsTypedElementBridgeInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementTedsTypedElementBridgeInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementTedsTypedElementBridgeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementTedsTypedElementBridgeInterface(UActorElementTedsTypedElementBridgeInterface&&) = delete; \
	UActorElementTedsTypedElementBridgeInterface(const UActorElementTedsTypedElementBridgeInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementTedsTypedElementBridgeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementTedsTypedElementBridgeInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementTedsTypedElementBridgeInterface) \
	ENGINE_API virtual ~UActorElementTedsTypedElementBridgeInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementTedsTypedElementBridgeInterface;

// ********** End Class UActorElementTedsTypedElementBridgeInterface *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementTedsTypedElementBridgeInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
