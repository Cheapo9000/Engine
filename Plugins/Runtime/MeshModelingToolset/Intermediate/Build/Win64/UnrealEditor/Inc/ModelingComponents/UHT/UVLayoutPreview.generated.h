// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Drawing/UVLayoutPreview.h"

#ifdef MODELINGCOMPONENTS_UVLayoutPreview_generated_h
#error "UVLayoutPreview.generated.h already included, missing '#pragma once' in UVLayoutPreview.h"
#endif
#define MODELINGCOMPONENTS_UVLayoutPreview_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVLayoutPreviewProperties ***********************************************
struct Z_Construct_UClass_UUVLayoutPreviewProperties_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutPreviewProperties(); \
	friend struct ::Z_Construct_UClass_UUVLayoutPreviewProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVLayoutPreviewProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UUVLayoutPreviewProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVLayoutPreviewProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UUVLayoutPreviewProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVLayoutPreviewProperties(UUVLayoutPreviewProperties&&) = delete; \
	UUVLayoutPreviewProperties(const UUVLayoutPreviewProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UUVLayoutPreviewProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutPreviewProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutPreviewProperties) \
	MODELINGCOMPONENTS_API virtual ~UUVLayoutPreviewProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVLayoutPreviewProperties;

// ********** End Class UUVLayoutPreviewProperties *************************************************

// ********** Begin Class UUVLayoutPreview *********************************************************
struct Z_Construct_UClass_UUVLayoutPreview_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutPreview(); \
	friend struct ::Z_Construct_UClass_UUVLayoutPreview_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UUVLayoutPreview_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVLayoutPreview, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UUVLayoutPreview_NoRegister) \
	DECLARE_SERIALIZER(UUVLayoutPreview)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UUVLayoutPreview(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVLayoutPreview(UUVLayoutPreview&&) = delete; \
	UUVLayoutPreview(const UUVLayoutPreview&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UUVLayoutPreview); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutPreview); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutPreview)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_68_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVLayoutPreview;

// ********** End Class UUVLayoutPreview ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_UVLayoutPreview_h

// ********** Begin Enum EUVLayoutPreviewSide ******************************************************
#define FOREACH_ENUM_EUVLAYOUTPREVIEWSIDE(op) \
	op(EUVLayoutPreviewSide::Left) \
	op(EUVLayoutPreviewSide::Right) 

enum class EUVLayoutPreviewSide;
template<> struct TIsUEnumClass<EUVLayoutPreviewSide> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVLayoutPreviewSide>();
// ********** End Enum EUVLayoutPreviewSide ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
