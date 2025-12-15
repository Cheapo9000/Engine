// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/ByteChannelKeyProxy.h"

#ifdef MOVIESCENETOOLS_ByteChannelKeyProxy_generated_h
#error "ByteChannelKeyProxy.generated.h already included, missing '#pragma once' in ByteChannelKeyProxy.h"
#endif
#define MOVIESCENETOOLS_ByteChannelKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UByteChannelKeyProxy *****************************************************
struct Z_Construct_UClass_UByteChannelKeyProxy_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UByteChannelKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUByteChannelKeyProxy(); \
	friend struct ::Z_Construct_UClass_UByteChannelKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UByteChannelKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UByteChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UByteChannelKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(UByteChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UByteChannelKeyProxy*>(this); }


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UByteChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UByteChannelKeyProxy(UByteChannelKeyProxy&&) = delete; \
	UByteChannelKeyProxy(const UByteChannelKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UByteChannelKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UByteChannelKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UByteChannelKeyProxy) \
	NO_API virtual ~UByteChannelKeyProxy();


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_21_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UByteChannelKeyProxy;

// ********** End Class UByteChannelKeyProxy *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_ByteChannelKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
