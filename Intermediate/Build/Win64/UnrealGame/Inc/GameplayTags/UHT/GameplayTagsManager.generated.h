// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsManager.h"

#ifdef GAMEPLAYTAGS_GameplayTagsManager_generated_h
#error "GameplayTagsManager.generated.h already included, missing '#pragma once' in GameplayTagsManager.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTagTableRow **********************************************
struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FGameplayTagTableRow;
// ********** End ScriptStruct FGameplayTagTableRow ************************************************

// ********** Begin ScriptStruct FRestrictedGameplayTagTableRow ************************************
struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayTagTableRow Super;


struct FRestrictedGameplayTagTableRow;
// ********** End ScriptStruct FRestrictedGameplayTagTableRow **************************************

// ********** Begin ScriptStruct FGameplayTagSource ************************************************
struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagSource_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagSource;
// ********** End ScriptStruct FGameplayTagSource **************************************************

// ********** Begin ScriptStruct FGameplayTagNode **************************************************
struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagNode_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagNode;
// ********** End ScriptStruct FGameplayTagNode ****************************************************

// ********** Begin Class UGameplayTagsManager *****************************************************
struct Z_Construct_UClass_UGameplayTagsManager_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_331_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsManager(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UGameplayTagsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UGameplayTagsManager_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsManager)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_331_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsManager); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsManager(UGameplayTagsManager&&) = delete; \
	UGameplayTagsManager(const UGameplayTagsManager&) = delete;


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_328_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_331_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_331_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_331_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsManager;

// ********** End Class UGameplayTagsManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h

// ********** Begin Enum EGameplayTagSourceType ****************************************************
#define FOREACH_ENUM_EGAMEPLAYTAGSOURCETYPE(op) \
	op(EGameplayTagSourceType::Native) \
	op(EGameplayTagSourceType::DefaultTagList) \
	op(EGameplayTagSourceType::TagList) \
	op(EGameplayTagSourceType::RestrictedTagList) \
	op(EGameplayTagSourceType::DataTable) \
	op(EGameplayTagSourceType::Invalid) 

enum class EGameplayTagSourceType : uint8;
template<> struct TIsUEnumClass<EGameplayTagSourceType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTagSourceType>();
// ********** End Enum EGameplayTagSourceType ******************************************************

// ********** Begin Enum EGameplayTagSelectionType *************************************************
#define FOREACH_ENUM_EGAMEPLAYTAGSELECTIONTYPE(op) \
	op(EGameplayTagSelectionType::None) \
	op(EGameplayTagSelectionType::NonRestrictedOnly) \
	op(EGameplayTagSelectionType::RestrictedOnly) \
	op(EGameplayTagSelectionType::All) 

enum class EGameplayTagSelectionType : uint8;
template<> struct TIsUEnumClass<EGameplayTagSelectionType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTagSelectionType>();
// ********** End Enum EGameplayTagSelectionType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
