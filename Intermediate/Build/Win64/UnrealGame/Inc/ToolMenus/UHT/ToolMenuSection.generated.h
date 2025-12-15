// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMenuSection.h"

#ifdef TOOLMENUS_ToolMenuSection_generated_h
#error "ToolMenuSection.generated.h already included, missing '#pragma once' in ToolMenuSection.h"
#endif
#define TOOLMENUS_ToolMenuSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UToolMenu;
struct FToolMenuContext;

// ********** Begin Class UToolMenuSectionDynamic **************************************************
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UToolMenuSectionDynamic_Statics;
TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister();

#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuSectionDynamic(); \
	friend struct ::Z_Construct_UClass_UToolMenuSectionDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLMENUS_API UClass* ::Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuSectionDynamic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolMenus"), Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuSectionDynamic)


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLMENUS_API UToolMenuSectionDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuSectionDynamic(UToolMenuSectionDynamic&&) = delete; \
	UToolMenuSectionDynamic(const UToolMenuSectionDynamic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLMENUS_API, UToolMenuSectionDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuSectionDynamic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuSectionDynamic) \
	TOOLMENUS_API virtual ~UToolMenuSectionDynamic();


#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_15_PROLOG
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuSectionDynamic;

// ********** End Class UToolMenuSectionDynamic ****************************************************

// ********** Begin ScriptStruct FToolMenuSection **************************************************
struct Z_Construct_UScriptStruct_FToolMenuSection_Statics;
#define FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuSection_Statics; \
	TOOLMENUS_API static class UScriptStruct* StaticStruct();


struct FToolMenuSection;
// ********** End ScriptStruct FToolMenuSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h

// ********** Begin Enum EToolMenuSectionAlign *****************************************************
#define FOREACH_ENUM_ETOOLMENUSECTIONALIGN(op) \
	op(EToolMenuSectionAlign::Default) \
	op(EToolMenuSectionAlign::First) \
	op(EToolMenuSectionAlign::Middle) \
	op(EToolMenuSectionAlign::Last) 

enum class EToolMenuSectionAlign : uint8;
template<> struct TIsUEnumClass<EToolMenuSectionAlign> { enum { Value = true }; };
template<> TOOLMENUS_NON_ATTRIBUTED_API UEnum* StaticEnum<EToolMenuSectionAlign>();
// ********** End Enum EToolMenuSectionAlign *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
