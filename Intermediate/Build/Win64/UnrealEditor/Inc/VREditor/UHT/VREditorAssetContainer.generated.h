// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorAssetContainer.h"

#ifdef VREDITOR_VREditorAssetContainer_generated_h
#error "VREditorAssetContainer.generated.h already included, missing '#pragma once' in VREditorAssetContainer.h"
#endif
#define VREDITOR_VREditorAssetContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVREditorAssetContainer **************************************************
struct Z_Construct_UClass_UVREditorAssetContainer_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVREditorAssetContainer_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorAssetContainer(); \
	friend struct ::Z_Construct_UClass_UVREditorAssetContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVREditorAssetContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UVREditorAssetContainer, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVREditorAssetContainer_NoRegister) \
	DECLARE_SERIALIZER(UVREditorAssetContainer)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VREDITOR_API UVREditorAssetContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVREditorAssetContainer(UVREditorAssetContainer&&) = delete; \
	UVREditorAssetContainer(const UVREditorAssetContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVREditorAssetContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorAssetContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorAssetContainer) \
	VREDITOR_API virtual ~UVREditorAssetContainer();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_21_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVREditorAssetContainer;

// ********** End Class UVREditorAssetContainer ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorAssetContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
