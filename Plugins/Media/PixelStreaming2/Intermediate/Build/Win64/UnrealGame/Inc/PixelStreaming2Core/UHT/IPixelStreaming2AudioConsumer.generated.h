// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPixelStreaming2AudioConsumer.h"

#ifdef PIXELSTREAMING2CORE_IPixelStreaming2AudioConsumer_generated_h
#error "IPixelStreaming2AudioConsumer.generated.h already included, missing '#pragma once' in IPixelStreaming2AudioConsumer.h"
#endif
#define PIXELSTREAMING2CORE_IPixelStreaming2AudioConsumer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2AudioConsumer ****************************************
struct Z_Construct_UClass_UPixelStreaming2AudioConsumer_Statics;
PIXELSTREAMING2CORE_API UClass* Z_Construct_UClass_UPixelStreaming2AudioConsumer_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2CORE_API UPixelStreaming2AudioConsumer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2AudioConsumer(UPixelStreaming2AudioConsumer&&) = delete; \
	UPixelStreaming2AudioConsumer(const UPixelStreaming2AudioConsumer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2CORE_API, UPixelStreaming2AudioConsumer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2AudioConsumer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2AudioConsumer) \
	virtual ~UPixelStreaming2AudioConsumer() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2AudioConsumer(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2AudioConsumer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2CORE_API UClass* ::Z_Construct_UClass_UPixelStreaming2AudioConsumer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2AudioConsumer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2Core"), Z_Construct_UClass_UPixelStreaming2AudioConsumer_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2AudioConsumer)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2AudioConsumer() {} \
public: \
	typedef UPixelStreaming2AudioConsumer UClassType; \
	typedef IPixelStreaming2AudioConsumer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_9_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2AudioConsumer;

// ********** End Interface UPixelStreaming2AudioConsumer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioConsumer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
