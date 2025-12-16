// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapePatchComponent.h"

#ifdef LANDSCAPEPATCH_LandscapePatchComponent_generated_h
#error "LandscapePatchComponent.generated.h already included, missing '#pragma once' in LandscapePatchComponent.h"
#endif
#define LANDSCAPEPATCH_LandscapePatchComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADEPRECATED_LandscapePatchManager;
class ALandscape;
struct FGuid;

// ********** Begin Class ULandscapePatchComponent *************************************************
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLayerOptions); \
	DECLARE_FUNCTION(execGetPatchManager); \
	DECLARE_FUNCTION(execSetPatchManager); \
	DECLARE_FUNCTION(execSetLandscape); \
	DECLARE_FUNCTION(execGetLandscape); \
	DECLARE_FUNCTION(execGetLandscapeHeightmapCoordsToWorld); \
	DECLARE_FUNCTION(execSetEditLayerGuid); \
	DECLARE_FUNCTION(execGetEditLayerGuid); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execRequestLandscapeUpdate);


struct Z_Construct_UClass_ULandscapePatchComponent_Statics;
LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent_NoRegister();

#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapePatchComponent(); \
	friend struct ::Z_Construct_UClass_ULandscapePatchComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEPATCH_API UClass* ::Z_Construct_UClass_ULandscapePatchComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapePatchComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), Z_Construct_UClass_ULandscapePatchComponent_NoRegister) \
	DECLARE_SERIALIZER(ULandscapePatchComponent) \
	virtual UObject* _getUObject() const override { return const_cast<ULandscapePatchComponent*>(this); }


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapePatchComponent(ULandscapePatchComponent&&) = delete; \
	ULandscapePatchComponent(const ULandscapePatchComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEPATCH_API, ULandscapePatchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapePatchComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapePatchComponent) \
	LANDSCAPEPATCH_API virtual ~ULandscapePatchComponent();


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_46_PROLOG
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapePatchComponent;

// ********** End Class ULandscapePatchComponent ***************************************************

// ********** Begin ScriptStruct FLandscapePatchComponentInstanceData ******************************
struct Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics;
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_257_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics; \
	LANDSCAPEPATCH_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


struct FLandscapePatchComponentInstanceData;
// ********** End ScriptStruct FLandscapePatchComponentInstanceData ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h

// ********** Begin Enum ELandscapePatchPriorityInitialization *************************************
#define FOREACH_ENUM_ELANDSCAPEPATCHPRIORITYINITIALIZATION(op) \
	op(ELandscapePatchPriorityInitialization::AcquireHighest) \
	op(ELandscapePatchPriorityInitialization::KeepOriginal) \
	op(ELandscapePatchPriorityInitialization::SmallIncrement) 

enum class ELandscapePatchPriorityInitialization : uint8;
template<> struct TIsUEnumClass<ELandscapePatchPriorityInitialization> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapePatchPriorityInitialization>();
// ********** End Enum ELandscapePatchPriorityInitialization ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
