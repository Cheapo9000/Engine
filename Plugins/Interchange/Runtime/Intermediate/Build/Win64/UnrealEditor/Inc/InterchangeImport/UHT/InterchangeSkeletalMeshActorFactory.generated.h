// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeSkeletalMeshActorFactory.h"

#ifdef INTERCHANGEIMPORT_InterchangeSkeletalMeshActorFactory_generated_h
#error "InterchangeSkeletalMeshActorFactory.generated.h already included, missing '#pragma once' in InterchangeSkeletalMeshActorFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeSkeletalMeshActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSkeletalMeshActorFactory *************************************
struct Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics;
INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalMeshActorFactory(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEIMPORT_API UClass* ::Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkeletalMeshActorFactory, UInterchangeActorFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkeletalMeshActorFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeSkeletalMeshActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalMeshActorFactory(UInterchangeSkeletalMeshActorFactory&&) = delete; \
	UInterchangeSkeletalMeshActorFactory(const UInterchangeSkeletalMeshActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeSkeletalMeshActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalMeshActorFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSkeletalMeshActorFactory) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeSkeletalMeshActorFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkeletalMeshActorFactory;

// ********** End Class UInterchangeSkeletalMeshActorFactory ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
