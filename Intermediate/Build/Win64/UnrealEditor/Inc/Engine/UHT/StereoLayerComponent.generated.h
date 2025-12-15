// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StereoLayerComponent.h"

#ifdef ENGINE_StereoLayerComponent_generated_h
#error "StereoLayerComponent.generated.h already included, missing '#pragma once' in StereoLayerComponent.h"
#endif
#define ENGINE_StereoLayerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FEquirectProps;

// ********** Begin Class UEditorFlagCollector *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlagNames);


struct Z_Construct_UClass_UEditorFlagCollector_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEditorFlagCollector_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFlagCollector(); \
	friend struct ::Z_Construct_UClass_UEditorFlagCollector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEditorFlagCollector_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorFlagCollector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEditorFlagCollector_NoRegister) \
	DECLARE_SERIALIZER(UEditorFlagCollector)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFlagCollector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorFlagCollector(UEditorFlagCollector&&) = delete; \
	UEditorFlagCollector(const UEditorFlagCollector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFlagCollector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFlagCollector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFlagCollector) \
	NO_API virtual ~UEditorFlagCollector();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorFlagCollector;

// ********** End Class UEditorFlagCollector *******************************************************

// ********** Begin Class UStereoLayerShape ********************************************************
struct Z_Construct_UClass_UStereoLayerShape_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct ::Z_Construct_UClass_UStereoLayerShape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerShape_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerShape_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerShape(UStereoLayerShape&&) = delete; \
	UStereoLayerShape(const UStereoLayerShape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape) \
	ENGINE_API virtual ~UStereoLayerShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerShape;

// ********** End Class UStereoLayerShape **********************************************************

// ********** Begin Class UStereoLayerShapeQuad ****************************************************
struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeQuad_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct ::Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerShapeQuad_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerShapeQuad_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerShapeQuad(UStereoLayerShapeQuad&&) = delete; \
	UStereoLayerShapeQuad(const UStereoLayerShapeQuad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeQuad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad) \
	ENGINE_API virtual ~UStereoLayerShapeQuad();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerShapeQuad;

// ********** End Class UStereoLayerShapeQuad ******************************************************

// ********** Begin Class UStereoLayerShapeCylinder ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCylinder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct ::Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerShapeCylinder_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerShapeCylinder_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&) = delete; \
	UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder) \
	ENGINE_API virtual ~UStereoLayerShapeCylinder();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_84_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerShapeCylinder;

// ********** End Class UStereoLayerShapeCylinder **************************************************

// ********** Begin Class UStereoLayerShapeCubemap *************************************************
struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeCubemap_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct ::Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerShapeCubemap_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerShapeCubemap_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&) = delete; \
	UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeCubemap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap) \
	ENGINE_API virtual ~UStereoLayerShapeCubemap();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_121_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerShapeCubemap;

// ********** End Class UStereoLayerShapeCubemap ***************************************************

// ********** Begin ScriptStruct FEquirectProps ****************************************************
struct Z_Construct_UScriptStruct_FEquirectProps_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEquirectProps_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEquirectProps;
// ********** End ScriptStruct FEquirectProps ******************************************************

// ********** Begin Class UStereoLayerShapeEquirect ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEquirectProps);


struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShapeEquirect_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct ::Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerShapeEquirect_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerShapeEquirect_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&) = delete; \
	UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeEquirect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect) \
	ENGINE_API virtual ~UStereoLayerShapeEquirect();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_203_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerShapeEquirect;

// ********** End Class UStereoLayerShapeEquirect **************************************************

// ********** Begin Class UStereoLayerComponent ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


struct Z_Construct_UClass_UStereoLayerComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct ::Z_Construct_UClass_UStereoLayerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStereoLayerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStereoLayerComponent_NoRegister) \
	DECLARE_SERIALIZER(UStereoLayerComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoLayerComponent(UStereoLayerComponent&&) = delete; \
	UStereoLayerComponent(const UStereoLayerComponent&) = delete; \
	ENGINE_API virtual ~UStereoLayerComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_267_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_270_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoLayerComponent;

// ********** End Class UStereoLayerComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h

// ********** Begin Enum EStereoLayerType **********************************************************
#define FOREACH_ENUM_ESTEREOLAYERTYPE(op) \
	op(SLT_WorldLocked) \
	op(SLT_TrackerLocked) \
	op(SLT_FaceLocked) 

enum EStereoLayerType : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStereoLayerType>();
// ********** End Enum EStereoLayerType ************************************************************

// ********** Begin Enum EStereoLayerShape *********************************************************
#define FOREACH_ENUM_ESTEREOLAYERSHAPE(op) \
	op(SLSH_QuadLayer) \
	op(SLSH_CylinderLayer) \
	op(SLSH_CubemapLayer) \
	op(SLSH_EquirectLayer) 

enum EStereoLayerShape : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStereoLayerShape>();
// ********** End Enum EStereoLayerShape ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
