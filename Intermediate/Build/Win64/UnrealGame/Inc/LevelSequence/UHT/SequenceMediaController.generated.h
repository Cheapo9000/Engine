// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequenceMediaController.h"

#ifdef LEVELSEQUENCE_SequenceMediaController_generated_h
#error "SequenceMediaController.generated.h already included, missing '#pragma once' in SequenceMediaController.h"
#endif
#define LEVELSEQUENCE_SequenceMediaController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class UMediaComponent;

// ********** Begin Class ALevelSequenceMediaController ********************************************
#define FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ServerStartTimeSeconds); \
	DECLARE_FUNCTION(execSynchronizeToServer); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetMediaComponent); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_ALevelSequenceMediaController_Statics;
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceMediaController_NoRegister();

#define FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelSequenceMediaController(); \
	friend struct ::Z_Construct_UClass_ALevelSequenceMediaController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCE_API UClass* ::Z_Construct_UClass_ALevelSequenceMediaController_NoRegister(); \
public: \
	DECLARE_CLASS2(ALevelSequenceMediaController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), Z_Construct_UClass_ALevelSequenceMediaController_NoRegister) \
	DECLARE_SERIALIZER(ALevelSequenceMediaController) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceMediaController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerStartTimeSeconds=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerStartTimeSeconds	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(LEVELSEQUENCE_API)


#define FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALevelSequenceMediaController(ALevelSequenceMediaController&&) = delete; \
	ALevelSequenceMediaController(const ALevelSequenceMediaController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCE_API, ALevelSequenceMediaController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceMediaController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceMediaController) \
	LEVELSEQUENCE_API virtual ~ALevelSequenceMediaController();


#define FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_20_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALevelSequenceMediaController;

// ********** End Class ALevelSequenceMediaController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
