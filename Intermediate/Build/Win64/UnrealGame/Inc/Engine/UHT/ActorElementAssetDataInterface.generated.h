// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Actor/ActorElementAssetDataInterface.h"

#ifdef ENGINE_ActorElementAssetDataInterface_generated_h
#error "ActorElementAssetDataInterface.generated.h already included, missing '#pragma once' in ActorElementAssetDataInterface.h"
#endif
#define ENGINE_ActorElementAssetDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorElementAssetDataInterface ******************************************
struct Z_Construct_UClass_UActorElementAssetDataInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorElementAssetDataInterface(); \
	friend struct ::Z_Construct_UClass_UActorElementAssetDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorElementAssetDataInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorElementAssetDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorElementAssetDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UActorElementAssetDataInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UActorElementAssetDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorElementAssetDataInterface(UActorElementAssetDataInterface&&) = delete; \
	UActorElementAssetDataInterface(const UActorElementAssetDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorElementAssetDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorElementAssetDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorElementAssetDataInterface) \
	ENGINE_API virtual ~UActorElementAssetDataInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorElementAssetDataInterface;

// ********** End Class UActorElementAssetDataInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Actor_ActorElementAssetDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
