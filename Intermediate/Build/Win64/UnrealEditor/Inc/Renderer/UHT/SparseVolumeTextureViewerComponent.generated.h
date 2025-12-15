// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SparseVolumeTexture/SparseVolumeTextureViewerComponent.h"

#ifdef RENDERER_SparseVolumeTextureViewerComponent_generated_h
#error "SparseVolumeTextureViewerComponent.generated.h already included, missing '#pragma once' in SparseVolumeTextureViewerComponent.h"
#endif
#define RENDERER_SparseVolumeTextureViewerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USparseVolumeTextureViewerComponent **************************************
#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USparseVolumeTextureViewerComponent, RENDERER_API)


struct Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics;
RENDERER_API UClass* Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister();

#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSparseVolumeTextureViewerComponent(); \
	friend struct ::Z_Construct_UClass_USparseVolumeTextureViewerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERER_API UClass* ::Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USparseVolumeTextureViewerComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Renderer"), Z_Construct_UClass_USparseVolumeTextureViewerComponent_NoRegister) \
	DECLARE_SERIALIZER(USparseVolumeTextureViewerComponent) \
	FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RENDERER_API USparseVolumeTextureViewerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USparseVolumeTextureViewerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERER_API, USparseVolumeTextureViewerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USparseVolumeTextureViewerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USparseVolumeTextureViewerComponent(USparseVolumeTextureViewerComponent&&) = delete; \
	USparseVolumeTextureViewerComponent(const USparseVolumeTextureViewerComponent&) = delete;


#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_34_PROLOG
#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_INCLASS \
	FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USparseVolumeTextureViewerComponent;

// ********** End Class USparseVolumeTextureViewerComponent ****************************************

// ********** Begin Class ASparseVolumeTextureViewer ***********************************************
struct Z_Construct_UClass_ASparseVolumeTextureViewer_Statics;
RENDERER_API UClass* Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister();

#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_128_INCLASS \
private: \
	static void StaticRegisterNativesASparseVolumeTextureViewer(); \
	friend struct ::Z_Construct_UClass_ASparseVolumeTextureViewer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERER_API UClass* ::Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister(); \
public: \
	DECLARE_CLASS2(ASparseVolumeTextureViewer, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Renderer"), Z_Construct_UClass_ASparseVolumeTextureViewer_NoRegister) \
	DECLARE_SERIALIZER(ASparseVolumeTextureViewer)


#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RENDERER_API ASparseVolumeTextureViewer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASparseVolumeTextureViewer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RENDERER_API, ASparseVolumeTextureViewer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASparseVolumeTextureViewer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASparseVolumeTextureViewer(ASparseVolumeTextureViewer&&) = delete; \
	ASparseVolumeTextureViewer(const ASparseVolumeTextureViewer&) = delete; \
	RENDERER_API virtual ~ASparseVolumeTextureViewer();


#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_125_PROLOG
#define FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_128_INCLASS \
	FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASparseVolumeTextureViewer;

// ********** End Class ASparseVolumeTextureViewer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Renderer_Private_SparseVolumeTexture_SparseVolumeTextureViewerComponent_h

// ********** Begin Enum ESparseVolumeTexturePreviewAttribute **************************************
#define FOREACH_ENUM_ESPARSEVOLUMETEXTUREPREVIEWATTRIBUTE(op) \
	op(ESVTPA_AttributesA_R) \
	op(ESVTPA_AttributesA_G) \
	op(ESVTPA_AttributesA_B) \
	op(ESVTPA_AttributesA_A) \
	op(ESVTPA_AttributesB_R) \
	op(ESVTPA_AttributesB_G) \
	op(ESVTPA_AttributesB_B) \
	op(ESVTPA_AttributesB_A) 

enum ESparseVolumeTexturePreviewAttribute : uint8;
template<> RENDERER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESparseVolumeTexturePreviewAttribute>();
// ********** End Enum ESparseVolumeTexturePreviewAttribute ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
