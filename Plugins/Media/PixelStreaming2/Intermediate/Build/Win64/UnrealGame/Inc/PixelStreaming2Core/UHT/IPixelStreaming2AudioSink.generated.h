// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPixelStreaming2AudioSink.h"

#ifdef PIXELSTREAMING2CORE_IPixelStreaming2AudioSink_generated_h
#error "IPixelStreaming2AudioSink.generated.h already included, missing '#pragma once' in IPixelStreaming2AudioSink.h"
#endif
#define PIXELSTREAMING2CORE_IPixelStreaming2AudioSink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2AudioSink ********************************************
struct Z_Construct_UClass_UPixelStreaming2AudioSink_Statics;
PIXELSTREAMING2CORE_API UClass* Z_Construct_UClass_UPixelStreaming2AudioSink_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2CORE_API UPixelStreaming2AudioSink(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2AudioSink(UPixelStreaming2AudioSink&&) = delete; \
	UPixelStreaming2AudioSink(const UPixelStreaming2AudioSink&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2CORE_API, UPixelStreaming2AudioSink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2AudioSink); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2AudioSink) \
	virtual ~UPixelStreaming2AudioSink() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2AudioSink(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2AudioSink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2CORE_API UClass* ::Z_Construct_UClass_UPixelStreaming2AudioSink_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2AudioSink, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2Core"), Z_Construct_UClass_UPixelStreaming2AudioSink_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2AudioSink)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2AudioSink() {} \
public: \
	typedef UPixelStreaming2AudioSink UClassType; \
	typedef IPixelStreaming2AudioSink ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_11_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2AudioSink;

// ********** End Interface UPixelStreaming2AudioSink **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioSink_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
