// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/EditorEngine.h"

#ifdef UNREALED_EditorEngine_generated_h
#error "EditorEngine.generated.h already included, missing '#pragma once' in EditorEngine.h"
#endif
#define UNREALED_EditorEngine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCopySelectedInfo *************************************************
struct Z_Construct_UScriptStruct_FCopySelectedInfo_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCopySelectedInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FCopySelectedInfo;
// ********** End ScriptStruct FCopySelectedInfo ***************************************************

// ********** Begin ScriptStruct FSelectionStateOfLevel ********************************************
struct Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FSelectionStateOfLevel;
// ********** End ScriptStruct FSelectionStateOfLevel **********************************************

// ********** Begin Class UEditorEngine ************************************************************
struct Z_Construct_UClass_UEditorEngine_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorEngine_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_401_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend struct ::Z_Construct_UClass_UEditorEngine_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorEngine_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorEngine_NoRegister) \
	DECLARE_SERIALIZER(UEditorEngine)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_401_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorEngine(UEditorEngine&&) = delete; \
	UEditorEngine(const UEditorEngine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine) \
	UNREALED_API virtual ~UEditorEngine();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_397_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_401_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_401_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_401_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorEngine;

// ********** End Class UEditorEngine **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h

// ********** Begin Enum EMapSetBrushFlags *********************************************************
#define FOREACH_ENUM_EMAPSETBRUSHFLAGS(op) \
	op(MSB_BrushColor) \
	op(MSB_Group) \
	op(MSB_PolyFlags) \
	op(MSB_BrushType) 

enum EMapSetBrushFlags : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EMapSetBrushFlags>();
// ********** End Enum EMapSetBrushFlags ***********************************************************

// ********** Begin Enum EPasteTo ******************************************************************
#define FOREACH_ENUM_EPASTETO(op) \
	op(PT_OriginalLocation) \
	op(PT_Here) \
	op(PT_WorldOrigin) 

enum EPasteTo : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EPasteTo>();
// ********** End Enum EPasteTo ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
