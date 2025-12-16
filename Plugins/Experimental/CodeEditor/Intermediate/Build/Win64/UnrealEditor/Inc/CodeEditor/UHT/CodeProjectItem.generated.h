// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProjectItem.h"

#ifdef CODEEDITOR_CodeProjectItem_generated_h
#error "CodeProjectItem.generated.h already included, missing '#pragma once' in CodeProjectItem.h"
#endif
#define CODEEDITOR_CodeProjectItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCodeProjectItem *********************************************************
struct Z_Construct_UClass_UCodeProjectItem_Statics;
CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectItem_NoRegister();

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProjectItem(); \
	friend struct ::Z_Construct_UClass_UCodeProjectItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEEDITOR_API UClass* ::Z_Construct_UClass_UCodeProjectItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCodeProjectItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), Z_Construct_UClass_UCodeProjectItem_NoRegister) \
	DECLARE_SERIALIZER(UCodeProjectItem)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProjectItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProjectItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProjectItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProjectItem); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCodeProjectItem(UCodeProjectItem&&) = delete; \
	UCodeProjectItem(const UCodeProjectItem&) = delete; \
	NO_API virtual ~UCodeProjectItem();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCodeProjectItem;

// ********** End Class UCodeProjectItem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h

// ********** Begin Enum ECodeProjectItemType ******************************************************
#define FOREACH_ENUM_ECODEPROJECTITEMTYPE(op) \
	op(ECodeProjectItemType::Project) \
	op(ECodeProjectItemType::Folder) \
	op(ECodeProjectItemType::File) 

namespace ECodeProjectItemType { enum Type : int; }
template<> CODEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECodeProjectItemType::Type>();
// ********** End Enum ECodeProjectItemType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
