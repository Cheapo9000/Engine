// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepBoolFilter.h"

#ifdef DATAPREPCORE_DataprepBoolFilter_generated_h
#error "DataprepBoolFilter.generated.h already included, missing '#pragma once' in DataprepBoolFilter.h"
#endif
#define DATAPREPCORE_DataprepBoolFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataprepBoolFilter ******************************************************
struct Z_Construct_UClass_UDataprepBoolFilter_Statics;
DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepBoolFilter_NoRegister();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepBoolFilter(); \
	friend struct ::Z_Construct_UClass_UDataprepBoolFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAPREPCORE_API UClass* ::Z_Construct_UClass_UDataprepBoolFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataprepBoolFilter, UDataprepFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepCore"), Z_Construct_UClass_UDataprepBoolFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataprepBoolFilter)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepBoolFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataprepBoolFilter(UDataprepBoolFilter&&) = delete; \
	UDataprepBoolFilter(const UDataprepBoolFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepBoolFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepBoolFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepBoolFilter) \
	NO_API virtual ~UDataprepBoolFilter();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_15_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataprepBoolFilter;

// ********** End Class UDataprepBoolFilter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepBoolFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
