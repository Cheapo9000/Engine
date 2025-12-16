// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Text3DCharacterTransform.h"

#ifdef TEXT3D_Text3DCharacterTransform_generated_h
#error "Text3DCharacterTransform.generated.h already included, missing '#pragma once' in Text3DCharacterTransform.h"
#endif
#define TEXT3D_Text3DCharacterTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EText3DCharacterEffectOrder : uint8;

// ********** Begin Class UText3DCharacterTransform ************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScaleEnd); \
	DECLARE_FUNCTION(execSetScaleBegin); \
	DECLARE_FUNCTION(execSetScaleRange); \
	DECLARE_FUNCTION(execSetScaleOrder); \
	DECLARE_FUNCTION(execSetScaleProgress); \
	DECLARE_FUNCTION(execSetScaleEnabled); \
	DECLARE_FUNCTION(execSetRotateEnd); \
	DECLARE_FUNCTION(execSetRotateBegin); \
	DECLARE_FUNCTION(execSetRotateRange); \
	DECLARE_FUNCTION(execSetRotateOrder); \
	DECLARE_FUNCTION(execSetRotateProgress); \
	DECLARE_FUNCTION(execSetRotateEnabled); \
	DECLARE_FUNCTION(execSetLocationDistance); \
	DECLARE_FUNCTION(execSetLocationRange); \
	DECLARE_FUNCTION(execSetLocationOrder); \
	DECLARE_FUNCTION(execSetLocationProgress); \
	DECLARE_FUNCTION(execSetLocationEnabled);


struct Z_Construct_UClass_UText3DCharacterTransform_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DCharacterTransform_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DCharacterTransform(); \
	friend struct ::Z_Construct_UClass_UText3DCharacterTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DCharacterTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DCharacterTransform, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DCharacterTransform_NoRegister) \
	DECLARE_SERIALIZER(UText3DCharacterTransform)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DCharacterTransform(UText3DCharacterTransform&&) = delete; \
	UText3DCharacterTransform(const UText3DCharacterTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DCharacterTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DCharacterTransform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DCharacterTransform) \
	TEXT3D_API virtual ~UText3DCharacterTransform();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DCharacterTransform;

// ********** End Class UText3DCharacterTransform **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
