// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditPivotTool.h"

#ifdef MESHMODELINGTOOLSEXP_EditPivotTool_generated_h
#error "EditPivotTool.generated.h already included, missing '#pragma once' in EditPivotTool.h"
#endif
#define MESHMODELINGTOOLSEXP_EditPivotTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditPivotToolBuilder ****************************************************
struct Z_Construct_UClass_UEditPivotToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolBuilder(); \
	friend struct ::Z_Construct_UClass_UEditPivotToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UEditPivotToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditPivotToolBuilder, UMultiSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UEditPivotToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UEditPivotToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UEditPivotToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditPivotToolBuilder(UEditPivotToolBuilder&&) = delete; \
	UEditPivotToolBuilder(const UEditPivotToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UEditPivotToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~UEditPivotToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_26_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditPivotToolBuilder;

// ********** End Class UEditPivotToolBuilder ******************************************************

// ********** Begin Class UEditPivotToolProperties *************************************************
struct Z_Construct_UClass_UEditPivotToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolProperties(); \
	friend struct ::Z_Construct_UClass_UEditPivotToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UEditPivotToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditPivotToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UEditPivotToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UEditPivotToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UEditPivotToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditPivotToolProperties(UEditPivotToolProperties&&) = delete; \
	UEditPivotToolProperties(const UEditPivotToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UEditPivotToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~UEditPivotToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditPivotToolProperties;

// ********** End Class UEditPivotToolProperties ***************************************************

// ********** Begin ScriptStruct FEditPivotTarget **************************************************
struct Z_Construct_UScriptStruct_FEditPivotTarget_Statics;
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEditPivotTarget_Statics; \
	MESHMODELINGTOOLSEXP_API static class UScriptStruct* StaticStruct();


struct FEditPivotTarget;
// ********** End ScriptStruct FEditPivotTarget ****************************************************

// ********** Begin Class UEditPivotToolActionPropertySet ******************************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWorldOrigin); \
	DECLARE_FUNCTION(execBack); \
	DECLARE_FUNCTION(execFront); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execLeft); \
	DECLARE_FUNCTION(execTop); \
	DECLARE_FUNCTION(execBottom); \
	DECLARE_FUNCTION(execCenter);


struct Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotToolActionPropertySet(); \
	friend struct ::Z_Construct_UClass_UEditPivotToolActionPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditPivotToolActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UEditPivotToolActionPropertySet_NoRegister) \
	DECLARE_SERIALIZER(UEditPivotToolActionPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API UEditPivotToolActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditPivotToolActionPropertySet(UEditPivotToolActionPropertySet&&) = delete; \
	UEditPivotToolActionPropertySet(const UEditPivotToolActionPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UEditPivotToolActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotToolActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditPivotToolActionPropertySet) \
	MESHMODELINGTOOLSEXP_API virtual ~UEditPivotToolActionPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_115_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditPivotToolActionPropertySet;

// ********** End Class UEditPivotToolActionPropertySet ********************************************

// ********** Begin Class UEditPivotTool ***********************************************************
struct Z_Construct_UClass_UEditPivotTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditPivotTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditPivotTool(); \
	friend struct ::Z_Construct_UClass_UEditPivotTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_UEditPivotTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditPivotTool, UMultiSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_UEditPivotTool_NoRegister) \
	DECLARE_SERIALIZER(UEditPivotTool) \
	virtual UObject* _getUObject() const override { return const_cast<UEditPivotTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_163_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditPivotTool(UEditPivotTool&&) = delete; \
	UEditPivotTool(const UEditPivotTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, UEditPivotTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditPivotTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditPivotTool) \
	MESHMODELINGTOOLSEXP_API virtual ~UEditPivotTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_160_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_163_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditPivotTool;

// ********** End Class UEditPivotTool *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditPivotTool_h

// ********** Begin Enum EEditPivotSnapDragRotationMode ********************************************
#define FOREACH_ENUM_EEDITPIVOTSNAPDRAGROTATIONMODE(op) \
	op(EEditPivotSnapDragRotationMode::Align) \
	op(EEditPivotSnapDragRotationMode::AlignFlipped) \
	op(EEditPivotSnapDragRotationMode::LastValue) 

enum class EEditPivotSnapDragRotationMode : uint8;
template<> struct TIsUEnumClass<EEditPivotSnapDragRotationMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditPivotSnapDragRotationMode>();
// ********** End Enum EEditPivotSnapDragRotationMode **********************************************

// ********** Begin Enum EEditPivotToolActions *****************************************************
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
template<> MESHMODELINGTOOLSEXP_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditPivotToolActions>();
// ********** End Enum EEditPivotToolActions *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
