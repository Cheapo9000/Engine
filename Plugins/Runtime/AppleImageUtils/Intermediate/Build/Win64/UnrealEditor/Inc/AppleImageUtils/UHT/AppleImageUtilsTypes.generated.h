// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppleImageUtilsTypes.h"

#ifdef APPLEIMAGEUTILS_AppleImageUtilsTypes_generated_h
#error "AppleImageUtilsTypes.generated.h already included, missing '#pragma once' in AppleImageUtilsTypes.h"
#endif
#define APPLEIMAGEUTILS_AppleImageUtilsTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAppleImageInterface *************************************************
struct Z_Construct_UClass_UAppleImageInterface_Statics;
APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	APPLEIMAGEUTILS_API UAppleImageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppleImageInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(APPLEIMAGEUTILS_API, UAppleImageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppleImageInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAppleImageInterface(UAppleImageInterface&&) = delete; \
	UAppleImageInterface(const UAppleImageInterface&) = delete; \
	virtual ~UAppleImageInterface() = default;


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAppleImageInterface(); \
	friend struct ::Z_Construct_UClass_UAppleImageInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APPLEIMAGEUTILS_API UClass* ::Z_Construct_UClass_UAppleImageInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAppleImageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AppleImageUtils"), Z_Construct_UClass_UAppleImageInterface_NoRegister) \
	DECLARE_SERIALIZER(UAppleImageInterface)


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_INCLASS_IINTERFACE \
protected: \
	virtual ~IAppleImageInterface() {} \
public: \
	typedef UAppleImageInterface UClassType; \
	typedef IAppleImageInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_39_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAppleImageInterface;

// ********** End Interface UAppleImageInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h

// ********** Begin Enum ETextureRotationDirection *************************************************
#define FOREACH_ENUM_ETEXTUREROTATIONDIRECTION(op) \
	op(ETextureRotationDirection::None) \
	op(ETextureRotationDirection::Left) \
	op(ETextureRotationDirection::Right) \
	op(ETextureRotationDirection::Down) \
	op(ETextureRotationDirection::LeftMirrored) \
	op(ETextureRotationDirection::RightMirrored) \
	op(ETextureRotationDirection::DownMirrored) \
	op(ETextureRotationDirection::UpMirrored) 

enum class ETextureRotationDirection : uint8;
template<> struct TIsUEnumClass<ETextureRotationDirection> { enum { Value = true }; };
template<> APPLEIMAGEUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureRotationDirection>();
// ********** End Enum ETextureRotationDirection ***************************************************

// ********** Begin Enum EAppleTextureType *********************************************************
#define FOREACH_ENUM_EAPPLETEXTURETYPE(op) \
	op(EAppleTextureType::Unknown) \
	op(EAppleTextureType::Image) \
	op(EAppleTextureType::PixelBuffer) \
	op(EAppleTextureType::Surface) \
	op(EAppleTextureType::MetalTexture) 

enum class EAppleTextureType : uint8;
template<> struct TIsUEnumClass<EAppleTextureType> { enum { Value = true }; };
template<> APPLEIMAGEUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAppleTextureType>();
// ********** End Enum EAppleTextureType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
