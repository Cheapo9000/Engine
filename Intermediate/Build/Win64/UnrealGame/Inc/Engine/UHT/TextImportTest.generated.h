// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/TextImportTest.h"

#ifdef ENGINE_TextImportTest_generated_h
#error "TextImportTest.generated.h already included, missing '#pragma once' in TextImportTest.h"
#endif
#define ENGINE_TextImportTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTextImportTestStruct *********************************************
struct Z_Construct_UScriptStruct_FTextImportTestStruct_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextImportTestStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextImportTestStruct;
// ********** End ScriptStruct FTextImportTestStruct ***********************************************

// ********** Begin Class UTextImportContainer *****************************************************
struct Z_Construct_UClass_UTextImportContainer_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextImportContainer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextImportContainer(); \
	friend struct ::Z_Construct_UClass_UTextImportContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextImportContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextImportContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextImportContainer_NoRegister) \
	DECLARE_SERIALIZER(UTextImportContainer)


#define FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextImportContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextImportContainer(UTextImportContainer&&) = delete; \
	UTextImportContainer(const UTextImportContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextImportContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextImportContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextImportContainer) \
	NO_API virtual ~UTextImportContainer();


#define FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextImportContainer;

// ********** End Class UTextImportContainer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Tests_TextImportTest_h

// ********** Begin Enum ETextImportTestFlags ******************************************************
#define FOREACH_ENUM_ETEXTIMPORTTESTFLAGS(op) \
	op(ETextImportTestFlags::Default) \
	op(ETextImportTestFlags::FlagA) \
	op(ETextImportTestFlags::FlagB) \
	op(ETextImportTestFlags::FlagC) \
	op(ETextImportTestFlags::FlagD) \
	op(ETextImportTestFlags::FlagE) \
	op(ETextImportTestFlags::TestStructDefault) 

enum class ETextImportTestFlags : uint32;
template<> struct TIsUEnumClass<ETextImportTestFlags> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextImportTestFlags>();
// ********** End Enum ETextImportTestFlags ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
