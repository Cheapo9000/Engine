// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Libraries/VPBlueprintLibrary.h"

#ifdef VPUTILITIES_VPBlueprintLibrary_generated_h
#error "VPBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBlueprintLibrary.h"
#endif
#define VPUTILITIES_VPBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AVPBookmarkActor;
class AVPViewportTickableActorBase;
class UClass;
class UObject;
class USplineMeshComponent;
class UVPBookmark;
class UWorld;
struct FGameplayTagContainer;
struct FVPBookmarkCreationContext;

// ********** Begin Class UVPBlueprintLibrary ******************************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortVPBookmarkActorsByTimestamp); \
	DECLARE_FUNCTION(execSortActorsByName); \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorDisable); \
	DECLARE_FUNCTION(execVPBookmarkSplineMeshIndicatorSetStartAndEnd); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execEditorDeleteSelectedObjects); \
	DECLARE_FUNCTION(execEditorDuplicate); \
	DECLARE_FUNCTION(execEditorRedo); \
	DECLARE_FUNCTION(execEditorUndo); \
	DECLARE_FUNCTION(execGetLeftInteractorLocation); \
	DECLARE_FUNCTION(execGetVREditorLaserHoverLocation); \
	DECLARE_FUNCTION(execIsVREditorModeActive); \
	DECLARE_FUNCTION(execSetGrabSpeed); \
	DECLARE_FUNCTION(execGetEditorVRRoomTransform); \
	DECLARE_FUNCTION(execGetEditorVRHeadTransform); \
	DECLARE_FUNCTION(execGetEditorViewportTransform); \
	DECLARE_FUNCTION(execGetVirtualProductionRole); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor); \
	DECLARE_FUNCTION(execSpawnBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execSpawnVPTickableActor); \
	DECLARE_FUNCTION(execRefresh3DEditorViewport);


struct Z_Construct_UClass_UVPBlueprintLibrary_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_UVPBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UVPBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_UVPBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVPBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_UVPBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVPBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVPBlueprintLibrary(UVPBlueprintLibrary&&) = delete; \
	UVPBlueprintLibrary(const UVPBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBlueprintLibrary) \
	NO_API virtual ~UVPBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVPBlueprintLibrary;

// ********** End Class UVPBlueprintLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Libraries_VPBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
