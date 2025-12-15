// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetBlueprintGeneratedClass.h"

#ifdef UMG_WidgetBlueprintGeneratedClass_generated_h
#error "WidgetBlueprintGeneratedClass.generated.h already included, missing '#pragma once' in WidgetBlueprintGeneratedClass.h"
#endif
#define UMG_WidgetBlueprintGeneratedClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDelegateRuntimeBinding *******************************************
struct Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FDelegateRuntimeBinding;
// ********** End ScriptStruct FDelegateRuntimeBinding *********************************************

// ********** Begin Class UWidgetBlueprintGeneratedClass *******************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprintGeneratedClass, UMG_API)


struct Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintGeneratedClass(); \
	friend struct ::Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetBlueprintGeneratedClass, UBlueprintGeneratedClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister) \
	DECLARE_SERIALIZER(UWidgetBlueprintGeneratedClass) \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetBlueprintGeneratedClass(UWidgetBlueprintGeneratedClass&&) = delete; \
	UWidgetBlueprintGeneratedClass(const UWidgetBlueprintGeneratedClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetBlueprintGeneratedClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintGeneratedClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetBlueprintGeneratedClass) \
	UMG_API virtual ~UWidgetBlueprintGeneratedClass();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_79_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetBlueprintGeneratedClass;

// ********** End Class UWidgetBlueprintGeneratedClass *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h

// ********** Begin Enum EBindingKind **************************************************************
#define FOREACH_ENUM_EBINDINGKIND(op) \
	op(EBindingKind::Function) \
	op(EBindingKind::Property) 

enum class EBindingKind : uint8;
template<> struct TIsUEnumClass<EBindingKind> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EBindingKind>();
// ********** End Enum EBindingKind ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
