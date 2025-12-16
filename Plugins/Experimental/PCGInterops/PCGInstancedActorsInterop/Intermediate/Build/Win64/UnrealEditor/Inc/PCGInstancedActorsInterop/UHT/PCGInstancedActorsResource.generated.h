// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGInstancedActorsResource.h"

#ifdef PCGINSTANCEDACTORSINTEROP_PCGInstancedActorsResource_generated_h
#error "PCGInstancedActorsResource.generated.h already included, missing '#pragma once' in PCGInstancedActorsResource.h"
#endif
#define PCGINSTANCEDACTORSINTEROP_PCGInstancedActorsResource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGInstancedActorsManagedResource ***************************************
struct Z_Construct_UClass_UPCGInstancedActorsManagedResource_Statics;
PCGINSTANCEDACTORSINTEROP_API UClass* Z_Construct_UClass_UPCGInstancedActorsManagedResource_NoRegister();

#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstancedActorsManagedResource(); \
	friend struct ::Z_Construct_UClass_UPCGInstancedActorsManagedResource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGINSTANCEDACTORSINTEROP_API UClass* ::Z_Construct_UClass_UPCGInstancedActorsManagedResource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstancedActorsManagedResource, UPCGManagedResource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGInstancedActorsInterop"), Z_Construct_UClass_UPCGInstancedActorsManagedResource_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstancedActorsManagedResource)


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGINSTANCEDACTORSINTEROP_API UPCGInstancedActorsManagedResource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstancedActorsManagedResource(UPCGInstancedActorsManagedResource&&) = delete; \
	UPCGInstancedActorsManagedResource(const UPCGInstancedActorsManagedResource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGINSTANCEDACTORSINTEROP_API, UPCGInstancedActorsManagedResource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstancedActorsManagedResource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstancedActorsManagedResource) \
	PCGINSTANCEDACTORSINTEROP_API virtual ~UPCGInstancedActorsManagedResource();


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstancedActorsManagedResource;

// ********** End Class UPCGInstancedActorsManagedResource *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_PCGInstancedActorsResource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
