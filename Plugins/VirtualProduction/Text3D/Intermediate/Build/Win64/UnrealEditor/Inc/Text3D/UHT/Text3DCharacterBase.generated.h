// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Text3DCharacterBase.h"

#ifdef TEXT3D_Text3DCharacterBase_generated_h
#error "Text3DCharacterBase.generated.h already included, missing '#pragma once' in Text3DCharacterBase.h"
#endif
#define TEXT3D_Text3DCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UText3DCharacterBase *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execSetRelativeScale); \
	DECLARE_FUNCTION(execSetRelativeRotation); \
	DECLARE_FUNCTION(execSetRelativeLocation);


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_ACCESSORS \
static void GetRelativeLocation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRelativeLocation_WrapperImpl(void* Object, const void* InValue); \
static void GetRelativeRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetRelativeRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetRelativeScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetRelativeScale_WrapperImpl(void* Object, const void* InValue); \
static void GetbVisible_WrapperImpl(const void* Object, void* OutValue); \
static void SetbVisible_WrapperImpl(void* Object, const void* InValue); \
static void GetStyleTag_WrapperImpl(const void* Object, void* OutValue); \
static void SetStyleTag_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UText3DCharacterBase_Statics;
TEXT3D_API UClass* Z_Construct_UClass_UText3DCharacterBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DCharacterBase(); \
	friend struct ::Z_Construct_UClass_UText3DCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_UText3DCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UText3DCharacterBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_UText3DCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(UText3DCharacterBase)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXT3D_API UText3DCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UText3DCharacterBase(UText3DCharacterBase&&) = delete; \
	UText3DCharacterBase(const UText3DCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXT3D_API, UText3DCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText3DCharacterBase) \
	TEXT3D_API virtual ~UText3DCharacterBase();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UText3DCharacterBase;

// ********** End Class UText3DCharacterBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Characters_Text3DCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
