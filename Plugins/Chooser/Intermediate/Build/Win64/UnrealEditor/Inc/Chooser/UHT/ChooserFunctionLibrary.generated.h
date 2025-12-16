// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserFunctionLibrary.h"

#ifdef CHOOSER_ChooserFunctionLibrary_generated_h
#error "ChooserFunctionLibrary.generated.h already included, missing '#pragma once' in ChooserFunctionLibrary.h"
#endif
#define CHOOSER_ChooserFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChooserTable;
class UClass;
class UObject;
struct FChooserEvaluationContext;
struct FInstancedStruct;

// ********** Begin Class UChooserFunctionLibrary **************************************************
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMakeChooserEvaluationContext); \
	DECLARE_FUNCTION(execMakeEvaluateChooser); \
	DECLARE_FUNCTION(execGetChooserObjectInput); \
	DECLARE_FUNCTION(execAddChooserObjectInput); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBaseMultiSoft); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBaseMulti); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBaseSoft); \
	DECLARE_FUNCTION(execEvaluateObjectChooserBase); \
	DECLARE_FUNCTION(execEvaluateChooserMulti); \
	DECLARE_FUNCTION(execEvaluateChooser);


struct Z_Construct_UClass_UChooserFunctionLibrary_Statics;
	struct Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics; \
	struct Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics; \
CHOOSER_API UClass* Z_Construct_UClass_UChooserFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUChooserFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UChooserFunctionLibrary_Statics; \
	friend struct ::Z_Construct_UFunction_UChooserFunctionLibrary_AddChooserStructInput_Statics; \
	friend struct ::Z_Construct_UFunction_UChooserFunctionLibrary_GetChooserStructOutput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UChooserFunctionLibrary)


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserFunctionLibrary(UChooserFunctionLibrary&&) = delete; \
	UChooserFunctionLibrary(const UChooserFunctionLibrary&) = delete; \
	CHOOSER_API virtual ~UChooserFunctionLibrary();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserFunctionLibrary;

// ********** End Class UChooserFunctionLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
