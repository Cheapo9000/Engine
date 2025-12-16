// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPixelStreaming2AudioProducer.h"

#ifdef PIXELSTREAMING2CORE_IPixelStreaming2AudioProducer_generated_h
#error "IPixelStreaming2AudioProducer.generated.h already included, missing '#pragma once' in IPixelStreaming2AudioProducer.h"
#endif
#define PIXELSTREAMING2CORE_IPixelStreaming2AudioProducer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPixelStreaming2AudioProducer ****************************************
struct Z_Construct_UClass_UPixelStreaming2AudioProducer_Statics;
PIXELSTREAMING2CORE_API UClass* Z_Construct_UClass_UPixelStreaming2AudioProducer_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2CORE_API UPixelStreaming2AudioProducer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2AudioProducer(UPixelStreaming2AudioProducer&&) = delete; \
	UPixelStreaming2AudioProducer(const UPixelStreaming2AudioProducer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2CORE_API, UPixelStreaming2AudioProducer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2AudioProducer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2AudioProducer) \
	virtual ~UPixelStreaming2AudioProducer() = default;


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPixelStreaming2AudioProducer(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2AudioProducer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2CORE_API UClass* ::Z_Construct_UClass_UPixelStreaming2AudioProducer_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2AudioProducer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PixelStreaming2Core"), Z_Construct_UClass_UPixelStreaming2AudioProducer_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2AudioProducer)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPixelStreaming2AudioProducer() {} \
public: \
	typedef UPixelStreaming2AudioProducer UClassType; \
	typedef IPixelStreaming2AudioProducer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_9_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2AudioProducer;

// ********** End Interface UPixelStreaming2AudioProducer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2Core_Public_IPixelStreaming2AudioProducer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
