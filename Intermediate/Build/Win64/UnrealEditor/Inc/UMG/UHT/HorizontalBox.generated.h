// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HorizontalBox.h"

#ifdef UMG_HorizontalBox_generated_h
#error "HorizontalBox.generated.h already included, missing '#pragma once' in HorizontalBox.h"
#endif
#define UMG_HorizontalBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizontalBoxSlot;
class UWidget;

// ********** Begin Class UHorizontalBox ***********************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddChildToHorizontalBox);


struct Z_Construct_UClass_UHorizontalBox_Statics;
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBox(); \
	friend struct ::Z_Construct_UClass_UHorizontalBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UHorizontalBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UHorizontalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UHorizontalBox_NoRegister) \
	DECLARE_SERIALIZER(UHorizontalBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UHorizontalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UHorizontalBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHorizontalBox(UHorizontalBox&&) = delete; \
	UHorizontalBox(const UHorizontalBox&) = delete; \
	UMG_API virtual ~UHorizontalBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHorizontalBox;

// ********** End Class UHorizontalBox *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
