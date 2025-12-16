// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvfFileMediaSourceFactory.h"

#ifdef AVFMEDIAEDITOR_AvfFileMediaSourceFactory_generated_h
#error "AvfFileMediaSourceFactory.generated.h already included, missing '#pragma once' in AvfFileMediaSourceFactory.h"
#endif
#define AVFMEDIAEDITOR_AvfFileMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvfFileMediaSourceFactory ***********************************************
struct Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics;
AVFMEDIAEDITOR_API UClass* Z_Construct_UClass_UAvfFileMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAvfFileMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVFMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAvfFileMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvfFileMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvfMediaEditor"), Z_Construct_UClass_UAvfFileMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UAvfFileMediaSourceFactory)


#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvfFileMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvfFileMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvfFileMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvfFileMediaSourceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvfFileMediaSourceFactory(UAvfFileMediaSourceFactory&&) = delete; \
	UAvfFileMediaSourceFactory(const UAvfFileMediaSourceFactory&) = delete; \
	NO_API virtual ~UAvfFileMediaSourceFactory();


#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_14_PROLOG
#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_18_INCLASS \
	FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvfFileMediaSourceFactory;

// ********** End Class UAvfFileMediaSourceFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
