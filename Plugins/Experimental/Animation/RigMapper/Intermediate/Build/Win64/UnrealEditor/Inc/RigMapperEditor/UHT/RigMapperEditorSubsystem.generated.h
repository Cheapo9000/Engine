// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigMapperEditorSubsystem.h"

#ifdef RIGMAPPEREDITOR_RigMapperEditorSubsystem_generated_h
#error "RigMapperEditorSubsystem.generated.h already included, missing '#pragma once' in RigMapperEditorSubsystem.h"
#endif
#define RIGMAPPEREDITOR_RigMapperEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UClass;
class UControlRig;
class ULevelSequence;
class UMovieSceneControlRigParameterSection;
class URigMapperDefinition;
class USkeletalMesh;
struct FDirectoryPath;
struct FFilePath;
struct FFrameRate;

// ********** Begin Class URigMapperEditorSubsystem ************************************************
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimSequenceRate); \
	DECLARE_FUNCTION(execGetAnimSequenceRate); \
	DECLARE_FUNCTION(execGetSectionsFromSequence); \
	DECLARE_FUNCTION(execGetSequenceFromSection); \
	DECLARE_FUNCTION(execConvertControlRigSectionToAnimSequenceNew); \
	DECLARE_FUNCTION(execConvertControlRigSectionToAnimSequence); \
	DECLARE_FUNCTION(execConvertControlRigSectionToCsv); \
	DECLARE_FUNCTION(execConvertControlRigSectionNew); \
	DECLARE_FUNCTION(execConvertControlRigSection); \
	DECLARE_FUNCTION(execConvertAnimSequenceToControlRigSectionNew); \
	DECLARE_FUNCTION(execConvertAnimSequenceToControlRigSection); \
	DECLARE_FUNCTION(execConvertAnimSequenceToCsv); \
	DECLARE_FUNCTION(execConvertAnimSequenceNew); \
	DECLARE_FUNCTION(execConvertAnimSequence); \
	DECLARE_FUNCTION(execConvertCsvToControlRigSectionNew); \
	DECLARE_FUNCTION(execConvertCsvToControlRigSection); \
	DECLARE_FUNCTION(execConvertCsvToAnimSequenceNew); \
	DECLARE_FUNCTION(execConvertCsvToAnimSequence); \
	DECLARE_FUNCTION(execConvertCsv);


struct Z_Construct_UClass_URigMapperEditorSubsystem_Statics;
RIGMAPPEREDITOR_API UClass* Z_Construct_UClass_URigMapperEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigMapperEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_URigMapperEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPEREDITOR_API UClass* ::Z_Construct_UClass_URigMapperEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapperEditor"), Z_Construct_UClass_URigMapperEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(URigMapperEditorSubsystem)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPEREDITOR_API URigMapperEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperEditorSubsystem(URigMapperEditorSubsystem&&) = delete; \
	URigMapperEditorSubsystem(const URigMapperEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPEREDITOR_API, URigMapperEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigMapperEditorSubsystem) \
	RIGMAPPEREDITOR_API virtual ~URigMapperEditorSubsystem();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperEditorSubsystem;

// ********** End Class URigMapperEditorSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Public_RigMapperEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
