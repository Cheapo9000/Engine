// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VerticalBox.h"

#ifdef UMG_VerticalBox_generated_h
#error "VerticalBox.generated.h already included, missing '#pragma once' in VerticalBox.h"
#endif
#define UMG_VerticalBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVerticalBoxSlot;
class UWidget;

// ********** Begin Class UVerticalBox *************************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddChildToVerticalBox);


struct Z_Construct_UClass_UVerticalBox_Statics;
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBox(); \
	friend struct ::Z_Construct_UClass_UVerticalBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UVerticalBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerticalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UVerticalBox_NoRegister) \
	DECLARE_SERIALIZER(UVerticalBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UVerticalBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBox); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerticalBox(UVerticalBox&&) = delete; \
	UVerticalBox(const UVerticalBox&) = delete; \
	UMG_API virtual ~UVerticalBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_21_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerticalBox;

// ********** End Class UVerticalBox ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
