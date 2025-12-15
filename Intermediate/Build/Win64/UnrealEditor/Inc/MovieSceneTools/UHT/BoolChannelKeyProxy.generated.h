// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/BoolChannelKeyProxy.h"

#ifdef MOVIESCENETOOLS_BoolChannelKeyProxy_generated_h
#error "BoolChannelKeyProxy.generated.h already included, missing '#pragma once' in BoolChannelKeyProxy.h"
#endif
#define MOVIESCENETOOLS_BoolChannelKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBoolChannelKeyProxy *****************************************************
struct Z_Construct_UClass_UBoolChannelKeyProxy_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UBoolChannelKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoolChannelKeyProxy(); \
	friend struct ::Z_Construct_UClass_UBoolChannelKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UBoolChannelKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoolChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UBoolChannelKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(UBoolChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UBoolChannelKeyProxy*>(this); }


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoolChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoolChannelKeyProxy(UBoolChannelKeyProxy&&) = delete; \
	UBoolChannelKeyProxy(const UBoolChannelKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoolChannelKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoolChannelKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoolChannelKeyProxy) \
	NO_API virtual ~UBoolChannelKeyProxy();


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_20_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoolChannelKeyProxy;

// ********** End Class UBoolChannelKeyProxy *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
