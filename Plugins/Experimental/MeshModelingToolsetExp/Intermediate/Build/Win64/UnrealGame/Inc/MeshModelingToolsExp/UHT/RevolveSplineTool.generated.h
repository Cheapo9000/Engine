// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RevolveSplineTool.h"

#ifdef MESHMODELINGTOOLSEXP_RevolveSplineTool_generated_h
#error "RevolveSplineTool.generated.h already included, missing '#pragma once' in RevolveSplineTool.h"
#endif
#define MESHMODELINGTOOLSEXP_RevolveSplineTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URevolveSplineToolProperties *********************************************
struct Z_Construct_UClass_URevolveSplineToolProperties_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolProperties_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolProperties(); \
	friend struct ::Z_Construct_UClass_URevolveSplineToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_URevolveSplineToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(URevolveSplineToolProperties, URevolveProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_URevolveSplineToolProperties_NoRegister) \
	DECLARE_SERIALIZER(URevolveSplineToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API URevolveSplineToolProperties(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevolveSplineToolProperties(URevolveSplineToolProperties&&) = delete; \
	URevolveSplineToolProperties(const URevolveSplineToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, URevolveSplineToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveSplineToolProperties) \
	MESHMODELINGTOOLSEXP_API virtual ~URevolveSplineToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevolveSplineToolProperties;

// ********** End Class URevolveSplineToolProperties ***********************************************

// ********** Begin Class URevolveSplineToolActionPropertySet **************************************
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAxis);


struct Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolActionPropertySet(); \
	friend struct ::Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister(); \
public: \
	DECLARE_CLASS2(URevolveSplineToolActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_URevolveSplineToolActionPropertySet_NoRegister) \
	DECLARE_SERIALIZER(URevolveSplineToolActionPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API URevolveSplineToolActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevolveSplineToolActionPropertySet(URevolveSplineToolActionPropertySet&&) = delete; \
	URevolveSplineToolActionPropertySet(const URevolveSplineToolActionPropertySet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, URevolveSplineToolActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevolveSplineToolActionPropertySet) \
	MESHMODELINGTOOLSEXP_API virtual ~URevolveSplineToolActionPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_96_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevolveSplineToolActionPropertySet;

// ********** End Class URevolveSplineToolActionPropertySet ****************************************

// ********** Begin Class URevolveSplineTool *******************************************************
struct Z_Construct_UClass_URevolveSplineTool_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineTool_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineTool(); \
	friend struct ::Z_Construct_UClass_URevolveSplineTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_URevolveSplineTool_NoRegister(); \
public: \
	DECLARE_CLASS2(URevolveSplineTool, UBaseMeshFromSplinesTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_URevolveSplineTool_NoRegister) \
	DECLARE_SERIALIZER(URevolveSplineTool)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API URevolveSplineTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevolveSplineTool(URevolveSplineTool&&) = delete; \
	URevolveSplineTool(const URevolveSplineTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, URevolveSplineTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveSplineTool) \
	MESHMODELINGTOOLSEXP_API virtual ~URevolveSplineTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevolveSplineTool;

// ********** End Class URevolveSplineTool *********************************************************

// ********** Begin Class URevolveSplineToolBuilder ************************************************
struct Z_Construct_UClass_URevolveSplineToolBuilder_Statics;
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveSplineToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolBuilder(); \
	friend struct ::Z_Construct_UClass_URevolveSplineToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEXP_API UClass* ::Z_Construct_UClass_URevolveSplineToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(URevolveSplineToolBuilder, UBaseMeshFromSplinesToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), Z_Construct_UClass_URevolveSplineToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(URevolveSplineToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEXP_API URevolveSplineToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URevolveSplineToolBuilder(URevolveSplineToolBuilder&&) = delete; \
	URevolveSplineToolBuilder(const URevolveSplineToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEXP_API, URevolveSplineToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevolveSplineToolBuilder) \
	MESHMODELINGTOOLSEXP_API virtual ~URevolveSplineToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_177_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URevolveSplineToolBuilder;

// ********** End Class URevolveSplineToolBuilder **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h

// ********** Begin Enum ERevolveSplineSampleMode **************************************************
#define FOREACH_ENUM_EREVOLVESPLINESAMPLEMODE(op) \
	op(ERevolveSplineSampleMode::ControlPointsOnly) \
	op(ERevolveSplineSampleMode::PolyLineMaxError) \
	op(ERevolveSplineSampleMode::UniformSpacingAlongCurve) 

enum class ERevolveSplineSampleMode : uint8;
template<> struct TIsUEnumClass<ERevolveSplineSampleMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_NON_ATTRIBUTED_API UEnum* StaticEnum<ERevolveSplineSampleMode>();
// ********** End Enum ERevolveSplineSampleMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
