// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectDGGUI.h"

#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectDGGUI_generated_h
#error "CustomizableObjectDGGUI.generated.h already included, missing '#pragma once' in CustomizableObjectDGGUI.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectDGGUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstanceUsage;

// ********** Begin Class UDGGUI *******************************************************************
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDGGUI_Statics;
CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDGGUI_NoRegister();

#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDGGUI(); \
	friend struct ::Z_Construct_UClass_UDGGUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECT_API UClass* ::Z_Construct_UClass_UDGGUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UDGGUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CustomizableObject"), Z_Construct_UClass_UDGGUI_NoRegister) \
	DECLARE_SERIALIZER(UDGGUI)


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CUSTOMIZABLEOBJECT_API UDGGUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDGGUI(UDGGUI&&) = delete; \
	UDGGUI(const UDGGUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CUSTOMIZABLEOBJECT_API, UDGGUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDGGUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDGGUI) \
	CUSTOMIZABLEOBJECT_API virtual ~UDGGUI();


#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_17_PROLOG
#define FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDGGUI;

// ********** End Class UDGGUI *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Mutable_Source_CustomizableObject_Private_MuCO_CustomizableObjectDGGUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
