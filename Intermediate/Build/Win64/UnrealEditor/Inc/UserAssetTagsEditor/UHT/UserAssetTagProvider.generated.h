// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserAssetTagProvider.h"

#ifdef USERASSETTAGSEDITOR_UserAssetTagProvider_generated_h
#error "UserAssetTagProvider.generated.h already included, missing '#pragma once' in UserAssetTagProvider.h"
#endif
#define USERASSETTAGSEDITOR_UserAssetTagProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUserAssetTagProvider ****************************************************
struct Z_Construct_UClass_UUserAssetTagProvider_Statics;
USERASSETTAGSEDITOR_API UClass* Z_Construct_UClass_UUserAssetTagProvider_NoRegister();

#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserAssetTagProvider(); \
	friend struct ::Z_Construct_UClass_UUserAssetTagProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USERASSETTAGSEDITOR_API UClass* ::Z_Construct_UClass_UUserAssetTagProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UUserAssetTagProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UserAssetTagsEditor"), Z_Construct_UClass_UUserAssetTagProvider_NoRegister) \
	DECLARE_SERIALIZER(UUserAssetTagProvider)


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserAssetTagProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUserAssetTagProvider(UUserAssetTagProvider&&) = delete; \
	UUserAssetTagProvider(const UUserAssetTagProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserAssetTagProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserAssetTagProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserAssetTagProvider) \
	NO_API virtual ~UUserAssetTagProvider();


#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_26_PROLOG
#define FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUserAssetTagProvider;

// ********** End Class UUserAssetTagProvider ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UserAssetTagsEditor_Public_UserAssetTagProvider_h

// ********** Begin Enum EUserAssetTagProviderMenuType *********************************************
#define FOREACH_ENUM_EUSERASSETTAGPROVIDERMENUTYPE(op) \
	op(EUserAssetTagProviderMenuType::Section) \
	op(EUserAssetTagProviderMenuType::SubMenu) 

enum class EUserAssetTagProviderMenuType;
template<> struct TIsUEnumClass<EUserAssetTagProviderMenuType> { enum { Value = true }; };
template<> USERASSETTAGSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EUserAssetTagProviderMenuType>();
// ********** End Enum EUserAssetTagProviderMenuType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
