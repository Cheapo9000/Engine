// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RuntimeVirtualTextureComponent.h"

#ifdef ENGINE_RuntimeVirtualTextureComponent_generated_h
#error "RuntimeVirtualTextureComponent.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureComponent.h"
#endif
#define ENGINE_RuntimeVirtualTextureComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVTInvalidatePriority : uint8;

// ********** Begin Class URuntimeVirtualTextureComponent ******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRequestPreload); \
	DECLARE_FUNCTION(execInvalidate);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URuntimeVirtualTextureComponent, ENGINE_API)


struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureComponent(); \
	friend struct ::Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeVirtualTextureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeVirtualTextureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureComponent(URuntimeVirtualTextureComponent&&) = delete; \
	URuntimeVirtualTextureComponent(const URuntimeVirtualTextureComponent&) = delete; \
	ENGINE_API virtual ~URuntimeVirtualTextureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeVirtualTextureComponent;

// ********** End Class URuntimeVirtualTextureComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h

// ********** Begin Enum ERuntimeVirtualTextureMaterialQuality *************************************
#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREMATERIALQUALITY(op) \
	op(ERuntimeVirtualTextureMaterialQuality::Low) \
	op(ERuntimeVirtualTextureMaterialQuality::Medium) \
	op(ERuntimeVirtualTextureMaterialQuality::High) \
	op(ERuntimeVirtualTextureMaterialQuality::Epic) 

enum class ERuntimeVirtualTextureMaterialQuality : uint8;
template<> struct TIsUEnumClass<ERuntimeVirtualTextureMaterialQuality> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeVirtualTextureMaterialQuality>();
// ********** End Enum ERuntimeVirtualTextureMaterialQuality ***************************************

// ********** Begin Enum ERuntimeVirtualTextureUseStreamingMipsInEditorMode ************************
#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREUSESTREAMINGMIPSINEDITORMODE(op) \
	op(ERuntimeVirtualTextureUseStreamingMipsInEditorMode::Never) \
	op(ERuntimeVirtualTextureUseStreamingMipsInEditorMode::PIEOnly) \
	op(ERuntimeVirtualTextureUseStreamingMipsInEditorMode::Always) 

enum class ERuntimeVirtualTextureUseStreamingMipsInEditorMode : uint8;
template<> struct TIsUEnumClass<ERuntimeVirtualTextureUseStreamingMipsInEditorMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERuntimeVirtualTextureUseStreamingMipsInEditorMode>();
// ********** End Enum ERuntimeVirtualTextureUseStreamingMipsInEditorMode **************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
