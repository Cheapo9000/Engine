// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/UEdMode.h"

#ifdef UNREALED_UEdMode_generated_h
#error "UEdMode.generated.h already included, missing '#pragma once' in UEdMode.h"
#endif
#define UNREALED_UEdMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEdMode ******************************************************************
struct Z_Construct_UClass_UEdMode_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEdMode_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdMode(); \
	friend struct ::Z_Construct_UClass_UEdMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEdMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEdMode_NoRegister) \
	DECLARE_SERIALIZER(UEdMode)


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdMode(UEdMode&&) = delete; \
	UEdMode(const UEdMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEdMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEdMode) \
	UNREALED_API virtual ~UEdMode();


#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_70_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdMode;

// ********** End Class UEdMode ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
