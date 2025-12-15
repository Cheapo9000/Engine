// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Blueprint.h"

#ifdef ENGINE_Blueprint_generated_h
#error "Blueprint.generated.h already included, missing '#pragma once' in Blueprint.h"
#endif
#define ENGINE_Blueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDEPRECATED_Breakpoint ***************************************************
struct Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_Breakpoint(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_Breakpoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_Breakpoint, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDEPRECATED_Breakpoint_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_Breakpoint)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_Breakpoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_Breakpoint(UDEPRECATED_Breakpoint&&) = delete; \
	UDEPRECATED_Breakpoint(const UDEPRECATED_Breakpoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_Breakpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_Breakpoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_Breakpoint) \
	NO_API virtual ~UDEPRECATED_Breakpoint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_95_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_Breakpoint;

// ********** End Class UDEPRECATED_Breakpoint *****************************************************

// ********** Begin ScriptStruct FBlueprintMacroCosmeticInfo ***************************************
struct Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBlueprintMacroCosmeticInfo;
// ********** End ScriptStruct FBlueprintMacroCosmeticInfo *****************************************

// ********** Begin ScriptStruct FBPVariableMetaDataEntry ******************************************
struct Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_181_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBPVariableMetaDataEntry;
// ********** End ScriptStruct FBPVariableMetaDataEntry ********************************************

// ********** Begin ScriptStruct FBPVariableDescription ********************************************
struct Z_Construct_UScriptStruct_FBPVariableDescription_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_203_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBPVariableDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBPVariableDescription;
// ********** End ScriptStruct FBPVariableDescription **********************************************

// ********** Begin ScriptStruct FBPInterfaceDescription *******************************************
struct Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_263_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBPInterfaceDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBPInterfaceDescription;
// ********** End ScriptStruct FBPInterfaceDescription *********************************************

// ********** Begin ScriptStruct FEditedDocumentInfo ***********************************************
struct Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditedDocumentInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEditedDocumentInfo;
// ********** End ScriptStruct FEditedDocumentInfo *************************************************

// ********** Begin ScriptStruct FBPEditorBookmarkNode *********************************************
struct Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBPEditorBookmarkNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBPEditorBookmarkNode;
// ********** End ScriptStruct FBPEditorBookmarkNode ***********************************************

// ********** Begin Class UBlueprint ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprint, ENGINE_API)


struct Z_Construct_UClass_UBlueprint_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprint(); \
	friend struct ::Z_Construct_UClass_UBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprint, UBlueprintCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UBlueprint, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UBlueprint) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprint); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprint(UBlueprint&&) = delete; \
	UBlueprint(const UBlueprint&) = delete; \
	ENGINE_API virtual ~UBlueprint();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_401_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h_404_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprint;

// ********** End Class UBlueprint *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Blueprint_h

// ********** Begin Enum EBlueprintStatus **********************************************************
#define FOREACH_ENUM_EBLUEPRINTSTATUS(op) \
	op(BS_Unknown) \
	op(BS_Dirty) \
	op(BS_Error) \
	op(BS_UpToDate) \
	op(BS_BeingCreated) \
	op(BS_UpToDateWithWarnings) 

enum EBlueprintStatus : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintStatus>();
// ********** End Enum EBlueprintStatus ************************************************************

// ********** Begin Enum EBlueprintType ************************************************************
#define FOREACH_ENUM_EBLUEPRINTTYPE(op) \
	op(BPTYPE_Normal) \
	op(BPTYPE_Const) \
	op(BPTYPE_MacroLibrary) \
	op(BPTYPE_Interface) \
	op(BPTYPE_LevelScript) \
	op(BPTYPE_FunctionLibrary) 

enum EBlueprintType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintType>();
// ********** End Enum EBlueprintType **************************************************************

// ********** Begin Enum EBlueprintCompileMode *****************************************************
#define FOREACH_ENUM_EBLUEPRINTCOMPILEMODE(op) \
	op(EBlueprintCompileMode::Default) \
	op(EBlueprintCompileMode::Development) \
	op(EBlueprintCompileMode::FinalRelease) 

enum class EBlueprintCompileMode : uint8;
template<> struct TIsUEnumClass<EBlueprintCompileMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintCompileMode>();
// ********** End Enum EBlueprintCompileMode *******************************************************

// ********** Begin Enum EShouldCookBlueprintPropertyGuids *****************************************
#define FOREACH_ENUM_ESHOULDCOOKBLUEPRINTPROPERTYGUIDS(op) \
	op(EShouldCookBlueprintPropertyGuids::No) \
	op(EShouldCookBlueprintPropertyGuids::Yes) \
	op(EShouldCookBlueprintPropertyGuids::Inherit) 

enum class EShouldCookBlueprintPropertyGuids;
template<> struct TIsUEnumClass<EShouldCookBlueprintPropertyGuids> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EShouldCookBlueprintPropertyGuids>();
// ********** End Enum EShouldCookBlueprintPropertyGuids *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
