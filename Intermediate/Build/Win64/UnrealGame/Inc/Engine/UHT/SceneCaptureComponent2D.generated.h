// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponent2D.h"

#ifdef ENGINE_SceneCaptureComponent2D_generated_h
#error "SceneCaptureComponent2D.generated.h already included, missing '#pragma once' in SceneCaptureComponent2D.h"
#endif
#define ENGINE_SceneCaptureComponent2D_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;

// ********** Begin Class USceneCaptureComponent2D *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCaptureScene); \
	DECLARE_FUNCTION(execRemoveBlendable); \
	DECLARE_FUNCTION(execAddOrUpdateBlendable);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D, ENGINE_API)


struct Z_Construct_UClass_USceneCaptureComponent2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent2D(); \
	friend struct ::Z_Construct_UClass_USceneCaptureComponent2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USceneCaptureComponent2D_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneCaptureComponent2D, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister) \
	DECLARE_SERIALIZER(USceneCaptureComponent2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneCaptureComponent2D(USceneCaptureComponent2D&&) = delete; \
	USceneCaptureComponent2D(const USceneCaptureComponent2D&) = delete; \
	ENGINE_API virtual ~USceneCaptureComponent2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneCaptureComponent2D;

// ********** End Class USceneCaptureComponent2D ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h

// ********** Begin Enum ESceneCaptureUnlitViewmode ************************************************
#define FOREACH_ENUM_ESCENECAPTUREUNLITVIEWMODE(op) \
	op(ESceneCaptureUnlitViewmode::Disabled) \
	op(ESceneCaptureUnlitViewmode::Capture) \
	op(ESceneCaptureUnlitViewmode::CaptureOrCustomRenderPass) 

enum class ESceneCaptureUnlitViewmode : uint8;
template<> struct TIsUEnumClass<ESceneCaptureUnlitViewmode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESceneCaptureUnlitViewmode>();
// ********** End Enum ESceneCaptureUnlitViewmode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
