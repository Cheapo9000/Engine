// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetInteractionComponent.h"

#ifdef UMG_WidgetInteractionComponent_generated_h
#error "WidgetInteractionComponent.generated.h already included, missing '#pragma once' in WidgetInteractionComponent.h"
#endif
#define UMG_WidgetInteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UWidgetComponent;
struct FHitResult;
struct FKey;

// ********** Begin Delegate FOnHoveredWidgetChanged ***********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_47_DELEGATE \
UMG_API void FOnHoveredWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredWidgetChanged, UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent);


// ********** End Delegate FOnHoveredWidgetChanged *************************************************

// ********** Begin Class UWidgetInteractionComponent **********************************************
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execSetCustomHitResult); \
	DECLARE_FUNCTION(execGet2DHitLocation); \
	DECLARE_FUNCTION(execGetLastHitResult); \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget); \
	DECLARE_FUNCTION(execIsOverFocusableWidget); \
	DECLARE_FUNCTION(execIsOverInteractableWidget); \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent); \
	DECLARE_FUNCTION(execScrollWheel); \
	DECLARE_FUNCTION(execSendKeyChar); \
	DECLARE_FUNCTION(execPressAndReleaseKey); \
	DECLARE_FUNCTION(execReleaseKey); \
	DECLARE_FUNCTION(execPressKey); \
	DECLARE_FUNCTION(execReleasePointerKey); \
	DECLARE_FUNCTION(execPressPointerKey);


struct Z_Construct_UClass_UWidgetInteractionComponent_Statics;
UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetInteractionComponent(); \
	friend struct ::Z_Construct_UClass_UWidgetInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UWidgetInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(UWidgetInteractionComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetInteractionComponent(UWidgetInteractionComponent&&) = delete; \
	UWidgetInteractionComponent(const UWidgetInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInteractionComponent) \
	UMG_API virtual ~UWidgetInteractionComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_55_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetInteractionComponent;

// ********** End Class UWidgetInteractionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h

// ********** Begin Enum EWidgetInteractionSource **************************************************
#define FOREACH_ENUM_EWIDGETINTERACTIONSOURCE(op) \
	op(EWidgetInteractionSource::World) \
	op(EWidgetInteractionSource::Mouse) \
	op(EWidgetInteractionSource::CenterScreen) \
	op(EWidgetInteractionSource::Custom) 

enum class EWidgetInteractionSource : uint8;
template<> struct TIsUEnumClass<EWidgetInteractionSource> { enum { Value = true }; };
template<> UMG_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetInteractionSource>();
// ********** End Enum EWidgetInteractionSource ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
