// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shakes/LegacyCameraShake.h"

#ifdef ENGINECAMERAS_LegacyCameraShake_generated_h
#error "LegacyCameraShake.generated.h already included, missing '#pragma once' in LegacyCameraShake.h"
#endif
#define ENGINECAMERAS_LegacyCameraShake_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;
class UCameraShakeBase;
class UCameraShakeSourceComponent;
class UClass;
class ULegacyCameraShake;
enum class ECameraShakePlaySpace : uint8;
struct FMinimalViewInfo;

// ********** Begin ScriptStruct FFOscillator ******************************************************
struct Z_Construct_UScriptStruct_FFOscillator_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFOscillator_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FFOscillator;
// ********** End ScriptStruct FFOscillator ********************************************************

// ********** Begin ScriptStruct FROscillator ******************************************************
struct Z_Construct_UScriptStruct_FROscillator_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FROscillator_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FROscillator;
// ********** End ScriptStruct FROscillator ********************************************************

// ********** Begin ScriptStruct FVOscillator ******************************************************
struct Z_Construct_UScriptStruct_FVOscillator_Statics;
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVOscillator_Statics; \
	ENGINECAMERAS_API static class UScriptStruct* StaticStruct();


struct FVOscillator;
// ********** End ScriptStruct FVOscillator ********************************************************

// ********** Begin Class ULegacyCameraShake *******************************************************
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_RPC_WRAPPERS \
	ENGINECAMERAS_API virtual bool ReceiveIsFinished_Implementation() const; \
	DECLARE_FUNCTION(execStartLegacyCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartLegacyCameraShake); \
	DECLARE_FUNCTION(execReceiveIsFinished);


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULegacyCameraShake_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShake_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_INCLASS \
private: \
	static void StaticRegisterNativesULegacyCameraShake(); \
	friend struct ::Z_Construct_UClass_ULegacyCameraShake_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_ULegacyCameraShake_NoRegister(); \
public: \
	DECLARE_CLASS2(ULegacyCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_ULegacyCameraShake_NoRegister) \
	DECLARE_SERIALIZER(ULegacyCameraShake)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINECAMERAS_API ULegacyCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyCameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, ULegacyCameraShake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyCameraShake); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULegacyCameraShake(ULegacyCameraShake&&) = delete; \
	ULegacyCameraShake(const ULegacyCameraShake&) = delete; \
	ENGINECAMERAS_API virtual ~ULegacyCameraShake();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_126_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_INCLASS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULegacyCameraShake;

// ********** End Class ULegacyCameraShake *********************************************************

// ********** Begin Class ULegacyCameraShakePattern ************************************************
struct Z_Construct_UClass_ULegacyCameraShakePattern_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakePattern_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyCameraShakePattern(); \
	friend struct ::Z_Construct_UClass_ULegacyCameraShakePattern_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_ULegacyCameraShakePattern_NoRegister(); \
public: \
	DECLARE_CLASS2(ULegacyCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_ULegacyCameraShakePattern_NoRegister) \
	DECLARE_SERIALIZER(ULegacyCameraShakePattern)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_297_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINECAMERAS_API ULegacyCameraShakePattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULegacyCameraShakePattern(ULegacyCameraShakePattern&&) = delete; \
	ULegacyCameraShakePattern(const ULegacyCameraShakePattern&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, ULegacyCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyCameraShakePattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyCameraShakePattern) \
	ENGINECAMERAS_API virtual ~ULegacyCameraShakePattern();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_294_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_297_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULegacyCameraShakePattern;

// ********** End Class ULegacyCameraShakePattern **************************************************

// ********** Begin Class ULegacyCameraShakeFunctionLibrary ****************************************
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_LegacyCameraShake);


struct Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics;
ENGINECAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyCameraShakeFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINECAMERAS_API UClass* ::Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(ULegacyCameraShakeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EngineCameras"), Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(ULegacyCameraShakeFunctionLibrary)


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINECAMERAS_API ULegacyCameraShakeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULegacyCameraShakeFunctionLibrary(ULegacyCameraShakeFunctionLibrary&&) = delete; \
	ULegacyCameraShakeFunctionLibrary(const ULegacyCameraShakeFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINECAMERAS_API, ULegacyCameraShakeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyCameraShakeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyCameraShakeFunctionLibrary) \
	ENGINECAMERAS_API virtual ~ULegacyCameraShakeFunctionLibrary();


#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_315_PROLOG
#define FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h_318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULegacyCameraShakeFunctionLibrary;

// ********** End Class ULegacyCameraShakeFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_EngineCameras_Source_EngineCameras_Public_Shakes_LegacyCameraShake_h

// ********** Begin Enum EOscillatorWaveform *******************************************************
#define FOREACH_ENUM_EOSCILLATORWAVEFORM(op) \
	op(EOscillatorWaveform::SineWave) \
	op(EOscillatorWaveform::PerlinNoise) 

enum class EOscillatorWaveform : uint8;
template<> struct TIsUEnumClass<EOscillatorWaveform> { enum { Value = true }; };
template<> ENGINECAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOscillatorWaveform>();
// ********** End Enum EOscillatorWaveform *********************************************************

// ********** Begin Enum EInitialOscillatorOffset **************************************************
#define FOREACH_ENUM_EINITIALOSCILLATOROFFSET(op) \
	op(EOO_OffsetRandom) \
	op(EOO_OffsetZero) 

enum EInitialOscillatorOffset : int;
template<> ENGINECAMERAS_NON_ATTRIBUTED_API UEnum* StaticEnum<EInitialOscillatorOffset>();
// ********** End Enum EInitialOscillatorOffset ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
