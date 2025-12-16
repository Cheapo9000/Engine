// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBEditorBlueprint.h"

#ifdef USERTOOLBOXCORE_UTBEditorBlueprint_generated_h
#error "UTBEditorBlueprint.generated.h already included, missing '#pragma once' in UTBEditorBlueprint.h"
#endif
#define USERTOOLBOXCORE_UTBEditorBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUTBEditorBlueprint ******************************************************
struct Z_Construct_UClass_UUTBEditorBlueprint_Statics;
USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBEditorBlueprint_NoRegister();

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTBEditorBlueprint(); \
	friend struct ::Z_Construct_UClass_UUTBEditorBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERTOOLBOXCORE_API UClass* ::Z_Construct_UClass_UUTBEditorBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UUTBEditorBlueprint, UEditorUtilityBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), Z_Construct_UClass_UUTBEditorBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UUTBEditorBlueprint)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUTBEditorBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUTBEditorBlueprint(UUTBEditorBlueprint&&) = delete; \
	UUTBEditorBlueprint(const UUTBEditorBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTBEditorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBEditorBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBEditorBlueprint) \
	NO_API virtual ~UUTBEditorBlueprint();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUTBEditorBlueprint;

// ********** End Class UUTBEditorBlueprint ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBEditorBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
