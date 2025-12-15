// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintCompilerExtension.h"

#ifdef KISMET_BlueprintCompilerExtension_generated_h
#error "BlueprintCompilerExtension.generated.h already included, missing '#pragma once' in BlueprintCompilerExtension.h"
#endif
#define KISMET_BlueprintCompilerExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlueprintCompiledData ********************************************
struct Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics;
#define FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlueprintCompiledData_Statics; \
	KISMET_API static class UScriptStruct* StaticStruct();


struct FBlueprintCompiledData;
// ********** End ScriptStruct FBlueprintCompiledData **********************************************

// ********** Begin Class UBlueprintCompilerExtension **********************************************
struct Z_Construct_UClass_UBlueprintCompilerExtension_Statics;
KISMET_API UClass* Z_Construct_UClass_UBlueprintCompilerExtension_NoRegister();

#define FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintCompilerExtension(); \
	friend struct ::Z_Construct_UClass_UBlueprintCompilerExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KISMET_API UClass* ::Z_Construct_UClass_UBlueprintCompilerExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintCompilerExtension, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Kismet"), Z_Construct_UClass_UBlueprintCompilerExtension_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintCompilerExtension)


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintCompilerExtension(UBlueprintCompilerExtension&&) = delete; \
	UBlueprintCompilerExtension(const UBlueprintCompilerExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KISMET_API, UBlueprintCompilerExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintCompilerExtension); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintCompilerExtension) \
	KISMET_API virtual ~UBlueprintCompilerExtension();


#define FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_27_PROLOG
#define FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintCompilerExtension;

// ********** End Class UBlueprintCompilerExtension ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Kismet_Public_BlueprintCompilerExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
