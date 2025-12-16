// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolMeshSelector.h"

#ifdef MESHMODELINGTOOLSEDITORONLY_ToolMeshSelector_generated_h
#error "ToolMeshSelector.generated.h already included, missing '#pragma once' in ToolMeshSelector.h"
#endif
#define MESHMODELINGTOOLSEDITORONLY_ToolMeshSelector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolMeshSelector ********************************************************
struct Z_Construct_UClass_UToolMeshSelector_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UToolMeshSelector_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolMeshSelector(); \
	friend struct ::Z_Construct_UClass_UToolMeshSelector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UToolMeshSelector_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolMeshSelector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UToolMeshSelector_NoRegister) \
	DECLARE_SERIALIZER(UToolMeshSelector)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UToolMeshSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolMeshSelector(UToolMeshSelector&&) = delete; \
	UToolMeshSelector(const UToolMeshSelector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UToolMeshSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolMeshSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolMeshSelector) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UToolMeshSelector();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolMeshSelector;

// ********** End Class UToolMeshSelector **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ToolMeshSelector_h

// ********** Begin Enum EComponentSelectionMode ***************************************************
#define FOREACH_ENUM_ECOMPONENTSELECTIONMODE(op) \
	op(EComponentSelectionMode::Vertices) \
	op(EComponentSelectionMode::Edges) \
	op(EComponentSelectionMode::Faces) 

enum class EComponentSelectionMode : uint8;
template<> struct TIsUEnumClass<EComponentSelectionMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EComponentSelectionMode>();
// ********** End Enum EComponentSelectionMode *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
