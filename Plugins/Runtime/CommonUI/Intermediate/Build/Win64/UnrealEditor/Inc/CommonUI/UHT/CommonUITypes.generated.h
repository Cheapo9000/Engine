// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUITypes.h"

#ifdef COMMONUI_CommonUITypes_generated_h
#error "CommonUITypes.generated.h already included, missing '#pragma once' in CommonUITypes.h"
#endif
#define COMMONUI_CommonUITypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;

// ********** Begin ScriptStruct FCommonInputTypeInfo **********************************************
struct Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct();


struct FCommonInputTypeInfo;
// ********** End ScriptStruct FCommonInputTypeInfo ************************************************

// ********** Begin ScriptStruct FCommonInputActionDataBase ****************************************
struct Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics;
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics; \
	COMMONUI_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCommonInputActionDataBase;
// ********** End ScriptStruct FCommonInputActionDataBase ******************************************

// ********** Begin Class UCommonInputMetadata *****************************************************
struct Z_Construct_UClass_UCommonInputMetadata_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonInputMetadata_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputMetadata(); \
	friend struct ::Z_Construct_UClass_UCommonInputMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonInputMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonInputMetadata, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonInputMetadata_NoRegister) \
	DECLARE_SERIALIZER(UCommonInputMetadata)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonInputMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonInputMetadata(UCommonInputMetadata&&) = delete; \
	UCommonInputMetadata(const UCommonInputMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonInputMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputMetadata) \
	COMMONUI_API virtual ~UCommonInputMetadata();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_210_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonInputMetadata;

// ********** End Class UCommonInputMetadata *******************************************************

// ********** Begin Interface UCommonMappingContextMetadataInterface *******************************
struct Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonMappingContextMetadataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonMappingContextMetadataInterface(UCommonMappingContextMetadataInterface&&) = delete; \
	UCommonMappingContextMetadataInterface(const UCommonMappingContextMetadataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonMappingContextMetadataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMappingContextMetadataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonMappingContextMetadataInterface) \
	virtual ~UCommonMappingContextMetadataInterface() = default;


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonMappingContextMetadataInterface(); \
	friend struct ::Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonMappingContextMetadataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister) \
	DECLARE_SERIALIZER(UCommonMappingContextMetadataInterface)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonMappingContextMetadataInterface() {} \
public: \
	typedef UCommonMappingContextMetadataInterface UClassType; \
	typedef ICommonMappingContextMetadataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_245_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_248_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonMappingContextMetadataInterface;

// ********** End Interface UCommonMappingContextMetadataInterface *********************************

// ********** Begin Class UCommonMappingContextMetadata ********************************************
struct Z_Construct_UClass_UCommonMappingContextMetadata_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadata_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonMappingContextMetadata(); \
	friend struct ::Z_Construct_UClass_UCommonMappingContextMetadata_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonMappingContextMetadata_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonMappingContextMetadata, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonMappingContextMetadata_NoRegister) \
	DECLARE_SERIALIZER(UCommonMappingContextMetadata) \
	virtual UObject* _getUObject() const override { return const_cast<UCommonMappingContextMetadata*>(this); }


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonMappingContextMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonMappingContextMetadata(UCommonMappingContextMetadata&&) = delete; \
	UCommonMappingContextMetadata(const UCommonMappingContextMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonMappingContextMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonMappingContextMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonMappingContextMetadata) \
	COMMONUI_API virtual ~UCommonMappingContextMetadata();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_272_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_275_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonMappingContextMetadata;

// ********** End Class UCommonMappingContextMetadata **********************************************

// ********** Begin Delegate FOnItemClicked ********************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_311_DELEGATE \
COMMONUI_API void FOnItemClicked_DelegateWrapper(const FScriptDelegate& OnItemClicked, UUserWidget* Widget);


// ********** End Delegate FOnItemClicked **********************************************************

// ********** Begin Delegate FOnItemSelected *******************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h_312_DELEGATE \
COMMONUI_API void FOnItemSelected_DelegateWrapper(const FScriptDelegate& OnItemSelected, UUserWidget* Widget, bool Selected);


// ********** End Delegate FOnItemSelected *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUITypes_h

// ********** Begin Enum EInputActionState *********************************************************
#define FOREACH_ENUM_EINPUTACTIONSTATE(op) \
	op(EInputActionState::Enabled) \
	op(EInputActionState::Disabled) \
	op(EInputActionState::Hidden) \
	op(EInputActionState::HiddenAndDisabled) 

enum class EInputActionState : uint8;
template<> struct TIsUEnumClass<EInputActionState> { enum { Value = true }; };
template<> COMMONUI_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputActionState>();
// ********** End Enum EInputActionState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
