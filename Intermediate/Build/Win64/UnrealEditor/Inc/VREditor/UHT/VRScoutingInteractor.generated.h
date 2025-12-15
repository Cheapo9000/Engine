// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRScoutingInteractor.h"

#ifdef VREDITOR_VRScoutingInteractor_generated_h
#error "VRScoutingInteractor.generated.h already included, missing '#pragma once' in VRScoutingInteractor.h"
#endif
#define VREDITOR_VRScoutingInteractor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInputComponent;
enum class EGizmoHandleTypes : uint8;

// ********** Begin Class UVRScoutingInteractor ****************************************************
#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execGetSelectedActors); \
	DECLARE_FUNCTION(execGetGizmoMode); \
	DECLARE_FUNCTION(execSetGizmoMode);


struct Z_Construct_UClass_UVRScoutingInteractor_Statics;
VREDITOR_API UClass* Z_Construct_UClass_UVRScoutingInteractor_NoRegister();

#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRScoutingInteractor(); \
	friend struct ::Z_Construct_UClass_UVRScoutingInteractor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VREDITOR_API UClass* ::Z_Construct_UClass_UVRScoutingInteractor_NoRegister(); \
public: \
	DECLARE_CLASS2(UVRScoutingInteractor, UVREditorInteractor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VREditor"), Z_Construct_UClass_UVRScoutingInteractor_NoRegister) \
	DECLARE_SERIALIZER(UVRScoutingInteractor)


#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVRScoutingInteractor(UVRScoutingInteractor&&) = delete; \
	UVRScoutingInteractor(const UVRScoutingInteractor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VREDITOR_API, UVRScoutingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRScoutingInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVRScoutingInteractor) \
	VREDITOR_API virtual ~UVRScoutingInteractor();


#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_25_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVRScoutingInteractor;

// ********** End Class UVRScoutingInteractor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VRScoutingInteractor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
