// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Slate/SlateVectorArtData.h"

#ifdef UMG_SlateVectorArtData_generated_h
#error "SlateVectorArtData.generated.h already included, missing '#pragma once' in SlateVectorArtData.h"
#endif
#define UMG_SlateVectorArtData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSlateMeshVertex **************************************************
struct Z_Construct_UScriptStruct_FSlateMeshVertex_Statics;
#define FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateMeshVertex_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


struct FSlateMeshVertex;
// ********** End ScriptStruct FSlateMeshVertex ****************************************************

// ********** Begin Class USlateVectorArtData ******************************************************
struct Z_Construct_UClass_USlateVectorArtData_Statics;
UMG_API UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUSlateVectorArtData(); \
	friend struct ::Z_Construct_UClass_USlateVectorArtData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_USlateVectorArtData_NoRegister(); \
public: \
	DECLARE_CLASS2(USlateVectorArtData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_USlateVectorArtData_NoRegister) \
	DECLARE_SERIALIZER(USlateVectorArtData)


#define FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API USlateVectorArtData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVectorArtData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, USlateVectorArtData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVectorArtData); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USlateVectorArtData(USlateVectorArtData&&) = delete; \
	USlateVectorArtData(const USlateVectorArtData&) = delete; \
	UMG_API virtual ~USlateVectorArtData();


#define FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_83_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USlateVectorArtData;

// ********** End Class USlateVectorArtData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
