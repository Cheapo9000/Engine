// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneControlRigParameterSection.h"

#ifdef CONTROLRIG_MovieSceneControlRigParameterSection_generated_h
#error "MovieSceneControlRigParameterSection.generated.h already included, missing '#pragma once' in MovieSceneControlRigParameterSection.h"
#endif
#define CONTROLRIG_MovieSceneControlRigParameterSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEnumParameterNameAndCurve ****************************************
struct Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FEnumParameterNameAndCurve;
// ********** End ScriptStruct FEnumParameterNameAndCurve ******************************************

// ********** Begin ScriptStruct FIntegerParameterNameAndCurve *************************************
struct Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseParameterNameAndValue Super;


struct FIntegerParameterNameAndCurve;
// ********** End ScriptStruct FIntegerParameterNameAndCurve ***************************************

// ********** Begin ScriptStruct FSpaceControlNameAndChannel ***************************************
struct Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FSpaceControlNameAndChannel;
// ********** End ScriptStruct FSpaceControlNameAndChannel *****************************************

// ********** Begin ScriptStruct FChannelMapInfo ***************************************************
struct Z_Construct_UScriptStruct_FChannelMapInfo_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChannelMapInfo_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FChannelMapInfo;
// ********** End ScriptStruct FChannelMapInfo *****************************************************

// ********** Begin Class UMovieSceneControlRigParameterSection ************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneControlRigParameterSection, CONTROLRIG_API)


struct Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneControlRigParameterSection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneControlRigParameterSection, UMovieSceneParameterSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneControlRigParameterSection) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneControlRigParameterSection*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneControlRigParameterSection(UMovieSceneControlRigParameterSection&&) = delete; \
	UMovieSceneControlRigParameterSection(const UMovieSceneControlRigParameterSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UMovieSceneControlRigParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneControlRigParameterSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneControlRigParameterSection) \
	CONTROLRIG_API virtual ~UMovieSceneControlRigParameterSection();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_221_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneControlRigParameterSection;

// ********** End Class UMovieSceneControlRigParameterSection **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
