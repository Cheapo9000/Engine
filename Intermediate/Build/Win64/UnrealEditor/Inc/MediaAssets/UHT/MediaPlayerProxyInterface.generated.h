// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlayerProxyInterface.h"

#ifdef MEDIAASSETS_MediaPlayerProxyInterface_generated_h
#error "MediaPlayerProxyInterface.generated.h already included, missing '#pragma once' in MediaPlayerProxyInterface.h"
#endif
#define MEDIAASSETS_MediaPlayerProxyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMediaPlayerProxyInterface *******************************************
struct Z_Construct_UClass_UMediaPlayerProxyInterface_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaPlayerProxyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaPlayerProxyInterface(UMediaPlayerProxyInterface&&) = delete; \
	UMediaPlayerProxyInterface(const UMediaPlayerProxyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaPlayerProxyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerProxyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerProxyInterface) \
	virtual ~UMediaPlayerProxyInterface() = default;


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMediaPlayerProxyInterface(); \
	friend struct ::Z_Construct_UClass_UMediaPlayerProxyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaPlayerProxyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister) \
	DECLARE_SERIALIZER(UMediaPlayerProxyInterface)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMediaPlayerProxyInterface() {} \
public: \
	typedef UMediaPlayerProxyInterface UClassType; \
	typedef IMediaPlayerProxyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaPlayerProxyInterface;

// ********** End Interface UMediaPlayerProxyInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
