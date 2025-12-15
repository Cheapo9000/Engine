// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/MultiBox/ToolMenuBase.h"

#ifdef SLATE_ToolMenuBase_generated_h
#error "ToolMenuBase.generated.h already included, missing '#pragma once' in ToolMenuBase.h"
#endif
#define SLATE_ToolMenuBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomizedToolMenuEntry ******************************************
struct Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics;
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct();


struct FCustomizedToolMenuEntry;
// ********** End ScriptStruct FCustomizedToolMenuEntry ********************************************

// ********** Begin ScriptStruct FCustomizedToolMenuSection ****************************************
struct Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics;
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct();


struct FCustomizedToolMenuSection;
// ********** End ScriptStruct FCustomizedToolMenuSection ******************************************

// ********** Begin ScriptStruct FCustomizedToolMenuNameArray **************************************
struct Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics;
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct();


struct FCustomizedToolMenuNameArray;
// ********** End ScriptStruct FCustomizedToolMenuNameArray ****************************************

// ********** Begin ScriptStruct FToolMenuProfile **************************************************
struct Z_Construct_UScriptStruct_FToolMenuProfile_Statics;
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FToolMenuProfile_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct();


struct FToolMenuProfile;
// ********** End ScriptStruct FToolMenuProfile ****************************************************

// ********** Begin ScriptStruct FCustomizedToolMenu ***********************************************
struct Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics;
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics; \
	SLATE_API static class UScriptStruct* StaticStruct(); \
	typedef FToolMenuProfile Super;


struct FCustomizedToolMenu;
// ********** End ScriptStruct FCustomizedToolMenu *************************************************

// ********** Begin Class UToolMenuBase ************************************************************
struct Z_Construct_UClass_UToolMenuBase_Statics;
SLATE_API UClass* Z_Construct_UClass_UToolMenuBase_NoRegister();

#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMenuBase(); \
	friend struct ::Z_Construct_UClass_UToolMenuBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLATE_API UClass* ::Z_Construct_UClass_UToolMenuBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMenuBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Slate"), Z_Construct_UClass_UToolMenuBase_NoRegister) \
	DECLARE_SERIALIZER(UToolMenuBase)


#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLATE_API UToolMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMenuBase(UToolMenuBase&&) = delete; \
	UToolMenuBase(const UToolMenuBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLATE_API, UToolMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMenuBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMenuBase) \
	SLATE_API virtual ~UToolMenuBase();


#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_141_PROLOG
#define FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMenuBase;

// ********** End Class UToolMenuBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h

// ********** Begin Enum ECustomizedToolMenuVisibility *********************************************
#define FOREACH_ENUM_ECUSTOMIZEDTOOLMENUVISIBILITY(op) \
	op(ECustomizedToolMenuVisibility::None) \
	op(ECustomizedToolMenuVisibility::Visible) \
	op(ECustomizedToolMenuVisibility::Hidden) 

enum class ECustomizedToolMenuVisibility;
template<> struct TIsUEnumClass<ECustomizedToolMenuVisibility> { enum { Value = true }; };
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomizedToolMenuVisibility>();
// ********** End Enum ECustomizedToolMenuVisibility ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
