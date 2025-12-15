// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Channels/IntegerChannelKeyProxy.h"

#ifdef MOVIESCENETOOLS_IntegerChannelKeyProxy_generated_h
#error "IntegerChannelKeyProxy.generated.h already included, missing '#pragma once' in IntegerChannelKeyProxy.h"
#endif
#define MOVIESCENETOOLS_IntegerChannelKeyProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIntegerChannelKeyProxy **************************************************
struct Z_Construct_UClass_UIntegerChannelKeyProxy_Statics;
MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UIntegerChannelKeyProxy_NoRegister();

#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIntegerChannelKeyProxy(); \
	friend struct ::Z_Construct_UClass_UIntegerChannelKeyProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOVIESCENETOOLS_API UClass* ::Z_Construct_UClass_UIntegerChannelKeyProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(UIntegerChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), Z_Construct_UClass_UIntegerChannelKeyProxy_NoRegister) \
	DECLARE_SERIALIZER(UIntegerChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UIntegerChannelKeyProxy*>(this); }


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntegerChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIntegerChannelKeyProxy(UIntegerChannelKeyProxy&&) = delete; \
	UIntegerChannelKeyProxy(const UIntegerChannelKeyProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntegerChannelKeyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntegerChannelKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntegerChannelKeyProxy) \
	NO_API virtual ~UIntegerChannelKeyProxy();


#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_21_PROLOG
#define FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIntegerChannelKeyProxy;

// ********** End Class UIntegerChannelKeyProxy ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_IntegerChannelKeyProxy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
