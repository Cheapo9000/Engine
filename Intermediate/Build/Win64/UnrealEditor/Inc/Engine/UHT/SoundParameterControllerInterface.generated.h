// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SoundParameterControllerInterface.h"

#ifdef ENGINE_SoundParameterControllerInterface_generated_h
#error "SoundParameterControllerInterface.generated.h already included, missing '#pragma once' in SoundParameterControllerInterface.h"
#endif
#define ENGINE_SoundParameterControllerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FAudioParameter;

// ********** Begin Interface USoundParameterControllerInterface ***********************************
struct Z_Construct_UClass_USoundParameterControllerInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundParameterControllerInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundParameterControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundParameterControllerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundParameterControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundParameterControllerInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundParameterControllerInterface(USoundParameterControllerInterface&&) = delete; \
	USoundParameterControllerInterface(const USoundParameterControllerInterface&) = delete; \
	virtual ~USoundParameterControllerInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSoundParameterControllerInterface(); \
	friend struct ::Z_Construct_UClass_USoundParameterControllerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundParameterControllerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundParameterControllerInterface, UAudioParameterControllerInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundParameterControllerInterface_NoRegister) \
	DECLARE_SERIALIZER(USoundParameterControllerInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~ISoundParameterControllerInterface() {} \
public: \
	typedef USoundParameterControllerInterface UClassType; \
	typedef ISoundParameterControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundParameterControllerInterface;

// ********** End Interface USoundParameterControllerInterface *************************************

// ********** Begin Class UAudioParameterConversionStatics *****************************************
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execObjectArrayToAudioParameter); \
	DECLARE_FUNCTION(execStringArrayToAudioParameter); \
	DECLARE_FUNCTION(execIntegerArrayToAudioParameter); \
	DECLARE_FUNCTION(execFloatArrayToAudioParameter); \
	DECLARE_FUNCTION(execBooleanArrayToAudioParameter); \
	DECLARE_FUNCTION(execObjectToAudioParameter); \
	DECLARE_FUNCTION(execStringToAudioParameter); \
	DECLARE_FUNCTION(execIntegerToAudioParameter); \
	DECLARE_FUNCTION(execFloatToAudioParameter); \
	DECLARE_FUNCTION(execBooleanToAudioParameter);


struct Z_Construct_UClass_UAudioParameterConversionStatics_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioParameterConversionStatics(); \
	friend struct ::Z_Construct_UClass_UAudioParameterConversionStatics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioParameterConversionStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioParameterConversionStatics_NoRegister) \
	DECLARE_SERIALIZER(UAudioParameterConversionStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioParameterConversionStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioParameterConversionStatics(UAudioParameterConversionStatics&&) = delete; \
	UAudioParameterConversionStatics(const UAudioParameterConversionStatics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioParameterConversionStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterConversionStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterConversionStatics) \
	ENGINE_API virtual ~UAudioParameterConversionStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_65_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioParameterConversionStatics;

// ********** End Class UAudioParameterConversionStatics *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_SoundParameterControllerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
