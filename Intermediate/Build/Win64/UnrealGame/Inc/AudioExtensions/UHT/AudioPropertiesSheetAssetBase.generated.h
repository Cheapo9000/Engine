// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioPropertiesSheetAssetBase.h"

#ifdef AUDIOEXTENSIONS_AudioPropertiesSheetAssetBase_generated_h
#error "AudioPropertiesSheetAssetBase.generated.h already included, missing '#pragma once' in AudioPropertiesSheetAssetBase.h"
#endif
#define AUDIOEXTENSIONS_AudioPropertiesSheetAssetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Interface UAudioPropertiesSheetAssetUserInterface ******************************
struct Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UAudioPropertiesSheetAssetUserInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioPropertiesSheetAssetUserInterface(UAudioPropertiesSheetAssetUserInterface&&) = delete; \
	UAudioPropertiesSheetAssetUserInterface(const UAudioPropertiesSheetAssetUserInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UAudioPropertiesSheetAssetUserInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPropertiesSheetAssetUserInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPropertiesSheetAssetUserInterface) \
	virtual ~UAudioPropertiesSheetAssetUserInterface() = default;


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioPropertiesSheetAssetUserInterface(); \
	friend struct ::Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioPropertiesSheetAssetUserInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UAudioPropertiesSheetAssetUserInterface_NoRegister) \
	DECLARE_SERIALIZER(UAudioPropertiesSheetAssetUserInterface)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioPropertiesSheetAssetUserInterface() {} \
public: \
	typedef UAudioPropertiesSheetAssetUserInterface UClassType; \
	typedef IAudioPropertiesSheetAssetUserInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioPropertiesSheetAssetUserInterface;

// ********** End Interface UAudioPropertiesSheetAssetUserInterface ********************************

// ********** Begin Class UAudioPropertiesSheetAssetBase *******************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execCopyToObjectProperties);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioPropertiesSheetAssetBase(); \
	friend struct ::Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioPropertiesSheetAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister) \
	DECLARE_SERIALIZER(UAudioPropertiesSheetAssetBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UAudioPropertiesSheetAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioPropertiesSheetAssetBase(UAudioPropertiesSheetAssetBase&&) = delete; \
	UAudioPropertiesSheetAssetBase(const UAudioPropertiesSheetAssetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UAudioPropertiesSheetAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPropertiesSheetAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPropertiesSheetAssetBase) \
	AUDIOEXTENSIONS_API virtual ~UAudioPropertiesSheetAssetBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_39_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioPropertiesSheetAssetBase;

// ********** End Class UAudioPropertiesSheetAssetBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
