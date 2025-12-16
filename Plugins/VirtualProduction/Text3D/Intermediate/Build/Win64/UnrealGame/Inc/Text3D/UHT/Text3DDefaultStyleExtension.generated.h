// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Extensions/Text3DDefaultStyleExtension.h"

#ifdef TEXT3D_Text3DDefaultStyleExtension_generated_h
#error "Text3DDefaultStyleExtension.generated.h already included, missing '#pragma once' in Text3DDefaultStyleExtension.h"
#endif
#define TEXT3D_Text3DDefaultStyleExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UText3DStyleSet;

// ********** Begin Class UText3DDefaultStyleExtension *********************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStyleSet); \
	DECLARE_FUNCTION(execSetStyleSet);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_ACCESSORS \
static void GetStyleSet_WrapperImpl(const void* Object, void* OutValue); \
static void SetStyleSet_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DDefaultStyleExtension_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DDefaultStyleExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DDefaultStyleExtension(); \
	friend struct ::Z_Construct_UClass_UText3DDefaultStyleExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DDefaultStyleExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DDefaultStyleExtension, UText3DStyleExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DDefaultStyleExtension_NoRegister) \
	DECLARE_SERIALIZER(UText3DDefaultStyleExtension)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DDefaultStyleExtension(UText3DDefaultStyleExtension&&) = delete; \
	UText3DDefaultStyleExtension(const UText3DDefaultStyleExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DDefaultStyleExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DDefaultStyleExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DDefaultStyleExtension) \
	TEXT3D_API virtual ~UText3DDefaultStyleExtension();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DDefaultStyleExtension;

// ********** End Class UText3DDefaultStyleExtension ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Extensions_Text3DDefaultStyleExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
