// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/ISKMBackedDynaMeshComponentProvider.h"

#ifdef SKELETALMESHMODELINGTOOLS_ISKMBackedDynaMeshComponentProvider_generated_h
#error "ISKMBackedDynaMeshComponentProvider.generated.h already included, missing '#pragma once' in ISKMBackedDynaMeshComponentProvider.h"
#endif
#define SKELETALMESHMODELINGTOOLS_ISKMBackedDynaMeshComponentProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USkeletalMeshBackedDynamicMeshComponentProvider **********************
struct Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponentProvider_Statics;
SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponentProvider_NoRegister();

#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SKELETALMESHMODELINGTOOLS_API USkeletalMeshBackedDynamicMeshComponentProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkeletalMeshBackedDynamicMeshComponentProvider(USkeletalMeshBackedDynamicMeshComponentProvider&&) = delete; \
	USkeletalMeshBackedDynamicMeshComponentProvider(const USkeletalMeshBackedDynamicMeshComponentProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SKELETALMESHMODELINGTOOLS_API, USkeletalMeshBackedDynamicMeshComponentProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshBackedDynamicMeshComponentProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshBackedDynamicMeshComponentProvider) \
	virtual ~USkeletalMeshBackedDynamicMeshComponentProvider() = default;


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkeletalMeshBackedDynamicMeshComponentProvider(); \
	friend struct ::Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponentProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SKELETALMESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponentProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(USkeletalMeshBackedDynamicMeshComponentProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SkeletalMeshModelingTools"), Z_Construct_UClass_USkeletalMeshBackedDynamicMeshComponentProvider_NoRegister) \
	DECLARE_SERIALIZER(USkeletalMeshBackedDynamicMeshComponentProvider)


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkeletalMeshBackedDynamicMeshComponentProvider() {} \
public: \
	typedef USkeletalMeshBackedDynamicMeshComponentProvider UClassType; \
	typedef ISkeletalMeshBackedDynamicMeshComponentProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_11_PROLOG
#define FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkeletalMeshBackedDynamicMeshComponentProvider;

// ********** End Interface USkeletalMeshBackedDynamicMeshComponentProvider ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_Interfaces_ISKMBackedDynaMeshComponentProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
