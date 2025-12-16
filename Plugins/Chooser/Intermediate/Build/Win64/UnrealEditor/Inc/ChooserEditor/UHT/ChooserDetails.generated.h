// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserDetails.h"

#ifdef CHOOSEREDITOR_ChooserDetails_generated_h
#error "ChooserDetails.generated.h already included, missing '#pragma once' in ChooserDetails.h"
#endif
#define CHOOSEREDITOR_ChooserDetails_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;

// ********** Begin Class UChooserRowDetails *******************************************************
#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResultAssetFilter);


struct Z_Construct_UClass_UChooserRowDetails_Statics;
CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserRowDetails_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserRowDetails(); \
	friend struct ::Z_Construct_UClass_UChooserRowDetails_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSEREDITOR_API UClass* ::Z_Construct_UClass_UChooserRowDetails_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserRowDetails, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChooserEditor"), Z_Construct_UClass_UChooserRowDetails_NoRegister) \
	DECLARE_SERIALIZER(UChooserRowDetails)


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChooserRowDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserRowDetails(UChooserRowDetails&&) = delete; \
	UChooserRowDetails(const UChooserRowDetails&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserRowDetails); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserRowDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserRowDetails) \
	NO_API virtual ~UChooserRowDetails();


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_14_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserRowDetails;

// ********** End Class UChooserRowDetails *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserDetails_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
