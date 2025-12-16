// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/SimpleCollisionEditorTool.h"

#ifdef MESHMODELINGTOOLSEXP_SimpleCollisionEditorTool_generated_h
#error "SimpleCollisionEditorTool.generated.h already included, missing '#pragma once' in SimpleCollisionEditorTool.h"
#endif
#define MESHMODELINGTOOLSEXP_SimpleCollisionEditorTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USimpleCollisionEditorToolBuilder ****************************************
struct Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCollisionEditorToolBuilder(); \
	friend struct ::Z_Construct_UClass_USimpleCollisionEditorToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_USimpleCollisionEditorToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleCollisionEditorToolBuilder, USingleSelectionMeshEditingToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_USimpleCollisionEditorToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(USimpleCollisionEditorToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API USimpleCollisionEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleCollisionEditorToolBuilder(USimpleCollisionEditorToolBuilder&&) = delete; \
	USimpleCollisionEditorToolBuilder(const USimpleCollisionEditorToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, USimpleCollisionEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCollisionEditorToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCollisionEditorToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~USimpleCollisionEditorToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleCollisionEditorToolBuilder;

// ********** End Class USimpleCollisionEditorToolBuilder ******************************************

// ********** Begin Class USimpleCollisionEditorToolActionProperties *******************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddCapsule); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execDeleteAll); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execDuplicate);


struct Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCollisionEditorToolActionProperties(); \
	friend struct ::Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleCollisionEditorToolActionProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_USimpleCollisionEditorToolActionProperties_NoRegister) \
	DECLARE_SERIALIZER(USimpleCollisionEditorToolActionProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API USimpleCollisionEditorToolActionProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleCollisionEditorToolActionProperties(USimpleCollisionEditorToolActionProperties&&) = delete; \
	USimpleCollisionEditorToolActionProperties(const USimpleCollisionEditorToolActionProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, USimpleCollisionEditorToolActionProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCollisionEditorToolActionProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCollisionEditorToolActionProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~USimpleCollisionEditorToolActionProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleCollisionEditorToolActionProperties;

// ********** End Class USimpleCollisionEditorToolActionProperties *********************************

// ********** Begin Class USimpleCollisionEditorTool ***********************************************
struct Z_Construct_UClass_USimpleCollisionEditorTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USimpleCollisionEditorTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCollisionEditorTool(); \
	friend struct ::Z_Construct_UClass_USimpleCollisionEditorTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_USimpleCollisionEditorTool_NoRegister(); \
public: \
	DECLARE_CLASS2(USimpleCollisionEditorTool, USingleSelectionMeshEditingTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_USimpleCollisionEditorTool_NoRegister) \
	DECLARE_SERIALIZER(USimpleCollisionEditorTool) \
	virtual UObject* _getUObject() const override { return const_cast<USimpleCollisionEditorTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API USimpleCollisionEditorTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USimpleCollisionEditorTool(USimpleCollisionEditorTool&&) = delete; \
	USimpleCollisionEditorTool(const USimpleCollisionEditorTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, USimpleCollisionEditorTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCollisionEditorTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USimpleCollisionEditorTool) \
	MESHMODELINGTOOLSEXP_API virtual ~USimpleCollisionEditorTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_100_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_103_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USimpleCollisionEditorTool;

// ********** End Class USimpleCollisionEditorTool *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SimpleCollisionEditorTool_h

// ********** Begin Enum ESimpleCollisionEditorToolAction ******************************************
#define FOREACH_ENUM_ESIMPLECOLLISIONEDITORTOOLACTION(op) \
	op(ESimpleCollisionEditorToolAction::NoAction) \
	op(ESimpleCollisionEditorToolAction::AddSphere) \
	op(ESimpleCollisionEditorToolAction::AddBox) \
	op(ESimpleCollisionEditorToolAction::AddCapsule) \
	op(ESimpleCollisionEditorToolAction::Duplicate) \
	op(ESimpleCollisionEditorToolAction::DeleteSelected) \
	op(ESimpleCollisionEditorToolAction::DeleteAll) 

enum class ESimpleCollisionEditorToolAction : uint8;
template<> struct TIsUEnumClass<ESimpleCollisionEditorToolAction> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_NON_ATTRIBUTED_API UEnum* StaticEnum<ESimpleCollisionEditorToolAction>();
// ********** End Enum ESimpleCollisionEditorToolAction ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
