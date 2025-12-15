// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementGroup.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementGroup_generated_h
#error "GizmoElementGroup.generated.h already included, missing '#pragma once' in GizmoElementGroup.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementGroup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGizmoElementGroupBase ***************************************************
struct Z_Construct_UClass_UGizmoElementGroupBase_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementGroupBase_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementGroupBase(); \
	friend struct ::Z_Construct_UClass_UGizmoElementGroupBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementGroupBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementGroupBase, UGizmoElementLineBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementGroupBase_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementGroupBase)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementGroupBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementGroupBase(UGizmoElementGroupBase&&) = delete; \
	UGizmoElementGroupBase(const UGizmoElementGroupBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementGroupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementGroupBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementGroupBase) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementGroupBase();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_15_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementGroupBase;

// ********** End Class UGizmoElementGroupBase *****************************************************

// ********** Begin Class UGizmoElementGroup *******************************************************
struct Z_Construct_UClass_UGizmoElementGroup_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementGroup_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementGroup(); \
	friend struct ::Z_Construct_UClass_UGizmoElementGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UGizmoElementGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UGizmoElementGroup, UGizmoElementGroupBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UGizmoElementGroup_NoRegister) \
	DECLARE_SERIALIZER(UGizmoElementGroup)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UGizmoElementGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGizmoElementGroup(UGizmoElementGroup&&) = delete; \
	UGizmoElementGroup(const UGizmoElementGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UGizmoElementGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementGroup) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UGizmoElementGroup();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_107_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGizmoElementGroup;

// ********** End Class UGizmoElementGroup *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementGroup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
