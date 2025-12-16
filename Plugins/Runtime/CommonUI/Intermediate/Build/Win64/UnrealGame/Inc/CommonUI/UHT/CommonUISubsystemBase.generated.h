// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUISubsystemBase.h"

#ifdef COMMONUI_CommonUISubsystemBase_generated_h
#error "CommonUISubsystemBase.generated.h already included, missing '#pragma once' in CommonUISubsystemBase.h"
#endif
#define COMMONUI_CommonUISubsystemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class ULocalPlayer;
enum class ECommonInputType : uint8;
struct FDataTableRowHandle;
struct FSlateBrush;

// ********** Begin Class UCommonUISubsystemBase ***************************************************
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnhancedInputActionButtonIcon); \
	DECLARE_FUNCTION(execGetInputActionButtonIcon);


struct Z_Construct_UClass_UCommonUISubsystemBase_Statics;
COMMONUI_API UClass* Z_Construct_UClass_UCommonUISubsystemBase_NoRegister();

#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUISubsystemBase(); \
	friend struct ::Z_Construct_UClass_UCommonUISubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONUI_API UClass* ::Z_Construct_UClass_UCommonUISubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommonUISubsystemBase, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), Z_Construct_UClass_UCommonUISubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(UCommonUISubsystemBase)


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_API UCommonUISubsystemBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommonUISubsystemBase(UCommonUISubsystemBase&&) = delete; \
	UCommonUISubsystemBase(const UCommonUISubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_API, UCommonUISubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISubsystemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUISubsystemBase) \
	COMMONUI_API virtual ~UCommonUISubsystemBase();


#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommonUISubsystemBase;

// ********** End Class UCommonUISubsystemBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
