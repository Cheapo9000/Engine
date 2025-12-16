// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeAvatar.h"

#ifdef XRCREATIVE_XRCreativeAvatar_generated_h
#error "XRCreativeAvatar.generated.h already included, missing '#pragma once' in XRCreativeAvatar.h"
#endif
#define XRCREATIVE_XRCreativeAvatar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALevelSequenceActor;
class UActorComponent;
class UClass;
class UHapticFeedbackEffect_Base;
class UInputMappingContext;
class ULevelSequence;
class UObject;
enum class EControllerHand : uint8;
struct FModifyContextOptions;

// ********** Begin Class AXRCreativeAvatar ********************************************************
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenLevelSequence); \
	DECLARE_FUNCTION(execSpawnTransientActor); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execClearAllInputMappings); \
	DECLARE_FUNCTION(execRemoveInputMappingContext); \
	DECLARE_FUNCTION(execAddInputMappingContext); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execSetComponentTickInEditor); \
	DECLARE_FUNCTION(execGetHeadTransformRoomSpace); \
	DECLARE_FUNCTION(execGetHeadTransform);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AXRCreativeAvatar_Statics;
XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeAvatar_NoRegister();

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRCreativeAvatar(); \
	friend struct ::Z_Construct_UClass_AXRCreativeAvatar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRCREATIVE_API UClass* ::Z_Construct_UClass_AXRCreativeAvatar_NoRegister(); \
public: \
	DECLARE_CLASS2(AXRCreativeAvatar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), Z_Construct_UClass_AXRCreativeAvatar_NoRegister) \
	DECLARE_SERIALIZER(AXRCreativeAvatar)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AXRCreativeAvatar(AXRCreativeAvatar&&) = delete; \
	AXRCreativeAvatar(const AXRCreativeAvatar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeAvatar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRCreativeAvatar) \
	NO_API virtual ~AXRCreativeAvatar();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AXRCreativeAvatar;

// ********** End Class AXRCreativeAvatar **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
