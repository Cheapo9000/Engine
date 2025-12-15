// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MouseHoverComponent.h"

#ifdef UMG_MouseHoverComponent_generated_h
#error "MouseHoverComponent.generated.h already included, missing '#pragma once' in MouseHoverComponent.h"
#endif
#define UMG_MouseHoverComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMouseHoverComponent *****************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_ACCESSORS \
static void GetbIsHovered_WrapperImpl(const void* Object, void* OutValue);


struct Z_Construct_UClass_UMouseHoverComponent_Statics;
UMG_API UClass* Z_Construct_UClass_UMouseHoverComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseHoverComponent(); \
	friend struct ::Z_Construct_UClass_UMouseHoverComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UMouseHoverComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMouseHoverComponent, UUIComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UMouseHoverComponent_NoRegister) \
	DECLARE_SERIALIZER(UMouseHoverComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UMouseHoverComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMouseHoverComponent(UMouseHoverComponent&&) = delete; \
	UMouseHoverComponent(const UMouseHoverComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UMouseHoverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseHoverComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMouseHoverComponent) \
	UMG_API virtual ~UMouseHoverComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsHovered,UMG_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsHovered) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_ENHANCED_CONSTRUCTORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h_15_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMouseHoverComponent;

// ********** End Class UMouseHoverComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_MouseHoverComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
