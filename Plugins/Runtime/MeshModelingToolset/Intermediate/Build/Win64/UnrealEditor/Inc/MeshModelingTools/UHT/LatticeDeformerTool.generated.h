// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LatticeDeformerTool.h"

#ifdef MESHMODELINGTOOLS_LatticeDeformerTool_generated_h
#error "LatticeDeformerTool.generated.h already included, missing '#pragma once' in LatticeDeformerTool.h"
#endif
#define MESHMODELINGTOOLS_LatticeDeformerTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULatticeDeformerToolBuilder **********************************************
struct Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatticeDeformerToolBuilder(); \
	friend struct ::Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeDeformerToolBuilder, UMultiTargetWithSelectionToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(ULatticeDeformerToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API ULatticeDeformerToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeDeformerToolBuilder(ULatticeDeformerToolBuilder&&) = delete; \
	ULatticeDeformerToolBuilder(const ULatticeDeformerToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, ULatticeDeformerToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeDeformerToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatticeDeformerToolBuilder) \
	MESHMODELINGTOOLS_API virtual ~ULatticeDeformerToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeDeformerToolBuilder;

// ********** End Class ULatticeDeformerToolBuilder ************************************************

// ********** Begin Class ULatticeDeformerToolProperties *******************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearConstraints); \
	DECLARE_FUNCTION(execConstrain);


struct Z_Construct_UClass_ULatticeDeformerToolProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatticeDeformerToolProperties(); \
	friend struct ::Z_Construct_UClass_ULatticeDeformerToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeDeformerToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister) \
	DECLARE_SERIALIZER(ULatticeDeformerToolProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API ULatticeDeformerToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeDeformerToolProperties(ULatticeDeformerToolProperties&&) = delete; \
	ULatticeDeformerToolProperties(const ULatticeDeformerToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, ULatticeDeformerToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeDeformerToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatticeDeformerToolProperties) \
	MESHMODELINGTOOLS_API virtual ~ULatticeDeformerToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_54_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeDeformerToolProperties;

// ********** End Class ULatticeDeformerToolProperties *********************************************

// ********** Begin Class ULatticeDeformerOperatorFactory ******************************************
struct Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatticeDeformerOperatorFactory(); \
	friend struct ::Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeDeformerOperatorFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister) \
	DECLARE_SERIALIZER(ULatticeDeformerOperatorFactory)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API ULatticeDeformerOperatorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeDeformerOperatorFactory(ULatticeDeformerOperatorFactory&&) = delete; \
	ULatticeDeformerOperatorFactory(const ULatticeDeformerOperatorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, ULatticeDeformerOperatorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeDeformerOperatorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatticeDeformerOperatorFactory) \
	MESHMODELINGTOOLS_API virtual ~ULatticeDeformerOperatorFactory();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_121_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeDeformerOperatorFactory;

// ********** End Class ULatticeDeformerOperatorFactory ********************************************

// ********** Begin Class ULatticeDeformerTool *****************************************************
struct Z_Construct_UClass_ULatticeDeformerTool_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_ULatticeDeformerTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_139_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatticeDeformerTool(); \
	friend struct ::Z_Construct_UClass_ULatticeDeformerTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_ULatticeDeformerTool_NoRegister(); \
public: \
	DECLARE_CLASS2(ULatticeDeformerTool, UMultiTargetWithSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_ULatticeDeformerTool_NoRegister) \
	DECLARE_SERIALIZER(ULatticeDeformerTool) \
	virtual UObject* _getUObject() const override { return const_cast<ULatticeDeformerTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_139_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API ULatticeDeformerTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULatticeDeformerTool(ULatticeDeformerTool&&) = delete; \
	ULatticeDeformerTool(const ULatticeDeformerTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, ULatticeDeformerTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatticeDeformerTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULatticeDeformerTool)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_136_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_139_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_139_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h_139_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULatticeDeformerTool;

// ********** End Class ULatticeDeformerTool *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_LatticeDeformerTool_h

// ********** Begin Enum ELatticeDeformerToolAction ************************************************
#define FOREACH_ENUM_ELATTICEDEFORMERTOOLACTION(op) \
	op(ELatticeDeformerToolAction::NoAction) \
	op(ELatticeDeformerToolAction::Constrain) \
	op(ELatticeDeformerToolAction::ClearConstraints) 

enum class ELatticeDeformerToolAction : uint8;
template<> struct TIsUEnumClass<ELatticeDeformerToolAction> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ELatticeDeformerToolAction>();
// ********** End Enum ELatticeDeformerToolAction **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
