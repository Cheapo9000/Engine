// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSet.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_SelectionSet_generated_h
#error "SelectionSet.generated.h already included, missing '#pragma once' in SelectionSet.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_SelectionSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USelectionSet ************************************************************
struct Z_Construct_UClass_USelectionSet_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USelectionSet_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectionSet(); \
	friend struct ::Z_Construct_UClass_USelectionSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_USelectionSet_NoRegister(); \
public: \
	DECLARE_CLASS2(USelectionSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_USelectionSet_NoRegister) \
	DECLARE_SERIALIZER(USelectionSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API USelectionSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USelectionSet(USelectionSet&&) = delete; \
	USelectionSet(const USelectionSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, USelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectionSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectionSet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~USelectionSet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_27_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USelectionSet;

// ********** End Class USelectionSet **************************************************************

// ********** Begin Class UMeshSelectionSet ********************************************************
struct Z_Construct_UClass_UMeshSelectionSet_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSelectionSet_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshSelectionSet(); \
	friend struct ::Z_Construct_UClass_UMeshSelectionSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UMeshSelectionSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshSelectionSet, USelectionSet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UMeshSelectionSet_NoRegister) \
	DECLARE_SERIALIZER(UMeshSelectionSet)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshSelectionSet(UMeshSelectionSet&&) = delete; \
	UMeshSelectionSet(const UMeshSelectionSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMeshSelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshSelectionSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshSelectionSet) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UMeshSelectionSet();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_69_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshSelectionSet;

// ********** End Class UMeshSelectionSet **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SelectionSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
