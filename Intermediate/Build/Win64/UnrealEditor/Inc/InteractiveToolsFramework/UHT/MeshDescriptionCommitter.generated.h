// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/MeshDescriptionCommitter.h"

#ifdef INTERACTIVETOOLSFRAMEWORK_MeshDescriptionCommitter_generated_h
#error "MeshDescriptionCommitter.generated.h already included, missing '#pragma once' in MeshDescriptionCommitter.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MeshDescriptionCommitter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMeshDescriptionCommitter ********************************************
struct Z_Construct_UClass_UMeshDescriptionCommitter_Statics;
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UMeshDescriptionCommitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDescriptionCommitter(UMeshDescriptionCommitter&&) = delete; \
	UMeshDescriptionCommitter(const UMeshDescriptionCommitter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UMeshDescriptionCommitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionCommitter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshDescriptionCommitter) \
	virtual ~UMeshDescriptionCommitter() = default;


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeshDescriptionCommitter(); \
	friend struct ::Z_Construct_UClass_UMeshDescriptionCommitter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIVETOOLSFRAMEWORK_API UClass* ::Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDescriptionCommitter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister) \
	DECLARE_SERIALIZER(UMeshDescriptionCommitter)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeshDescriptionCommitter() {} \
public: \
	typedef UMeshDescriptionCommitter UClassType; \
	typedef IMeshDescriptionCommitter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_13_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDescriptionCommitter;

// ********** End Interface UMeshDescriptionCommitter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
