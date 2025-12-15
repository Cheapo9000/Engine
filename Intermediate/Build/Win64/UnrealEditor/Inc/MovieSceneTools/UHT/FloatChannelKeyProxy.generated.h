// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/FloatChannelKeyProxy.h"

#ifdef MOVIESCENETOOLS_FloatChannelKeyProxy_generated_h
#error "FloatChannelKeyProxy.generated.h already included, missing '#pragma once' in FloatChannelKeyProxy.h"
#endif
#define MOVIESCENETOOLS_FloatChannelKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFloatChannelKeyProxy ****************************************************
struct Z_Construct_UClass_UFloatChannelKeyProxy_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatChannelKeyProxy(); \
	friend struct ::Z_Construct_UClass_UFloatChannelKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UFloatChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(UFloatChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UFloatChannelKeyProxy*>(this); }


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFloatChannelKeyProxy(UFloatChannelKeyProxy&&) = delete; \
	UFloatChannelKeyProxy(const UFloatChannelKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatChannelKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatChannelKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatChannelKeyProxy) \
	NO_API virtual ~UFloatChannelKeyProxy();


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_20_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFloatChannelKeyProxy;

// ********** End Class UFloatChannelKeyProxy ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
