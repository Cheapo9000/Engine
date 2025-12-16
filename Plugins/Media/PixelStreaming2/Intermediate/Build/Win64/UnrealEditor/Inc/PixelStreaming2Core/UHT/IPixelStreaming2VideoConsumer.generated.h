// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPixelStreaming2VideoConsumer.h"

#ifdef PIXELSTREAMING2CORE_IPixelStreaming2VideoConsumer_generated_h
#error "IPixelStreaming2VideoConsumer.generated.h already included, missing '#pragma once' in IPixelStreaming2VideoConsumer.h"
#endif
#define PIXELSTREAMING2CORE_IPixelStreaming2VideoConsumer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2VideoConsumer ****************************************
struct Z_Construct_UClass_UPixelStreaming2VideoConsumer_Statics;
PIXELSTREAMING2CORE_API UClass* Z_Construct_UClass_UPixelStreaming2VideoConsumer_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2CORE_API UPixelStreaming2VideoConsumer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2VideoConsumer(UPixelStreaming2VideoConsumer&&) = delete; \
	UPixelStreaming2VideoConsumer(const UPixelStreaming2VideoConsumer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2CORE_API, UPixelStreaming2VideoConsumer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2VideoConsumer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2VideoConsumer) \
	virtual ~UPixelStreaming2VideoConsumer() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2VideoConsumer(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2VideoConsumer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2CORE_API UClass* ::Z_Construct_UClass_UPixelStreaming2VideoConsumer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2VideoConsumer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2Core"), Z_Construct_UClass_UPixelStreaming2VideoConsumer_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2VideoConsumer)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2VideoConsumer() {} \
public: \
	typedef UPixelStreaming2VideoConsumer UClassType; \
	typedef IPixelStreaming2VideoConsumer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_10_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2VideoConsumer;

// ********** End Interface UPixelStreaming2VideoConsumer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoConsumer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
