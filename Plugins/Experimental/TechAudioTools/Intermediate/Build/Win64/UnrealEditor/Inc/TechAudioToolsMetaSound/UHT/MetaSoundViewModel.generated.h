// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewModels/MetaSoundViewModel.h"

#ifdef TECHAUDIOTOOLSMETASOUND_MetaSoundViewModel_generated_h
#error "MetaSoundViewModel.generated.h already included, missing '#pragma once' in MetaSoundViewModel.h"
#endif
#define TECHAUDIOTOOLSMETASOUND_MetaSoundViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMetaSoundDocumentInterface;
class UMetaSoundBuilderBase;
class UMetaSoundInputViewModel;
class UMetaSoundOutputViewModel;
struct FMetasoundFrontendLiteral;

// ********** Begin Class UMetaSoundViewModel ******************************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOutputIsConstructorPinChanged); \
	DECLARE_FUNCTION(execOnOutputDataTypeChanged); \
	DECLARE_FUNCTION(execOnOutputNameChanged); \
	DECLARE_FUNCTION(execOnOutputRemoved); \
	DECLARE_FUNCTION(execOnOutputAdded); \
	DECLARE_FUNCTION(execOnInputIsConstructorPinChanged); \
	DECLARE_FUNCTION(execOnInputInheritsDefaultChanged); \
	DECLARE_FUNCTION(execOnInputDefaultChanged); \
	DECLARE_FUNCTION(execOnInputDataTypeChanged); \
	DECLARE_FUNCTION(execOnInputNameChanged); \
	DECLARE_FUNCTION(execOnInputRemoved); \
	DECLARE_FUNCTION(execOnInputAdded); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execInitializeMetaSound); \
	DECLARE_FUNCTION(execFindOutputViewModel); \
	DECLARE_FUNCTION(execGetOutputViewModels); \
	DECLARE_FUNCTION(execFindInputViewModel); \
	DECLARE_FUNCTION(execGetInputViewModels); \
	DECLARE_FUNCTION(execGetBuilderName);


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_ACCESSORS \
static void GetbIsInitialized_WrapperImpl(const void* Object, void* OutValue); \
static void GetbIsPreset_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UMetaSoundViewModel_Statics;
TECHAUDIOTOOLSMETASOUND_API UClass* Z_Construct_UClass_UMetaSoundViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUND_API UClass* ::Z_Construct_UClass_UMetaSoundViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSound"), Z_Construct_UClass_UMetaSoundViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUND_API UMetaSoundViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundViewModel(UMetaSoundViewModel&&) = delete; \
	UMetaSoundViewModel(const UMetaSoundViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUND_API, UMetaSoundViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundViewModel) \
	TECHAUDIOTOOLSMETASOUND_API virtual ~UMetaSoundViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsInitialized,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsPreset,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetBuilderName,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetInputViewModels,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(GetOutputViewModels,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsInitialized) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsPreset) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetBuilderName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetInputViewModels) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(GetOutputViewModels) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_24_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundViewModel;

// ********** End Class UMetaSoundViewModel ********************************************************

// ********** Begin Class UMetaSoundInputViewModel *************************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_ACCESSORS \
static void GetbIsInitialized_WrapperImpl(const void* Object, void* OutValue); \
static void GetInputName_WrapperImpl(const void* Object, void* OutValue); \
static void SetInputName_WrapperImpl(void* Object, const void* InValue); \
static void GetDataType_WrapperImpl(const void* Object, void* OutValue); \
static void SetDataType_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsArray_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsArray_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsConstructorPin_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsConstructorPin_WrapperImpl(void* Object, const void* InValue); \
static void GetLiteral_WrapperImpl(const void* Object, void* OutValue); \
static void SetLiteral_WrapperImpl(void* Object, const void* InValue); \
static void GetLiteralType_WrapperImpl(const void* Object, void* OutValue); \
static void GetbOverridesDefault_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOverridesDefault_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMetaSoundInputViewModel_Statics;
TECHAUDIOTOOLSMETASOUND_API UClass* Z_Construct_UClass_UMetaSoundInputViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundInputViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundInputViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUND_API UClass* ::Z_Construct_UClass_UMetaSoundInputViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundInputViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSound"), Z_Construct_UClass_UMetaSoundInputViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundInputViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUND_API UMetaSoundInputViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundInputViewModel(UMetaSoundInputViewModel&&) = delete; \
	UMetaSoundInputViewModel(const UMetaSoundInputViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUND_API, UMetaSoundInputViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundInputViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundInputViewModel) \
	TECHAUDIOTOOLSMETASOUND_API virtual ~UMetaSoundInputViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsInitialized,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(InputName,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(DataType,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsArray,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsConstructorPin,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Literal,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(LiteralType,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bOverridesDefault,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsInitialized) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(InputName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(DataType) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsArray) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsConstructorPin) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Literal) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(LiteralType) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bOverridesDefault) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_131_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_134_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundInputViewModel;

// ********** End Class UMetaSoundInputViewModel ***************************************************

// ********** Begin Class UMetaSoundOutputViewModel ************************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_ACCESSORS \
static void SetOutputName_WrapperImpl(void* Object, const void* InValue); \
static void SetDataType_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsArray_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsArray_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsConstructorPin_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsConstructorPin_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UMetaSoundOutputViewModel_Statics;
TECHAUDIOTOOLSMETASOUND_API UClass* Z_Construct_UClass_UMetaSoundOutputViewModel_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundOutputViewModel(); \
	friend struct ::Z_Construct_UClass_UMetaSoundOutputViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLSMETASOUND_API UClass* ::Z_Construct_UClass_UMetaSoundOutputViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaSoundOutputViewModel, UMVVMViewModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioToolsMetaSound"), Z_Construct_UClass_UMetaSoundOutputViewModel_NoRegister) \
	DECLARE_SERIALIZER(UMetaSoundOutputViewModel)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLSMETASOUND_API UMetaSoundOutputViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaSoundOutputViewModel(UMetaSoundOutputViewModel&&) = delete; \
	UMetaSoundOutputViewModel(const UMetaSoundOutputViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLSMETASOUND_API, UMetaSoundOutputViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundOutputViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundOutputViewModel) \
	TECHAUDIOTOOLSMETASOUND_API virtual ~UMetaSoundOutputViewModel();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsInitialized,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(OutputName,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(DataType,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsArray,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsConstructorPin,TECHAUDIOTOOLSMETASOUND_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsInitialized) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(OutputName) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(DataType) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsArray) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bIsConstructorPin) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_198_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_ACCESSORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_ENHANCED_CONSTRUCTORS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h_201_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaSoundOutputViewModel;

// ********** End Class UMetaSoundOutputViewModel **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioToolsMetaSound_Public_ViewModels_MetaSoundViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
