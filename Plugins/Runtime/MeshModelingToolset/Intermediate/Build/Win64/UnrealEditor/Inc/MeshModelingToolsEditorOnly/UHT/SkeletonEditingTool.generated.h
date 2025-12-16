// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletalMesh/SkeletonEditingTool.h"

#ifdef MESHMODELINGTOOLSEDITORONLY_SkeletonEditingTool_generated_h
#error "SkeletonEditingTool.generated.h already included, missing '#pragma once' in SkeletonEditingTool.h"
#endif
#define MESHMODELINGTOOLSEDITORONLY_SkeletonEditingTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USkeletonEditingToolBuilder **********************************************
struct Z_Construct_UClass_USkeletonEditingToolBuilder_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletonEditingToolBuilder_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonEditingToolBuilder(); \
	friend struct ::Z_Construct_UClass_USkeletonEditingToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletonEditingToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonEditingToolBuilder, UInteractiveToolWithToolTargetsBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletonEditingToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(USkeletonEditingToolBuilder)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletonEditingToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonEditingToolBuilder(USkeletonEditingToolBuilder&&) = delete; \
	USkeletonEditingToolBuilder(const USkeletonEditingToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletonEditingToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonEditingToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonEditingToolBuilder) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletonEditingToolBuilder();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonEditingToolBuilder;

// ********** End Class USkeletonEditingToolBuilder ************************************************

// ********** Begin Class USkeletonEditingTool *****************************************************
struct Z_Construct_UClass_USkeletonEditingTool_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletonEditingTool_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonEditingTool(); \
	friend struct ::Z_Construct_UClass_USkeletonEditingTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletonEditingTool_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonEditingTool, USingleSelectionTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletonEditingTool_NoRegister) \
	DECLARE_SERIALIZER(USkeletonEditingTool) \
	virtual UObject* _getUObject() const override { return const_cast<USkeletonEditingTool*>(this); }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletonEditingTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonEditingTool(USkeletonEditingTool&&) = delete; \
	USkeletonEditingTool(const USkeletonEditingTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletonEditingTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonEditingTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletonEditingTool) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletonEditingTool();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_102_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonEditingTool;

// ********** End Class USkeletonEditingTool *******************************************************

// ********** Begin Class USkeletonEditingProperties ***********************************************
struct Z_Construct_UClass_USkeletonEditingProperties_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_USkeletonEditingProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_313_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletonEditingProperties(); \
	friend struct ::Z_Construct_UClass_USkeletonEditingProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_USkeletonEditingProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletonEditingProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_USkeletonEditingProperties_NoRegister) \
	DECLARE_SERIALIZER(USkeletonEditingProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_313_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API USkeletonEditingProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletonEditingProperties(USkeletonEditingProperties&&) = delete; \
	USkeletonEditingProperties(const USkeletonEditingProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, USkeletonEditingProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletonEditingProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletonEditingProperties) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~USkeletonEditingProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_310_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_313_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_313_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_313_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletonEditingProperties;

// ********** End Class USkeletonEditingProperties *************************************************

// ********** Begin Class UProjectionProperties ****************************************************
struct Z_Construct_UClass_UProjectionProperties_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UProjectionProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_361_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectionProperties(); \
	friend struct ::Z_Construct_UClass_UProjectionProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UProjectionProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectionProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UProjectionProperties_NoRegister) \
	DECLARE_SERIALIZER(UProjectionProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_361_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UProjectionProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectionProperties(UProjectionProperties&&) = delete; \
	UProjectionProperties(const UProjectionProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UProjectionProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectionProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectionProperties) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UProjectionProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_358_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_361_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_361_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_361_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectionProperties;

// ********** End Class UProjectionProperties ******************************************************

// ********** Begin Class UMirroringProperties *****************************************************
struct Z_Construct_UClass_UMirroringProperties_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UMirroringProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_393_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirroringProperties(); \
	friend struct ::Z_Construct_UClass_UMirroringProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UMirroringProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UMirroringProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UMirroringProperties_NoRegister) \
	DECLARE_SERIALIZER(UMirroringProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_393_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UMirroringProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMirroringProperties(UMirroringProperties&&) = delete; \
	UMirroringProperties(const UMirroringProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UMirroringProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirroringProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMirroringProperties) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UMirroringProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_390_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_393_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_393_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_393_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMirroringProperties;

// ********** End Class UMirroringProperties *******************************************************

// ********** Begin Class UOrientingProperties *****************************************************
struct Z_Construct_UClass_UOrientingProperties_Statics;
MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UOrientingProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_413_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrientingProperties(); \
	friend struct ::Z_Construct_UClass_UOrientingProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLSEDITORONLY_API UClass* ::Z_Construct_UClass_UOrientingProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrientingProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsEditorOnly"), Z_Construct_UClass_UOrientingProperties_NoRegister) \
	DECLARE_SERIALIZER(UOrientingProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_413_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLSEDITORONLY_API UOrientingProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrientingProperties(UOrientingProperties&&) = delete; \
	UOrientingProperties(const UOrientingProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLSEDITORONLY_API, UOrientingProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrientingProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOrientingProperties) \
	MESHMODELINGTOOLSEDITORONLY_API virtual ~UOrientingProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_410_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_413_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_413_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h_413_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrientingProperties;

// ********** End Class UOrientingProperties *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_SkeletalMesh_SkeletonEditingTool_h

// ********** Begin Enum EEditingOperation *********************************************************
#define FOREACH_ENUM_EEDITINGOPERATION(op) \
	op(EEditingOperation::Select) \
	op(EEditingOperation::Create) \
	op(EEditingOperation::Remove) \
	op(EEditingOperation::Transform) \
	op(EEditingOperation::Parent) \
	op(EEditingOperation::Rename) \
	op(EEditingOperation::Mirror) 

enum class EEditingOperation : uint8;
template<> struct TIsUEnumClass<EEditingOperation> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditingOperation>();
// ********** End Enum EEditingOperation ***********************************************************

// ********** Begin Enum EProjectionType ***********************************************************
#define FOREACH_ENUM_EPROJECTIONTYPE(op) \
	op(EProjectionType::CameraPlane) \
	op(EProjectionType::OnMesh) \
	op(EProjectionType::WithinMesh) 

enum class EProjectionType : uint8;
template<> struct TIsUEnumClass<EProjectionType> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEDITORONLY_NON_ATTRIBUTED_API UEnum* StaticEnum<EProjectionType>();
// ********** End Enum EProjectionType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
