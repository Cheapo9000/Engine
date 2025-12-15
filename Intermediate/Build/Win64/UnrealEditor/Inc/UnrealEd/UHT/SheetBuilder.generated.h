// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/SheetBuilder.h"

#ifdef UNREALED_SheetBuilder_generated_h
#error "SheetBuilder.generated.h already included, missing '#pragma once' in SheetBuilder.h"
#endif
#define UNREALED_SheetBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USheetBuilder ************************************************************
struct Z_Construct_UClass_USheetBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_USheetBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSheetBuilder(); \
	friend struct ::Z_Construct_UClass_USheetBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_USheetBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(USheetBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_USheetBuilder_NoRegister) \
	DECLARE_SERIALIZER(USheetBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USheetBuilder(USheetBuilder&&) = delete; \
	USheetBuilder(const USheetBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USheetBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheetBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheetBuilder) \
	UNREALED_API virtual ~USheetBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USheetBuilder;

// ********** End Class USheetBuilder **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h

// ********** Begin Enum ESheetAxis ****************************************************************
#define FOREACH_ENUM_ESHEETAXIS(op) \
	op(AX_Horizontal) \
	op(AX_XAxis) \
	op(AX_YAxis) 

enum ESheetAxis : int;
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<ESheetAxis>();
// ********** End Enum ESheetAxis ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
