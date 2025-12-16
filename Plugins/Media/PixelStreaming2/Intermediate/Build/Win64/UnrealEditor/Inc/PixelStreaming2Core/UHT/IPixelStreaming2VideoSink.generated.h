// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPixelStreaming2VideoSink.h"

#ifdef PIXELSTREAMING2CORE_IPixelStreaming2VideoSink_generated_h
#error "IPixelStreaming2VideoSink.generated.h already included, missing '#pragma once' in IPixelStreaming2VideoSink.h"
#endif
#define PIXELSTREAMING2CORE_IPixelStreaming2VideoSink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2VideoSink ********************************************
struct Z_Construct_UClass_UPixelStreaming2VideoSink_Statics;
PIXELSTREAMING2CORE_API UClass* Z_Construct_UClass_UPixelStreaming2VideoSink_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2CORE_API UPixelStreaming2VideoSink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2VideoSink(UPixelStreaming2VideoSink&&) = delete; \
	UPixelStreaming2VideoSink(const UPixelStreaming2VideoSink&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2CORE_API, UPixelStreaming2VideoSink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2VideoSink); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2VideoSink) \
	virtual ~UPixelStreaming2VideoSink() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2VideoSink(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2VideoSink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2CORE_API UClass* ::Z_Construct_UClass_UPixelStreaming2VideoSink_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2VideoSink, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2Core"), Z_Construct_UClass_UPixelStreaming2VideoSink_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2VideoSink)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2VideoSink() {} \
public: \
	typedef UPixelStreaming2VideoSink UClassType; \
	typedef IPixelStreaming2VideoSink ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_11_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2VideoSink;

// ********** End Interface UPixelStreaming2VideoSink **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2VideoSink_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
