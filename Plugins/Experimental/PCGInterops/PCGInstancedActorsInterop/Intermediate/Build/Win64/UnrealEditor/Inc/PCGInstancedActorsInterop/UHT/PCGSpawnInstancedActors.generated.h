// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSpawnInstancedActors.h"

#ifdef PCGINSTANCEDACTORSINTEROP_PCGSpawnInstancedActors_generated_h
#error "PCGSpawnInstancedActors.generated.h already included, missing '#pragma once' in PCGSpawnInstancedActors.h"
#endif
#define PCGINSTANCEDACTORSINTEROP_PCGSpawnInstancedActors_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSpawnInstancedActorsSettings *****************************************
struct Z_Construct_UClass_UPCGSpawnInstancedActorsSettings_Statics;
PCGINSTANCEDACTORSINTEROP_API UClass* Z_Construct_UClass_UPCGSpawnInstancedActorsSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSpawnInstancedActorsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSpawnInstancedActorsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGINSTANCEDACTORSINTEROP_API UClass* ::Z_Construct_UClass_UPCGSpawnInstancedActorsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSpawnInstancedActorsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGInstancedActorsInterop"), Z_Construct_UClass_UPCGSpawnInstancedActorsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSpawnInstancedActorsSettings)


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCGINSTANCEDACTORSINTEROP_API UPCGSpawnInstancedActorsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSpawnInstancedActorsSettings(UPCGSpawnInstancedActorsSettings&&) = delete; \
	UPCGSpawnInstancedActorsSettings(const UPCGSpawnInstancedActorsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCGINSTANCEDACTORSINTEROP_API, UPCGSpawnInstancedActorsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSpawnInstancedActorsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSpawnInstancedActorsSettings) \
	PCGINSTANCEDACTORSINTEROP_API virtual ~UPCGSpawnInstancedActorsSettings();


#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSpawnInstancedActorsSettings;

// ********** End Class UPCGSpawnInstancedActorsSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCGInterops_PCGInstancedActorsInterop_Source_PCGInstancedActorsInterop_Public_Elements_PCGSpawnInstancedActors_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
