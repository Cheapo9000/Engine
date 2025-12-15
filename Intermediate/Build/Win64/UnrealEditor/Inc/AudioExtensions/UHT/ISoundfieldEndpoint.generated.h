// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISoundfieldEndpoint.h"

#ifdef AUDIOEXTENSIONS_ISoundfieldEndpoint_generated_h
#error "ISoundfieldEndpoint.generated.h already included, missing '#pragma once' in ISoundfieldEndpoint.h"
#endif
#define AUDIOEXTENSIONS_ISoundfieldEndpoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundfieldEndpointSettingsBase ******************************************
struct Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSettingsBase(); \
	friend struct ::Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundfieldEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister) \
	DECLARE_SERIALIZER(USoundfieldEndpointSettingsBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API USoundfieldEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundfieldEndpointSettingsBase(USoundfieldEndpointSettingsBase&&) = delete; \
	USoundfieldEndpointSettingsBase(const USoundfieldEndpointSettingsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, USoundfieldEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSettingsBase) \
	AUDIOEXTENSIONS_API virtual ~USoundfieldEndpointSettingsBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_50_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundfieldEndpointSettingsBase;

// ********** End Class USoundfieldEndpointSettingsBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundfieldEndpoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
