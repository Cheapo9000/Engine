// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ActorChannel.h"

#ifdef ENGINE_ActorChannel_generated_h
#error "ActorChannel.generated.h already included, missing '#pragma once' in ActorChannel.h"
#endif
#define ENGINE_ActorChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorChannel ************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel, ENGINE_API)


struct Z_Construct_UClass_UActorChannel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UActorChannel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend struct ::Z_Construct_UClass_UActorChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UActorChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UActorChannel_NoRegister) \
	DECLARE_SERIALIZER(UActorChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorChannel(UActorChannel&&) = delete; \
	UActorChannel(const UActorChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UActorChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_76_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorChannel;

// ********** End Class UActorChannel **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
