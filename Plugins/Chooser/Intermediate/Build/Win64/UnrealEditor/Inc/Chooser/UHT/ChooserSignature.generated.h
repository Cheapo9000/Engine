// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserSignature.h"

#ifdef CHOOSER_ChooserSignature_generated_h
#error "ChooserSignature.generated.h already included, missing '#pragma once' in ChooserSignature.h"
#endif
#define CHOOSER_ChooserSignature_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChooserSignature ********************************************************
struct Z_Construct_UClass_UChooserSignature_Statics;
CHOOSER_API UClass* Z_Construct_UClass_UChooserSignature_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUChooserSignature(); \
	friend struct ::Z_Construct_UClass_UChooserSignature_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSER_API UClass* ::Z_Construct_UClass_UChooserSignature_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserSignature, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chooser"), Z_Construct_UClass_UChooserSignature_NoRegister) \
	DECLARE_SERIALIZER(UChooserSignature) \
	virtual UObject* _getUObject() const override { return const_cast<UChooserSignature*>(this); }


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHOOSER_API UChooserSignature(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChooserSignature) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHOOSER_API, UChooserSignature); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserSignature); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserSignature(UChooserSignature&&) = delete; \
	UChooserSignature(const UChooserSignature&) = delete; \
	CHOOSER_API virtual ~UChooserSignature();


#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_15_PROLOG
#define FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_18_INCLASS \
	FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChooserSignature;

// ********** End Class UChooserSignature **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_Chooser_Public_ChooserSignature_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
