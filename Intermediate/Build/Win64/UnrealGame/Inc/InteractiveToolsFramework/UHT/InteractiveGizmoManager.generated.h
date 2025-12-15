// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveGizmoManager.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h
#error "InteractiveGizmoManager.generated.h already included, missing '#pragma once' in InteractiveGizmoManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActiveGizmo ******************************************************
struct Z_Construct_UScriptStruct_FActiveGizmo_Statics;
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActiveGizmo_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


struct FActiveGizmo;
// ********** End ScriptStruct FActiveGizmo ********************************************************

// ********** Begin Class UInteractiveGizmoManager *************************************************
struct Z_Construct_UClass_UInteractiveGizmoManager_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoManager_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmoManager(); \
	friend struct ::Z_Construct_UClass_UInteractiveGizmoManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UInteractiveGizmoManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractiveGizmoManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UInteractiveGizmoManager_NoRegister) \
	DECLARE_SERIALIZER(UInteractiveGizmoManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmoManager*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractiveGizmoManager(UInteractiveGizmoManager&&) = delete; \
	UInteractiveGizmoManager(const UInteractiveGizmoManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveGizmoManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmoManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveGizmoManager) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveGizmoManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractiveGizmoManager;

// ********** End Class UInteractiveGizmoManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
