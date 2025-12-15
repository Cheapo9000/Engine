// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraphNode_Comment.h"

#ifdef UNREALED_EdGraphNode_Comment_generated_h
#error "EdGraphNode_Comment.generated.h already included, missing '#pragma once' in EdGraphNode_Comment.h"
#endif
#define UNREALED_EdGraphNode_Comment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdGraphNode_Comment *****************************************************
struct Z_Construct_UClass_UEdGraphNode_Comment_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphNode_Comment(); \
	friend struct ::Z_Construct_UClass_UEdGraphNode_Comment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEdGraphNode_Comment_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphNode_Comment, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEdGraphNode_Comment_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphNode_Comment)


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphNode_Comment(UEdGraphNode_Comment&&) = delete; \
	UEdGraphNode_Comment(const UEdGraphNode_Comment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdGraphNode_Comment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode_Comment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode_Comment) \
	UNREALED_API virtual ~UEdGraphNode_Comment();


#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_44_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_48_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphNode_Comment;

// ********** End Class UEdGraphNode_Comment *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h

// ********** Begin Enum ECommentBoxMode ***********************************************************
#define FOREACH_ENUM_ECOMMENTBOXMODE(op) \
	op(ECommentBoxMode::GroupMovement) \
	op(ECommentBoxMode::NoGroupMovement) 

namespace ECommentBoxMode { enum Type : int; }
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ECommentBoxMode::Type>();
// ********** End Enum ECommentBoxMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
