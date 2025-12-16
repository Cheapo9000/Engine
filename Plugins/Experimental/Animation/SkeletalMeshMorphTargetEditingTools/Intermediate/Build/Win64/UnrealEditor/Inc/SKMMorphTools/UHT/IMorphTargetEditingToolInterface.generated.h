// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMorphTargetEditingToolInterface.h"

#ifdef SKELETALMESHMORPHTARGETEDITINGTOOLS_IMorphTargetEditingToolInterface_generated_h
#error "IMorphTargetEditingToolInterface.generated.h already included, missing '#pragma once' in IMorphTargetEditingToolInterface.h"
#endif
#define SKELETALMESHMORPHTARGETEDITINGTOOLS_IMorphTargetEditingToolInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMorphTargetEditingToolInterface *************************************
struct Z_Construct_UClass_UMorphTargetEditingToolInterface_Statics;
SKELETALMESHMORPHTARGETEDITINGTOOLS_API UClass* Z_Construct_UClass_UMorphTargetEditingToolInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMORPHTARGETEDITINGTOOLS_API UMorphTargetEditingToolInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMorphTargetEditingToolInterface(UMorphTargetEditingToolInterface&&) = delete; \
	UMorphTargetEditingToolInterface(const UMorphTargetEditingToolInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMORPHTARGETEDITINGTOOLS_API, UMorphTargetEditingToolInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMorphTargetEditingToolInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMorphTargetEditingToolInterface) \
	virtual ~UMorphTargetEditingToolInterface() = default;


#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMorphTargetEditingToolInterface(); \
	friend struct ::Z_Construct_UClass_UMorphTargetEditingToolInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMORPHTARGETEDITINGTOOLS_API UClass* ::Z_Construct_UClass_UMorphTargetEditingToolInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMorphTargetEditingToolInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkeletalMeshMorphTargetEditingTools"), Z_Construct_UClass_UMorphTargetEditingToolInterface_NoRegister) \
	DECLARE_SERIALIZER(UMorphTargetEditingToolInterface)


#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMorphTargetEditingToolInterface() {} \
public: \
	typedef UMorphTargetEditingToolInterface UClassType; \
	typedef IMorphTargetEditingToolInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMorphTargetEditingToolInterface;

// ********** End Interface UMorphTargetEditingToolInterface ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_SkeletalMeshMorphTargetEditingTools_Source_SkeletalMeshMorphTargetEditingTools_Public_IMorphTargetEditingToolInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
