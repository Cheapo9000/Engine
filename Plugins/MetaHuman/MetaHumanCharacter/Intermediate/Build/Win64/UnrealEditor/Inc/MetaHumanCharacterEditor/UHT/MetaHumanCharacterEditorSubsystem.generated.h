// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetaHumanCharacterEditorSubsystem.h"

#ifdef METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorSubsystem_generated_h
#error "MetaHumanCharacterEditorSubsystem.generated.h already included, missing '#pragma once' in MetaHumanCharacterEditorSubsystem.h"
#endif
#define METAHUMANCHARACTEREDITOR_MetaHumanCharacterEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMetaHumanCharacter;
class UObject;
enum class EImportErrorCode : uint8;
struct FImportFromDNAParams;
struct FImportFromTemplateParams;
struct FMetaHumanCharacterAutoRiggingRequestParams;
struct FMetaHumanCharacterBodyConstraint;
struct FMetaHumanCharacterEditorBuildParameters;
struct FMetaHumanCharacterEyesSettings;
struct FMetaHumanCharacterFitToVerticesParams;
struct FMetaHumanCharacterHeadModelSettings;
struct FMetaHumanCharacterMakeupSettings;
struct FMetaHumanCharacterSkinSettings;
struct FMetaHumanCharacterTextureRequestParams;

// ********** Begin ScriptStruct FMetaHumanCharacterTextureRequestParams ***************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterTextureRequestParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterTextureRequestParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterTextureRequestParams;
// ********** End ScriptStruct FMetaHumanCharacterTextureRequestParams *****************************

// ********** Begin ScriptStruct FMetaHumanCharacterAutoRiggingRequestParams ***********************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterAutoRiggingRequestParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_153_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterAutoRiggingRequestParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterAutoRiggingRequestParams;
// ********** End ScriptStruct FMetaHumanCharacterAutoRiggingRequestParams *************************

// ********** Begin ScriptStruct FMetaHumanCharacterFitToVerticesParams ****************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterFitToVerticesParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_171_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterFitToVerticesParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterFitToVerticesParams;
// ********** End ScriptStruct FMetaHumanCharacterFitToVerticesParams ******************************

// ********** Begin ScriptStruct FMetaHumanCharacterEditorData *************************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterEditorData_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_204_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterEditorData_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterEditorData;
// ********** End ScriptStruct FMetaHumanCharacterEditorData ***************************************

// ********** Begin ScriptStruct FMetaHumanCharacterPreviewAssets **********************************
struct Z_Construct_UScriptStruct_FMetaHumanCharacterPreviewAssets_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_327_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanCharacterPreviewAssets_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanCharacterPreviewAssets;
// ********** End ScriptStruct FMetaHumanCharacterPreviewAssets ************************************

// ********** Begin ScriptStruct FImportFromIdentityParams *****************************************
struct Z_Construct_UScriptStruct_FImportFromIdentityParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportFromIdentityParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FImportFromIdentityParams;
// ********** End ScriptStruct FImportFromIdentityParams *******************************************

// ********** Begin ScriptStruct FImportFromDNAParams **********************************************
struct Z_Construct_UScriptStruct_FImportFromDNAParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_369_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportFromDNAParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FImportFromDNAParams;
// ********** End ScriptStruct FImportFromDNAParams ************************************************

// ********** Begin ScriptStruct FImportBodyFromDNAParams ******************************************
struct Z_Construct_UScriptStruct_FImportBodyFromDNAParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_383_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportBodyFromDNAParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FImportBodyFromDNAParams;
// ********** End ScriptStruct FImportBodyFromDNAParams ********************************************

// ********** Begin ScriptStruct FImportFromTemplateParams *****************************************
struct Z_Construct_UScriptStruct_FImportFromTemplateParams_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_398_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImportFromTemplateParams_Statics; \
	METAHUMANCHARACTEREDITOR_API static class UScriptStruct* StaticStruct();


struct FImportFromTemplateParams;
// ********** End ScriptStruct FImportFromTemplateParams *******************************************

// ********** Begin Class UMetaHumanCharacterEditorSubsystem ***************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBodyConstraints); \
	DECLARE_FUNCTION(execGetBodyConstraints); \
	DECLARE_FUNCTION(execCommitBodyState); \
	DECLARE_FUNCTION(execCompareBodyState); \
	DECLARE_FUNCTION(execImportFromTemplate); \
	DECLARE_FUNCTION(execImportFromFaceDna); \
	DECLARE_FUNCTION(execFitStateToTargetVertices); \
	DECLARE_FUNCTION(execRequestAutoRigging); \
	DECLARE_FUNCTION(execTranslateFaceLandmarks); \
	DECLARE_FUNCTION(execGetFaceLandmarks); \
	DECLARE_FUNCTION(execCompareFaceState); \
	DECLARE_FUNCTION(execCommitFaceState); \
	DECLARE_FUNCTION(execCommitMakeupSettings); \
	DECLARE_FUNCTION(execCommitEyesSettings); \
	DECLARE_FUNCTION(execCompareFaceTextures); \
	DECLARE_FUNCTION(execRequestTextureSources); \
	DECLARE_FUNCTION(execCommitSkinSettings); \
	DECLARE_FUNCTION(execCommitHeadModelSettings); \
	DECLARE_FUNCTION(execBuildMetaHuman); \
	DECLARE_FUNCTION(execCanBuildMetaHuman); \
	DECLARE_FUNCTION(execSpawnMetaHumanActor); \
	DECLARE_FUNCTION(execRunCharacterEditorPipelineForPreview); \
	DECLARE_FUNCTION(execRemoveObjectToEdit); \
	DECLARE_FUNCTION(execIsObjectAddedForEditing); \
	DECLARE_FUNCTION(execTryAddObjectToEdit);


struct Z_Construct_UClass_UMetaHumanCharacterEditorSubsystem_Statics;
METAHUMANCHARACTEREDITOR_API UClass* Z_Construct_UClass_UMetaHumanCharacterEditorSubsystem_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanCharacterEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMetaHumanCharacterEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANCHARACTEREDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanCharacterEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanCharacterEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanCharacterEditor"), Z_Construct_UClass_UMetaHumanCharacterEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanCharacterEditorSubsystem)


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaHumanCharacterEditorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanCharacterEditorSubsystem(UMetaHumanCharacterEditorSubsystem&&) = delete; \
	UMetaHumanCharacterEditorSubsystem(const UMetaHumanCharacterEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaHumanCharacterEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanCharacterEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaHumanCharacterEditorSubsystem) \
	NO_API virtual ~UMetaHumanCharacterEditorSubsystem();


#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_440_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h_445_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanCharacterEditorSubsystem;

// ********** End Class UMetaHumanCharacterEditorSubsystem *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanCharacterEditor_Public_MetaHumanCharacterEditorSubsystem_h

// ********** Begin Enum EImportErrorCode **********************************************************
#define FOREACH_ENUM_EIMPORTERRORCODE(op) \
	op(EImportErrorCode::FittingError) \
	op(EImportErrorCode::InvalidInputData) \
	op(EImportErrorCode::InvalidInputBones) \
	op(EImportErrorCode::InvalidHeadMesh) \
	op(EImportErrorCode::InvalidLeftEyeMesh) \
	op(EImportErrorCode::InvalidRightEyeMesh) \
	op(EImportErrorCode::InvalidTeethMesh) \
	op(EImportErrorCode::NoHeadMeshPresent) \
	op(EImportErrorCode::NoEyeMeshesPresent) \
	op(EImportErrorCode::NoTeethMeshPresent) \
	op(EImportErrorCode::IdentityNotConformed) \
	op(EImportErrorCode::GeneralError) \
	op(EImportErrorCode::CombinedBodyCannotBeImportedAsWholeRig) \
	op(EImportErrorCode::Success) 

enum class EImportErrorCode : uint8;
template<> struct TIsUEnumClass<EImportErrorCode> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EImportErrorCode>();
// ********** End Enum EImportErrorCode ************************************************************

// ********** Begin Enum EMetaHumanRigType *********************************************************
#define FOREACH_ENUM_EMETAHUMANRIGTYPE(op) \
	op(EMetaHumanRigType::JointsOnly) \
	op(EMetaHumanRigType::JointsAndBlendShapes) 

enum class EMetaHumanRigType : uint8;
template<> struct TIsUEnumClass<EMetaHumanRigType> { enum { Value = true }; };
template<> METAHUMANCHARACTEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanRigType>();
// ********** End Enum EMetaHumanRigType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
