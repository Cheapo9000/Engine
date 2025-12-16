// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/BoneGeometryGenerators.h"

#ifdef CHAOSRIGIDASSETNODES_BoneGeometryGenerators_generated_h
#error "BoneGeometryGenerators.generated.h already included, missing '#pragma once' in BoneGeometryGenerators.h"
#endif
#define CHAOSRIGIDASSETNODES_BoneGeometryGenerators_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBaseGenerationSettings *******************************************
struct Z_Construct_UScriptStruct_FBaseGenerationSettings_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBaseGenerationSettings_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct();


struct FBaseGenerationSettings;
// ********** End ScriptStruct FBaseGenerationSettings *********************************************

// ********** Begin Class UBoneGeometryGenerator ***************************************************
struct Z_Construct_UClass_UBoneGeometryGenerator_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UBoneGeometryGenerator_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneGeometryGenerator(); \
	friend struct ::Z_Construct_UClass_UBoneGeometryGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UBoneGeometryGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneGeometryGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UBoneGeometryGenerator_NoRegister) \
	DECLARE_SERIALIZER(UBoneGeometryGenerator)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneGeometryGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneGeometryGenerator(UBoneGeometryGenerator&&) = delete; \
	UBoneGeometryGenerator(const UBoneGeometryGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneGeometryGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneGeometryGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneGeometryGenerator) \
	NO_API virtual ~UBoneGeometryGenerator();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_96_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneGeometryGenerator;

// ********** End Class UBoneGeometryGenerator *****************************************************

// ********** Begin Class UBoneGeometryGenerator_Box ***********************************************
struct Z_Construct_UClass_UBoneGeometryGenerator_Box_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UBoneGeometryGenerator_Box_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneGeometryGenerator_Box(); \
	friend struct ::Z_Construct_UClass_UBoneGeometryGenerator_Box_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UBoneGeometryGenerator_Box_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneGeometryGenerator_Box, UBoneGeometryGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UBoneGeometryGenerator_Box_NoRegister) \
	DECLARE_SERIALIZER(UBoneGeometryGenerator_Box)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneGeometryGenerator_Box(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneGeometryGenerator_Box(UBoneGeometryGenerator_Box&&) = delete; \
	UBoneGeometryGenerator_Box(const UBoneGeometryGenerator_Box&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneGeometryGenerator_Box); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneGeometryGenerator_Box); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneGeometryGenerator_Box) \
	NO_API virtual ~UBoneGeometryGenerator_Box();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_127_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneGeometryGenerator_Box;

// ********** End Class UBoneGeometryGenerator_Box *************************************************

// ********** Begin Class UBoneGeometryGenerator_Sphere ********************************************
struct Z_Construct_UClass_UBoneGeometryGenerator_Sphere_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UBoneGeometryGenerator_Sphere_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneGeometryGenerator_Sphere(); \
	friend struct ::Z_Construct_UClass_UBoneGeometryGenerator_Sphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UBoneGeometryGenerator_Sphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneGeometryGenerator_Sphere, UBoneGeometryGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UBoneGeometryGenerator_Sphere_NoRegister) \
	DECLARE_SERIALIZER(UBoneGeometryGenerator_Sphere)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneGeometryGenerator_Sphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneGeometryGenerator_Sphere(UBoneGeometryGenerator_Sphere&&) = delete; \
	UBoneGeometryGenerator_Sphere(const UBoneGeometryGenerator_Sphere&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneGeometryGenerator_Sphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneGeometryGenerator_Sphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneGeometryGenerator_Sphere) \
	NO_API virtual ~UBoneGeometryGenerator_Sphere();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_145_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneGeometryGenerator_Sphere;

// ********** End Class UBoneGeometryGenerator_Sphere **********************************************

// ********** Begin Class UBoneGeometryGenerator_Capsule *******************************************
struct Z_Construct_UClass_UBoneGeometryGenerator_Capsule_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UBoneGeometryGenerator_Capsule_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneGeometryGenerator_Capsule(); \
	friend struct ::Z_Construct_UClass_UBoneGeometryGenerator_Capsule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UBoneGeometryGenerator_Capsule_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneGeometryGenerator_Capsule, UBoneGeometryGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UBoneGeometryGenerator_Capsule_NoRegister) \
	DECLARE_SERIALIZER(UBoneGeometryGenerator_Capsule)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneGeometryGenerator_Capsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneGeometryGenerator_Capsule(UBoneGeometryGenerator_Capsule&&) = delete; \
	UBoneGeometryGenerator_Capsule(const UBoneGeometryGenerator_Capsule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneGeometryGenerator_Capsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneGeometryGenerator_Capsule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneGeometryGenerator_Capsule) \
	NO_API virtual ~UBoneGeometryGenerator_Capsule();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_180_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_183_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_183_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneGeometryGenerator_Capsule;

// ********** End Class UBoneGeometryGenerator_Capsule *********************************************

// ********** Begin Class UBoneGeometryGenerator_Convex ********************************************
struct Z_Construct_UClass_UBoneGeometryGenerator_Convex_Statics;
CHAOSRIGIDASSETNODES_API UClass* Z_Construct_UClass_UBoneGeometryGenerator_Convex_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoneGeometryGenerator_Convex(); \
	friend struct ::Z_Construct_UClass_UBoneGeometryGenerator_Convex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHAOSRIGIDASSETNODES_API UClass* ::Z_Construct_UClass_UBoneGeometryGenerator_Convex_NoRegister(); \
public: \
	DECLARE_CLASS2(UBoneGeometryGenerator_Convex, UBoneGeometryGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosRigidAssetNodes"), Z_Construct_UClass_UBoneGeometryGenerator_Convex_NoRegister) \
	DECLARE_SERIALIZER(UBoneGeometryGenerator_Convex)


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoneGeometryGenerator_Convex(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBoneGeometryGenerator_Convex(UBoneGeometryGenerator_Convex&&) = delete; \
	UBoneGeometryGenerator_Convex(const UBoneGeometryGenerator_Convex&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoneGeometryGenerator_Convex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoneGeometryGenerator_Convex); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoneGeometryGenerator_Convex) \
	NO_API virtual ~UBoneGeometryGenerator_Convex();


#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_215_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_218_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBoneGeometryGenerator_Convex;

// ********** End Class UBoneGeometryGenerator_Convex **********************************************

// ********** Begin ScriptStruct FMakeBoxBoneGeometryGenerator *************************************
struct Z_Construct_UScriptStruct_FMakeBoxBoneGeometryGenerator_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_235_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeBoxBoneGeometryGenerator_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FRigidDataflowNode Super;


struct FMakeBoxBoneGeometryGenerator;
// ********** End ScriptStruct FMakeBoxBoneGeometryGenerator ***************************************

// ********** Begin ScriptStruct FMakeSphereBoneGeometryGenerator **********************************
struct Z_Construct_UScriptStruct_FMakeSphereBoneGeometryGenerator_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeSphereBoneGeometryGenerator_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FRigidDataflowNode Super;


struct FMakeSphereBoneGeometryGenerator;
// ********** End ScriptStruct FMakeSphereBoneGeometryGenerator ************************************

// ********** Begin ScriptStruct FMakeCapsuleBoneGeometryGenerator *********************************
struct Z_Construct_UScriptStruct_FMakeCapsuleBoneGeometryGenerator_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_285_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeCapsuleBoneGeometryGenerator_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FRigidDataflowNode Super;


struct FMakeCapsuleBoneGeometryGenerator;
// ********** End ScriptStruct FMakeCapsuleBoneGeometryGenerator ***********************************

// ********** Begin ScriptStruct FMakeConvexBoneGeometryGenerator **********************************
struct Z_Construct_UScriptStruct_FMakeConvexBoneGeometryGenerator_Statics;
#define FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h_310_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMakeConvexBoneGeometryGenerator_Statics; \
	CHAOSRIGIDASSETNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FRigidDataflowNode Super;


struct FMakeConvexBoneGeometryGenerator;
// ********** End ScriptStruct FMakeConvexBoneGeometryGenerator ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosRigidAsset_Source_ChaosRigidAssetNodes_Private_Generators_BoneGeometryGenerators_h

// ********** Begin Enum ESmallBoneOperation *******************************************************
#define FOREACH_ENUM_ESMALLBONEOPERATION(op) \
	op(ESmallBoneOperation::Skip) \
	op(ESmallBoneOperation::Merge) 

enum class ESmallBoneOperation;
template<> struct TIsUEnumClass<ESmallBoneOperation> { enum { Value = true }; };
template<> CHAOSRIGIDASSETNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<ESmallBoneOperation>();
// ********** End Enum ESmallBoneOperation *********************************************************

// ********** Begin Enum EVertexSelectMode *********************************************************
#define FOREACH_ENUM_EVERTEXSELECTMODE(op) \
	op(EVertexSelectMode::Any) \
	op(EVertexSelectMode::DominantOnly) 

enum class EVertexSelectMode;
template<> struct TIsUEnumClass<EVertexSelectMode> { enum { Value = true }; };
template<> CHAOSRIGIDASSETNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVertexSelectMode>();
// ********** End Enum EVertexSelectMode ***********************************************************

// ********** Begin Enum EBodyAlignment ************************************************************
#define FOREACH_ENUM_EBODYALIGNMENT(op) \
	op(EBodyAlignment::Bone) \
	op(EBodyAlignment::Verts) 

enum class EBodyAlignment;
template<> struct TIsUEnumClass<EBodyAlignment> { enum { Value = true }; };
template<> CHAOSRIGIDASSETNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EBodyAlignment>();
// ********** End Enum EBodyAlignment **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
