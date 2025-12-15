// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphPin.h"

#ifdef ENGINE_EdGraphPin_generated_h
#error "EdGraphPin.generated.h already included, missing '#pragma once' in EdGraphPin.h"
#endif
#define ENGINE_EdGraphPin_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSimpleMemberReference ********************************************
struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSimpleMemberReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSimpleMemberReference;
// ********** End ScriptStruct FSimpleMemberReference **********************************************

// ********** Begin ScriptStruct FEdGraphPinType ***************************************************
struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphPinType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEdGraphPinType;
// ********** End ScriptStruct FEdGraphPinType *****************************************************

// ********** Begin ScriptStruct FEdGraphPinReference **********************************************
struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_248_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphPinReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEdGraphPinReference;
// ********** End ScriptStruct FEdGraphPinReference ************************************************

// ********** Begin Class UEdGraphPin_Deprecated ***************************************************
struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_640_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend struct ::Z_Construct_UClass_UEdGraphPin_Deprecated_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_640_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&) = delete; \
	UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&) = delete; \
	ENGINE_API virtual ~UEdGraphPin_Deprecated();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_637_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_640_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_640_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_640_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphPin_Deprecated;

// ********** End Class UEdGraphPin_Deprecated *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h

// ********** Begin Enum EBlueprintPinStyleType ****************************************************
#define FOREACH_ENUM_EBLUEPRINTPINSTYLETYPE(op) \
	op(BPST_Original) \
	op(BPST_VariantA) 

enum EBlueprintPinStyleType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBlueprintPinStyleType>();
// ********** End Enum EBlueprintPinStyleType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
