// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboBox.h"

#ifdef UMG_ComboBox_generated_h
#error "ComboBox.generated.h already included, missing '#pragma once' in ComboBox.h"
#endif
#define UMG_ComboBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UComboBox ****************************************************************
struct Z_Construct_UClass_UComboBox_Statics;
UMG_API UClass* Z_Construct_UClass_UComboBox_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUComboBox(); \
	friend struct ::Z_Construct_UClass_UComboBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UComboBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UComboBox, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UComboBox_NoRegister) \
	DECLARE_SERIALIZER(UComboBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UComboBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UComboBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UComboBox(UComboBox&&) = delete; \
	UComboBox(const UComboBox&) = delete; \
	UMG_API virtual ~UComboBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_15_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UComboBox;

// ********** End Class UComboBox ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
