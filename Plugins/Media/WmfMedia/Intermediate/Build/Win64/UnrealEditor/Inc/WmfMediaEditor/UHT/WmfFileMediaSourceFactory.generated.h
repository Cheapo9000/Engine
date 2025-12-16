// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WmfFileMediaSourceFactory.h"

#ifdef WMFMEDIAEDITOR_WmfFileMediaSourceFactory_generated_h
#error "WmfFileMediaSourceFactory.generated.h already included, missing '#pragma once' in WmfFileMediaSourceFactory.h"
#endif
#define WMFMEDIAEDITOR_WmfFileMediaSourceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWmfFileMediaSourceFactory ***********************************************
struct Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics;
WMFMEDIAEDITOR_API UClass* Z_Construct_UClass_UWmfFileMediaSourceFactory_NoRegister();

#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWmfFileMediaSourceFactory(); \
	friend struct ::Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WMFMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UWmfFileMediaSourceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UWmfFileMediaSourceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WmfMediaEditor"), Z_Construct_UClass_UWmfFileMediaSourceFactory_NoRegister) \
	DECLARE_SERIALIZER(UWmfFileMediaSourceFactory)


#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWmfFileMediaSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWmfFileMediaSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWmfFileMediaSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWmfFileMediaSourceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWmfFileMediaSourceFactory(UWmfFileMediaSourceFactory&&) = delete; \
	UWmfFileMediaSourceFactory(const UWmfFileMediaSourceFactory&) = delete; \
	NO_API virtual ~UWmfFileMediaSourceFactory();


#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_13_PROLOG
#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_17_INCLASS \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWmfFileMediaSourceFactory;

// ********** End Class UWmfFileMediaSourceFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
