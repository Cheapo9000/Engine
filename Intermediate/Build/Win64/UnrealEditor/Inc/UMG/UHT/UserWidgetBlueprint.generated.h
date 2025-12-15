// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/UserWidgetBlueprint.h"

#ifdef UMG_UserWidgetBlueprint_generated_h
#error "UserWidgetBlueprint.generated.h already included, missing '#pragma once' in UserWidgetBlueprint.h"
#endif
#define UMG_UserWidgetBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserWidgetBlueprint *****************************************************
struct Z_Construct_UClass_UUserWidgetBlueprint_Statics;
UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidgetBlueprint(); \
	friend struct ::Z_Construct_UClass_UUserWidgetBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UUserWidgetBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserWidgetBlueprint, UBlueprint, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UUserWidgetBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UUserWidgetBlueprint)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UUserWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserWidgetBlueprint(UUserWidgetBlueprint&&) = delete; \
	UUserWidgetBlueprint(const UUserWidgetBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UUserWidgetBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidgetBlueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidgetBlueprint) \
	UMG_API virtual ~UUserWidgetBlueprint();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_8_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserWidgetBlueprint;

// ********** End Class UUserWidgetBlueprint *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidgetBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
