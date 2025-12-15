// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/MirrorDataTable.h"

#ifdef ENGINE_MirrorDataTable_generated_h
#error "MirrorDataTable.generated.h already included, missing '#pragma once' in MirrorDataTable.h"
#endif
#define ENGINE_MirrorDataTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMirrorTableRow ***************************************************
struct Z_Construct_UScriptStruct_FMirrorTableRow_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMirrorTableRow_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FMirrorTableRow;
// ********** End ScriptStruct FMirrorTableRow *****************************************************

// ********** Begin ScriptStruct FMirrorFindReplaceExpression **************************************
struct Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMirrorFindReplaceExpression;
// ********** End ScriptStruct FMirrorFindReplaceExpression ****************************************

// ********** Begin Class UMirrorDataTable *********************************************************
struct Z_Construct_UClass_UMirrorDataTable_Statics;
ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirrorDataTable(); \
	friend struct ::Z_Construct_UClass_UMirrorDataTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UMirrorDataTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UMirrorDataTable, UDataTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UMirrorDataTable_NoRegister) \
	DECLARE_SERIALIZER(UMirrorDataTable)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMirrorDataTable(UMirrorDataTable&&) = delete; \
	UMirrorDataTable(const UMirrorDataTable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMirrorDataTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirrorDataTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirrorDataTable) \
	ENGINE_API virtual ~UMirrorDataTable();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_100_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMirrorDataTable;

// ********** End Class UMirrorDataTable ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h

// ********** Begin Enum EMirrorRowType ************************************************************
#define FOREACH_ENUM_EMIRRORROWTYPE(op) \
	op(EMirrorRowType::Bone) \
	op(EMirrorRowType::AnimationNotify) \
	op(EMirrorRowType::Curve) \
	op(EMirrorRowType::SyncMarker) \
	op(EMirrorRowType::Custom) 

namespace EMirrorRowType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMirrorRowType::Type>();
// ********** End Enum EMirrorRowType **************************************************************

// ********** Begin Enum EMirrorFindReplaceMethod **************************************************
#define FOREACH_ENUM_EMIRRORFINDREPLACEMETHOD(op) \
	op(EMirrorFindReplaceMethod::Prefix) \
	op(EMirrorFindReplaceMethod::Suffix) \
	op(EMirrorFindReplaceMethod::RegularExpression) 

namespace EMirrorFindReplaceMethod { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMirrorFindReplaceMethod::Type>();
// ********** End Enum EMirrorFindReplaceMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
