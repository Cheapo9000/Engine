// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditPivotTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_EditPivotTool_generated_h
#error "EditPivotTool.generated.h already included, missing '#pragma once' in EditPivotTool.h"
#endif
#define MESHMODELINGTOOLSEXP_EditPivotTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolBuilder(); \
	friend struct Z_Construct_UClass_UEditPivotToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UEditPivotToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UEditPivotToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditPivotToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditPivotToolBuilder(UEditPivotToolBuilder&&); \
	UEditPivotToolBuilder(const UEditPivotToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditPivotToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolBuilder) \
	NO_API virtual ~UEditPivotToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UEditPivotToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolProperties(); \
	friend struct Z_Construct_UClass_UEditPivotToolProperties_Statics; \
public: \
	DECLARE_CLASS(UEditPivotToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UEditPivotToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditPivotToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditPivotToolProperties(UEditPivotToolProperties&&); \
	UEditPivotToolProperties(const UEditPivotToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditPivotToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolProperties) \
	NO_API virtual ~UEditPivotToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_57_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UEditPivotToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditPivotTarget_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<struct FEditPivotTarget>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWorldOrigin); \
	DECLARE_FUNCTION(execBack); \
	DECLARE_FUNCTION(execFront); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execLeft); \
	DECLARE_FUNCTION(execTop); \
	DECLARE_FUNCTION(execBottom); \
	DECLARE_FUNCTION(execCenter);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolActionPropertySet(); \
	friend struct Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics; \
public: \
	DECLARE_CLASS(UEditPivotToolActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UEditPivotToolActionPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditPivotToolActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditPivotToolActionPropertySet(UEditPivotToolActionPropertySet&&); \
	UEditPivotToolActionPropertySet(const UEditPivotToolActionPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditPivotToolActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolActionPropertySet) \
	NO_API virtual ~UEditPivotToolActionPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_113_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UEditPivotToolActionPropertySet>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotTool(); \
	friend struct Z_Construct_UClass_UEditPivotTool_Statics; \
public: \
	DECLARE_CLASS(UEditPivotTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UEditPivotTool) \
	virtual UObject* _getUObject() const override { return const_cast<UEditPivotTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_161_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditPivotTool(UEditPivotTool&&); \
	UEditPivotTool(const UEditPivotTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditPivotTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditPivotTool) \
	NO_API virtual ~UEditPivotTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_158_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UEditPivotTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h


#define FOREACH_ENUM_EEDITPIVOTSNAPDRAGROTATIONMODE(op) \
	op(EEditPivotSnapDragRotationMode::Align) \
	op(EEditPivotSnapDragRotationMode::AlignFlipped) \
	op(EEditPivotSnapDragRotationMode::LastValue) 

enum class EEditPivotSnapDragRotationMode : uint8;
template<> struct TIsUEnumClass<EEditPivotSnapDragRotationMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EEditPivotSnapDragRotationMode>();

#define FOREACH_ENUM_EEDITPIVOTTOOLACTIONS(op) \
	op(EEditPivotToolActions::NoAction) \
	op(EEditPivotToolActions::Center) \
	op(EEditPivotToolActions::Bottom) \
	op(EEditPivotToolActions::Top) \
	op(EEditPivotToolActions::Left) \
	op(EEditPivotToolActions::Right) \
	op(EEditPivotToolActions::Front) \
	op(EEditPivotToolActions::Back) \
	op(EEditPivotToolActions::WorldOrigin) 

enum class EEditPivotToolActions;
template<> struct TIsUEnumClass<EEditPivotToolActions> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EEditPivotToolActions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
