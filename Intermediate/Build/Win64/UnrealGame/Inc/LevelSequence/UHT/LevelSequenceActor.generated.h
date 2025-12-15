// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceActor.h"

#ifdef LEVELSEQUENCE_LevelSequenceActor_generated_h
#error "LevelSequenceActor.generated.h already included, missing '#pragma once' in LevelSequenceActor.h"
#endif
#define LEVELSEQUENCE_LevelSequenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevelSequence;
class ULevelSequencePlayer;
struct FMovieSceneObjectBindingID;
struct FSoftClassPath;

// ********** Begin Class ULevelSequenceBurnInInitSettings *****************************************
struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInInitSettings(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceBurnInInitSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInInitSettings)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCE_API ULevelSequenceBurnInInitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceBurnInInitSettings(ULevelSequenceBurnInInitSettings&&) = delete; \
	ULevelSequenceBurnInInitSettings(const ULevelSequenceBurnInInitSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceBurnInInitSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInInitSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInInitSettings) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceBurnInInitSettings();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_23_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceBurnInInitSettings;

// ********** End Class ULevelSequenceBurnInInitSettings *******************************************

// ********** Begin Class ULevelSequenceBurnInOptions **********************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBurnIn);


struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInOptions(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceBurnInOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceBurnInOptions(ULevelSequenceBurnInOptions&&) = delete; \
	ULevelSequenceBurnInOptions(const ULevelSequenceBurnInOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ULevelSequenceBurnInOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInOptions) \
	LEVELSEQUENCE_API virtual ~ULevelSequenceBurnInOptions();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_34_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceBurnInOptions;

// ********** End Class ULevelSequenceBurnInOptions ************************************************

// ********** Begin Delegate FOnLevelSequenceLoaded ************************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_74_DELEGATE \
static LEVELSEQUENCE_API void FOnLevelSequenceLoaded_DelegateWrapper(const FScriptDelegate& OnLevelSequenceLoaded);


// ********** End Delegate FOnLevelSequenceLoaded **************************************************

// ********** Begin Class ALevelSequenceActor ******************************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindNamedBindings); \
	DECLARE_FUNCTION(execFindNamedBinding); \
	DECLARE_FUNCTION(execResetBindings); \
	DECLARE_FUNCTION(execResetBinding); \
	DECLARE_FUNCTION(execRemoveBindingByTag); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBindingByTag); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execSetBindingByTag); \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execShowBurnin); \
	DECLARE_FUNCTION(execHideBurnin); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetReplicatePlayback); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execGetSequence);


struct Z_Construct_UClass_ALevelSequenceActor_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelSequenceActor(); \
	friend struct ::Z_Construct_UClass_ALevelSequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ALevelSequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ALevelSequenceActor_NoRegister) \
	DECLARE_SERIALIZER(ALevelSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceActor*>(this); } \
	LEVELSEQUENCE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		LevelSequenceAsset, \
		NETFIELD_REP_END=LevelSequenceAsset	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(LEVELSEQUENCE_API)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelSequenceActor(ALevelSequenceActor&&) = delete; \
	ALevelSequenceActor(const ALevelSequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ALevelSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceActor) \
	LEVELSEQUENCE_API virtual ~ALevelSequenceActor();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_65_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_76_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelSequenceActor;

// ********** End Class ALevelSequenceActor ********************************************************

// ********** Begin ScriptStruct FBoundActorProxy **************************************************
struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics;
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_331_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoundActorProxy_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


struct FBoundActorProxy;
// ********** End ScriptStruct FBoundActorProxy ****************************************************

// ********** Begin Class AReplicatedLevelSequenceActor ********************************************
struct Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_355_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplicatedLevelSequenceActor(); \
	friend struct ::Z_Construct_UClass_AReplicatedLevelSequenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AReplicatedLevelSequenceActor, ALevelSequenceActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_AReplicatedLevelSequenceActor_NoRegister) \
	DECLARE_SERIALIZER(AReplicatedLevelSequenceActor)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_355_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AReplicatedLevelSequenceActor(AReplicatedLevelSequenceActor&&) = delete; \
	AReplicatedLevelSequenceActor(const AReplicatedLevelSequenceActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, AReplicatedLevelSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplicatedLevelSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplicatedLevelSequenceActor) \
	LEVELSEQUENCE_API virtual ~AReplicatedLevelSequenceActor();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_351_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_355_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_355_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_355_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AReplicatedLevelSequenceActor;

// ********** End Class AReplicatedLevelSequenceActor **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
