// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifyMirrorInspectionLibrary.h"

#ifdef ENGINE_AnimNotifyMirrorInspectionLibrary_generated_h
#error "AnimNotifyMirrorInspectionLibrary.generated.h already included, missing '#pragma once' in AnimNotifyMirrorInspectionLibrary.h"
#endif
#define ENGINE_AnimNotifyMirrorInspectionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMirrorDataTable;
struct FAnimNotifyEventReference;

// ********** Begin Class UAnimNotifyMirrorInspectionLibrary ***************************************
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execIsTriggeredByMirroredAnimation);


struct Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNotifyMirrorInspectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimNotifyMirrorInspectionLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimNotifyMirrorInspectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNotifyMirrorInspectionLibrary(UAnimNotifyMirrorInspectionLibrary&&) = delete; \
	UAnimNotifyMirrorInspectionLibrary(const UAnimNotifyMirrorInspectionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimNotifyMirrorInspectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyMirrorInspectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyMirrorInspectionLibrary) \
	ENGINE_API virtual ~UAnimNotifyMirrorInspectionLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNotifyMirrorInspectionLibrary;

// ********** End Class UAnimNotifyMirrorInspectionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
