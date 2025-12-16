// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleComponent.h"

#ifdef APEXDESTRUCTION_DestructibleComponent_generated_h
#error "DestructibleComponent.generated.h already included, missing '#pragma once' in DestructibleComponent.h"
#endif
#define APEXDESTRUCTION_DestructibleComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDestructibleMesh;

// ********** Begin Delegate FComponentFractureSignature *******************************************
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_21_DELEGATE \
APEXDESTRUCTION_API void FComponentFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentFractureSignature, FVector const& HitPoint, FVector const& HitDirection);


// ********** End Delegate FComponentFractureSignature *********************************************

// ********** Begin Class UDestructibleComponent ***************************************************
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDestructibleMesh); \
	DECLARE_FUNCTION(execSetDestructibleMesh); \
	DECLARE_FUNCTION(execApplyRadiusDamage); \
	DECLARE_FUNCTION(execApplyDamage);


#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleComponent, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UDestructibleComponent_Statics;
APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDestructibleComponent(); \
	friend struct ::Z_Construct_UClass_UDestructibleComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend APEXDESTRUCTION_API UClass* ::Z_Construct_UClass_UDestructibleComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UDestructibleComponent, USkinnedMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), Z_Construct_UClass_UDestructibleComponent_NoRegister) \
	DECLARE_SERIALIZER(UDestructibleComponent) \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UDestructibleComponent*>(this); }


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDestructibleComponent(UDestructibleComponent&&) = delete; \
	UDestructibleComponent(const UDestructibleComponent&) = delete; \
	NO_API virtual ~UDestructibleComponent();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDestructibleComponent;

// ********** End Class UDestructibleComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
