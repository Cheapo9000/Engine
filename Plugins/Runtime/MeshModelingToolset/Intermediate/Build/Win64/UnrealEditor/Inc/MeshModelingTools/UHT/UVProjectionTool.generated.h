// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVProjectionTool.h"

#ifdef MESHMODELINGTOOLS_UVProjectionTool_generated_h
#error "UVProjectionTool.generated.h already included, missing '#pragma once' in UVProjectionTool.h"
#endif
#define MESHMODELINGTOOLS_UVProjectionTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVProjectionToolBuilder *************************************************
struct Z_Construct_UClass_UUVProjectionToolBuilder_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVProjectionToolBuilder(); \
	friend struct ::Z_Construct_UClass_UUVProjectionToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVProjectionToolBuilder, USingleTargetWithSelectionToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVProjectionToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UUVProjectionToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVProjectionToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVProjectionToolBuilder(UUVProjectionToolBuilder&&) = delete; \
	UUVProjectionToolBuilder(const UUVProjectionToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVProjectionToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVProjectionToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVProjectionToolBuilder) \
	MESHMODELINGTOOLS_API virtual ~UUVProjectionToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_32_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVProjectionToolBuilder;

// ********** End Class UUVProjectionToolBuilder ***************************************************

// ********** Begin Class UUVProjectionToolEditActions *********************************************
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execAutoFitAlign); \
	DECLARE_FUNCTION(execAutoFit);


struct Z_Construct_UClass_UUVProjectionToolEditActions_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVProjectionToolEditActions(); \
	friend struct ::Z_Construct_UClass_UUVProjectionToolEditActions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVProjectionToolEditActions, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVProjectionToolEditActions_NoRegister) \
	DECLARE_SERIALIZER(UUVProjectionToolEditActions)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVProjectionToolEditActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVProjectionToolEditActions(UUVProjectionToolEditActions&&) = delete; \
	UUVProjectionToolEditActions(const UUVProjectionToolEditActions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVProjectionToolEditActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVProjectionToolEditActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVProjectionToolEditActions) \
	MESHMODELINGTOOLS_API virtual ~UUVProjectionToolEditActions();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_54_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVProjectionToolEditActions;

// ********** End Class UUVProjectionToolEditActions ***********************************************

// ********** Begin Class UUVProjectionToolProperties **********************************************
struct Z_Construct_UClass_UUVProjectionToolProperties_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionToolProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVProjectionToolProperties(); \
	friend struct ::Z_Construct_UClass_UUVProjectionToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVProjectionToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVProjectionToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVProjectionToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVProjectionToolProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVProjectionToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVProjectionToolProperties(UUVProjectionToolProperties&&) = delete; \
	UUVProjectionToolProperties(const UUVProjectionToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVProjectionToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVProjectionToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVProjectionToolProperties) \
	MESHMODELINGTOOLS_API virtual ~UUVProjectionToolProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_105_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVProjectionToolProperties;

// ********** End Class UUVProjectionToolProperties ************************************************

// ********** Begin Class UUVProjectionOperatorFactory *********************************************
struct Z_Construct_UClass_UUVProjectionOperatorFactory_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVProjectionOperatorFactory(); \
	friend struct ::Z_Construct_UClass_UUVProjectionOperatorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVProjectionOperatorFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVProjectionOperatorFactory_NoRegister) \
	DECLARE_SERIALIZER(UUVProjectionOperatorFactory)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVProjectionOperatorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVProjectionOperatorFactory(UUVProjectionOperatorFactory&&) = delete; \
	UUVProjectionOperatorFactory(const UUVProjectionOperatorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVProjectionOperatorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVProjectionOperatorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVProjectionOperatorFactory) \
	MESHMODELINGTOOLS_API virtual ~UUVProjectionOperatorFactory();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_190_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVProjectionOperatorFactory;

// ********** End Class UUVProjectionOperatorFactory ***********************************************

// ********** Begin Class UUVProjectionTool ********************************************************
struct Z_Construct_UClass_UUVProjectionTool_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UUVProjectionTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVProjectionTool(); \
	friend struct ::Z_Construct_UClass_UUVProjectionTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UUVProjectionTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVProjectionTool, USingleTargetWithSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UUVProjectionTool_NoRegister) \
	DECLARE_SERIALIZER(UUVProjectionTool)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_209_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UUVProjectionTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVProjectionTool(UUVProjectionTool&&) = delete; \
	UUVProjectionTool(const UUVProjectionTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UUVProjectionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVProjectionTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVProjectionTool) \
	MESHMODELINGTOOLS_API virtual ~UUVProjectionTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_206_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_209_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h_209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVProjectionTool;

// ********** End Class UUVProjectionTool **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_UVProjectionTool_h

// ********** Begin Enum EUVProjectionToolActions **************************************************
#define FOREACH_ENUM_EUVPROJECTIONTOOLACTIONS(op) \
	op(EUVProjectionToolActions::NoAction) \
	op(EUVProjectionToolActions::AutoFit) \
	op(EUVProjectionToolActions::AutoFitAlign) \
	op(EUVProjectionToolActions::Reset) 

enum class EUVProjectionToolActions;
template<> struct TIsUEnumClass<EUVProjectionToolActions> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVProjectionToolActions>();
// ********** End Enum EUVProjectionToolActions ****************************************************

// ********** Begin Enum EUVProjectionToolInitializationMode ***************************************
#define FOREACH_ENUM_EUVPROJECTIONTOOLINITIALIZATIONMODE(op) \
	op(EUVProjectionToolInitializationMode::Default) \
	op(EUVProjectionToolInitializationMode::UsePrevious) \
	op(EUVProjectionToolInitializationMode::AutoFit) \
	op(EUVProjectionToolInitializationMode::AutoFitAlign) 

enum class EUVProjectionToolInitializationMode;
template<> struct TIsUEnumClass<EUVProjectionToolInitializationMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVProjectionToolInitializationMode>();
// ********** End Enum EUVProjectionToolInitializationMode *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
