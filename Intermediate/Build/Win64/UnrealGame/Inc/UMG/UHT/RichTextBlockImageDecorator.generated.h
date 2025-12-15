// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RichTextBlockImageDecorator.h"

#ifdef UMG_RichTextBlockImageDecorator_generated_h
#error "RichTextBlockImageDecorator.generated.h already included, missing '#pragma once' in RichTextBlockImageDecorator.h"
#endif
#define UMG_RichTextBlockImageDecorator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRichImageRow *****************************************************
struct Z_Construct_UScriptStruct_FRichImageRow_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichImageRow_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FRichImageRow;
// ********** End ScriptStruct FRichImageRow *******************************************************

// ********** Begin Class URichTextBlockImageDecorator *********************************************
struct Z_Construct_UClass_URichTextBlockImageDecorator_Statics;
UMG_API UClass* Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlockImageDecorator(); \
	friend struct ::Z_Construct_UClass_URichTextBlockImageDecorator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister(); \
public: \
	DECLARE_CLASS2(URichTextBlockImageDecorator, URichTextBlockDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_URichTextBlockImageDecorator_NoRegister) \
	DECLARE_SERIALIZER(URichTextBlockImageDecorator)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URichTextBlockImageDecorator(URichTextBlockImageDecorator&&) = delete; \
	URichTextBlockImageDecorator(const URichTextBlockImageDecorator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, URichTextBlockImageDecorator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlockImageDecorator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlockImageDecorator) \
	UMG_API virtual ~URichTextBlockImageDecorator();


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_38_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URichTextBlockImageDecorator;

// ********** End Class URichTextBlockImageDecorator ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockImageDecorator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
