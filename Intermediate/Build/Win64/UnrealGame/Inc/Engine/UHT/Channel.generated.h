// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Channel.h"

#ifdef ENGINE_Channel_generated_h
#error "Channel.generated.h already included, missing '#pragma once' in Channel.h"
#endif
#define ENGINE_Channel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChannel *****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel, ENGINE_API)


struct Z_Construct_UClass_UChannel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct ::Z_Construct_UClass_UChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UChannel_NoRegister) \
	DECLARE_SERIALIZER(UChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChannel(UChannel&&) = delete; \
	UChannel(const UChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel) \
	ENGINE_API virtual ~UChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_61_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChannel;

// ********** End Class UChannel *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
