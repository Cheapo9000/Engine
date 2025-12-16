// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/MetaSoundEditorViewModel.h"

#ifdef TECHAUDIOTOOLSMETASOUNDEDITOR_MetaSoundEditorViewModel_generated_h
#error "MetaSoundEditorViewModel.generated.h already included, missing '#pragma once' in MetaSoundEditorViewModel.h"
#endif
#define TECHAUDIOTOOLSMETASOUNDEDITOR_MetaSoundEditorViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetaSoundEditorViewModel ************************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOutputIsAdvancedDisplayChanged); \
	DECLARE_FUNCTION(execOnOutputSortOrderIndexChanged); \
	DECLARE_FUNCTION(execOnOutputDescriptionChanged); \
	DECLARE_FUNCTION(execOnOutputDisplayNameChanged); \
	DECLARE_FUNCTION(execOnInputIsAdvancedDisplayChanged); \
	DECLARE_FUNCTION(execOnInputSortOrderIndexChanged); \
	DECLARE_FUNCTION(execOnInputDescriptionChanged); \
	DECLARE_FUNCTION(execOnInputDisplayNameChanged); \
	DECLARE_FUNCTION(execOnIsDeprecatedChanged); \
	DECLARE_FUNCTION(execOnCategoryHierarchyChanged); \
	DECLARE_FUNCTION(execOnKeywordsChanged); \
	DECLARE_FUNCTION(execOnAuthorChanged); \
	DECLARE_FUNCTION(execOnDescriptionChanged); \
	DECLARE_FUNCTION(execOnDisplayNameChanged);


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_ACCESSORS \
static void GetDisplayName_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplayName_WrapperImpl(void* Object, const void* InValue); \
static void GetDescription_WrapperImpl(const void* Object, void* OutValue); \
static void SetDescription_WrapperImpl(void* Object, const void* InValue); \
static void GetAuthor_WrapperImpl(const void* Object, void* OutValue); \
static void SetAuthor_WrapperImpl(void* Object, const void* InValue); \
static void GetKeywords_WrapperImpl(const void* Object, void* OutValue); \
static void SetKeywords_WrapperImpl(void* Object, const void* InValue); \
static void GetCategoryHierarchy_WrapperImpl(const void* Object, void* OutValue); \
static void SetCategoryHierarchy_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsDeprecated_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsDeprecated_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMetaSoundEditorViewModel_Statics;
TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundEditorViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundEditorViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundEditorViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundEditorViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundEditorViewModel, UMetaSoundViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSoundEditor"), Z_Construct_UClass_UMetaSoundEditorViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundEditorViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API UMetaSoundEditorViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundEditorViewModel(UMetaSoundEditorViewModel&&) = delete; \
	UMetaSoundEditorViewModel(const UMetaSoundEditorViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUNDEDITOR_API, UMetaSoundEditorViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundEditorViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundEditorViewModel) \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API virtual ~UMetaSoundEditorViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(DisplayName,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Description,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Author,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Keywords,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(CategoryHierarchy,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsDeprecated,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(DisplayName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Description) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Author) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Keywords) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(CategoryHierarchy) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsDeprecated) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_20_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundEditorViewModel;

// ********** End Class UMetaSoundEditorViewModel **************************************************

// ********** Begin Class UMetaSoundInputEditorViewModel *******************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_ACCESSORS \
static void SetInputDisplayName_WrapperImpl(void* Object, const void* InValue); \
static void SetInputDescription_WrapperImpl(void* Object, const void* InValue); \
static void SetSortOrderIndex_WrapperImpl(void* Object, const void* InValue); \
static void SetbIsAdvancedDisplay_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMetaSoundInputEditorViewModel_Statics;
TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundInputEditorViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundInputEditorViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundInputEditorViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundInputEditorViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundInputEditorViewModel, UMetaSoundInputViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSoundEditor"), Z_Construct_UClass_UMetaSoundInputEditorViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundInputEditorViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API UMetaSoundInputEditorViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundInputEditorViewModel(UMetaSoundInputEditorViewModel&&) = delete; \
	UMetaSoundInputEditorViewModel(const UMetaSoundInputEditorViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUNDEDITOR_API, UMetaSoundInputEditorViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundInputEditorViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundInputEditorViewModel) \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API virtual ~UMetaSoundInputEditorViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(InputDisplayName,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(InputDescription,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SortOrderIndex,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsAdvancedDisplay,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(InputDisplayName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(InputDescription) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(SortOrderIndex) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsAdvancedDisplay) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_126_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_129_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundInputEditorViewModel;

// ********** End Class UMetaSoundInputEditorViewModel *********************************************

// ********** Begin Class UMetaSoundOutputEditorViewModel ******************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_ACCESSORS \
static void SetOutputDisplayName_WrapperImpl(void* Object, const void* InValue); \
static void SetOutputDescription_WrapperImpl(void* Object, const void* InValue); \
static void SetSortOrderIndex_WrapperImpl(void* Object, const void* InValue); \
static void SetbIsAdvancedDisplay_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMetaSoundOutputEditorViewModel_Statics;
TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundOutputEditorViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundOutputEditorViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundOutputEditorViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetaSoundOutputEditorViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundOutputEditorViewModel, UMetaSoundOutputViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSoundEditor"), Z_Construct_UClass_UMetaSoundOutputEditorViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundOutputEditorViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API UMetaSoundOutputEditorViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundOutputEditorViewModel(UMetaSoundOutputEditorViewModel&&) = delete; \
	UMetaSoundOutputEditorViewModel(const UMetaSoundOutputEditorViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUNDEDITOR_API, UMetaSoundOutputEditorViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundOutputEditorViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundOutputEditorViewModel) \
	TECHAUDIOTOOLSMETASOUNDEDITOR_API virtual ~UMetaSoundOutputEditorViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(OutputDisplayName,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(OutputDescription,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(SortOrderIndex,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsAdvancedDisplay,TECHAUDIOTOOLSMETASOUNDEDITOR_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(OutputDisplayName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(OutputDescription) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(SortOrderIndex) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsAdvancedDisplay) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_170_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h_173_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundOutputEditorViewModel;

// ********** End Class UMetaSoundOutputEditorViewModel ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSoundEditor_Public_ViewModels_MetaSoundEditorViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
