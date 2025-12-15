// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PacketHandlers/EngineHandlerComponentFactory.h"

#ifdef ENGINE_EngineHandlerComponentFactory_generated_h
#error "EngineHandlerComponentFactory.generated.h already included, missing '#pragma once' in EngineHandlerComponentFactory.h"
#endif
#define ENGINE_EngineHandlerComponentFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEngineHandlerComponentFactory *******************************************
struct Z_Construct_UClass_UEngineHandlerComponentFactory_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEngineHandlerComponentFactory(); \
	friend struct ::Z_Construct_UClass_UEngineHandlerComponentFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEngineHandlerComponentFactory, UHandlerComponentFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEngineHandlerComponentFactory_NoRegister) \
	DECLARE_SERIALIZER(UEngineHandlerComponentFactory)


#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineHandlerComponentFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineHandlerComponentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineHandlerComponentFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineHandlerComponentFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEngineHandlerComponentFactory(UEngineHandlerComponentFactory&&) = delete; \
	UEngineHandlerComponentFactory(const UEngineHandlerComponentFactory&) = delete; \
	NO_API virtual ~UEngineHandlerComponentFactory();


#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEngineHandlerComponentFactory;

// ********** End Class UEngineHandlerComponentFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PacketHandlers_EngineHandlerComponentFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
