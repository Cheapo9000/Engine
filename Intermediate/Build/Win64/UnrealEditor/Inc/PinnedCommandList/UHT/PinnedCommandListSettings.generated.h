// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PinnedCommandListSettings.h"

#ifdef PINNEDCOMMANDLIST_PinnedCommandListSettings_generated_h
#error "PinnedCommandListSettings.generated.h already included, missing '#pragma once' in PinnedCommandListSettings.h"
#endif
#define PINNEDCOMMANDLIST_PinnedCommandListSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPinnedCommandListCommand *****************************************
struct Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics;
#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics; \
	PINNEDCOMMANDLIST_API static class UScriptStruct* StaticStruct();


struct FPinnedCommandListCommand;
// ********** End ScriptStruct FPinnedCommandListCommand *******************************************

// ********** Begin ScriptStruct FPinnedCommandListContext *****************************************
struct Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics;
#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics; \
	PINNEDCOMMANDLIST_API static class UScriptStruct* StaticStruct();


struct FPinnedCommandListContext;
// ********** End ScriptStruct FPinnedCommandListContext *******************************************

// ********** Begin Class UPinnedCommandListSettings ***********************************************
struct Z_Construct_UClass_UPinnedCommandListSettings_Statics;
PINNEDCOMMANDLIST_API UClass* Z_Construct_UClass_UPinnedCommandListSettings_NoRegister();

#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPinnedCommandListSettings(); \
	friend struct ::Z_Construct_UClass_UPinnedCommandListSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PINNEDCOMMANDLIST_API UClass* ::Z_Construct_UClass_UPinnedCommandListSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPinnedCommandListSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PinnedCommandList"), Z_Construct_UClass_UPinnedCommandListSettings_NoRegister) \
	DECLARE_SERIALIZER(UPinnedCommandListSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPinnedCommandListSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPinnedCommandListSettings(UPinnedCommandListSettings&&) = delete; \
	UPinnedCommandListSettings(const UPinnedCommandListSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPinnedCommandListSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPinnedCommandListSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPinnedCommandListSettings) \
	NO_API virtual ~UPinnedCommandListSettings();


#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_53_PROLOG
#define FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPinnedCommandListSettings;

// ********** End Class UPinnedCommandListSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h

// ********** Begin Enum EPinnedCommandListType ****************************************************
#define FOREACH_ENUM_EPINNEDCOMMANDLISTTYPE(op) \
	op(EPinnedCommandListType::Command) \
	op(EPinnedCommandListType::CustomWidget) 

enum class EPinnedCommandListType : uint8;
template<> struct TIsUEnumClass<EPinnedCommandListType> { enum { Value = true }; };
template<> PINNEDCOMMANDLIST_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinnedCommandListType>();
// ********** End Enum EPinnedCommandListType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
