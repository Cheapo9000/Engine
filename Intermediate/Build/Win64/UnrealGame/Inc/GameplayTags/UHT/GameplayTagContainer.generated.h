// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagContainer.h"

#ifdef GAMEPLAYTAGS_GameplayTagContainer_generated_h
#error "GameplayTagContainer.generated.h already included, missing '#pragma once' in GameplayTagContainer.h"
#endif
#define GAMEPLAYTAGS_GameplayTagContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTag ******************************************************
struct Z_Construct_UScriptStruct_FGameplayTag_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTag_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTag;
// ********** End ScriptStruct FGameplayTag ********************************************************

// ********** Begin ScriptStruct FGameplayTagContainer *********************************************
struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_252_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagContainer_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagContainer;
// ********** End ScriptStruct FGameplayTagContainer ***********************************************

// ********** Begin ScriptStruct FGameplayTagCreationWidgetHelper **********************************
struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_686_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagCreationWidgetHelper;
// ********** End ScriptStruct FGameplayTagCreationWidgetHelper ************************************

// ********** Begin ScriptStruct FGameplayTagQuery *************************************************
struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_740_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagQuery_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagQuery;
// ********** End ScriptStruct FGameplayTagQuery ***************************************************

// ********** Begin Class UEditableGameplayTagQuery ************************************************
struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_996_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_996_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQuery(UEditableGameplayTagQuery&&) = delete; \
	UEditableGameplayTagQuery(const UEditableGameplayTagQuery&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UEditableGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery) \
	GAMEPLAYTAGS_API virtual ~UEditableGameplayTagQuery();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_993_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_996_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_996_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_996_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQuery;

// ********** End Class UEditableGameplayTagQuery **************************************************

// ********** Begin Class UEditableGameplayTagQueryExpression **************************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1027_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1027_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&) = delete; \
	UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UEditableGameplayTagQueryExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression) \
	GAMEPLAYTAGS_API virtual ~UEditableGameplayTagQueryExpression();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1024_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1027_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1027_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1027_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression;

// ********** End Class UEditableGameplayTagQueryExpression ****************************************

// ********** Begin Class UEditableGameplayTagQueryExpression_AnyTagsMatch *************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1043_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1043_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AnyTagsMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1040_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1043_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1043_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1043_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AnyTagsMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AnyTagsMatch ***************************

// ********** Begin Class UEditableGameplayTagQueryExpression_AllTagsMatch *************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1056_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1056_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AllTagsMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1053_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1056_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1056_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1056_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AllTagsMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AllTagsMatch ***************************

// ********** Begin Class UEditableGameplayTagQueryExpression_NoTagsMatch **************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1069_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1069_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_NoTagsMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1066_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1069_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1069_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1069_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_NoTagsMatch;

// ********** End Class UEditableGameplayTagQueryExpression_NoTagsMatch ****************************

// ********** Begin Class UEditableGameplayTagQueryExpression_AnyTagsExactMatch ********************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1082_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsExactMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AnyTagsExactMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsExactMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsExactMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1082_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsExactMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AnyTagsExactMatch(UEditableGameplayTagQueryExpression_AnyTagsExactMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AnyTagsExactMatch(const UEditableGameplayTagQueryExpression_AnyTagsExactMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsExactMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsExactMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsExactMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AnyTagsExactMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1079_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1082_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1082_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1082_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AnyTagsExactMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AnyTagsExactMatch **********************

// ********** Begin Class UEditableGameplayTagQueryExpression_AllTagsExactMatch ********************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1095_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsExactMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AllTagsExactMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsExactMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsExactMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1095_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsExactMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AllTagsExactMatch(UEditableGameplayTagQueryExpression_AllTagsExactMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AllTagsExactMatch(const UEditableGameplayTagQueryExpression_AllTagsExactMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsExactMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsExactMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsExactMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AllTagsExactMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1092_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1095_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1095_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1095_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AllTagsExactMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AllTagsExactMatch **********************

// ********** Begin Class UEditableGameplayTagQueryExpression_AnyExprMatch *************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AnyExprMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1105_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AnyExprMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AnyExprMatch ***************************

// ********** Begin Class UEditableGameplayTagQueryExpression_AllExprMatch *************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_AllExprMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1118_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_AllExprMatch;

// ********** End Class UEditableGameplayTagQueryExpression_AllExprMatch ***************************

// ********** Begin Class UEditableGameplayTagQueryExpression_NoExprMatch **************************
struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&) = delete; \
	UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch) \
	NO_API virtual ~UEditableGameplayTagQueryExpression_NoExprMatch();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1131_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditableGameplayTagQueryExpression_NoExprMatch;

// ********** End Class UEditableGameplayTagQueryExpression_NoExprMatch ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h

// ********** Begin Enum EGameplayContainerMatchType ***********************************************
#define FOREACH_ENUM_EGAMEPLAYCONTAINERMATCHTYPE(op) \
	op(EGameplayContainerMatchType::Any) \
	op(EGameplayContainerMatchType::All) 

enum class EGameplayContainerMatchType : uint8;
template<> struct TIsUEnumClass<EGameplayContainerMatchType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayContainerMatchType>();
// ********** End Enum EGameplayContainerMatchType *************************************************

// ********** Begin Enum EGameplayTagQueryExprType *************************************************
#define FOREACH_ENUM_EGAMEPLAYTAGQUERYEXPRTYPE(op) \
	op(EGameplayTagQueryExprType::Undefined) \
	op(EGameplayTagQueryExprType::AnyTagsMatch) \
	op(EGameplayTagQueryExprType::AllTagsMatch) \
	op(EGameplayTagQueryExprType::NoTagsMatch) \
	op(EGameplayTagQueryExprType::AnyExprMatch) \
	op(EGameplayTagQueryExprType::AllExprMatch) \
	op(EGameplayTagQueryExprType::NoExprMatch) \
	op(EGameplayTagQueryExprType::AnyTagsExactMatch) \
	op(EGameplayTagQueryExprType::AllTagsExactMatch) 

enum class EGameplayTagQueryExprType : uint8;
template<> struct TIsUEnumClass<EGameplayTagQueryExprType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EGameplayTagQueryExprType>();
// ********** End Enum EGameplayTagQueryExprType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
