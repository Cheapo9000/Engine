// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/PCGPartitionActor.h"

#ifdef PCG_PCGPartitionActor_generated_h
#error "PCGPartitionActor.generated.h already included, missing '#pragma once' in PCGPartitionActor.h"
#endif
#define PCG_PCGPartitionActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPCGComponent;

// ********** Begin Class APCGPartitionActor *******************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOriginalComponent); \
	DECLARE_FUNCTION(execGetLocalComponent); \
	DECLARE_FUNCTION(execBP_GetPCGGridSize);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APCGPartitionActor, PCG_API)


struct Z_Construct_UClass_APCGPartitionActor_Statics;
PCG_API UClass* Z_Construct_UClass_APCGPartitionActor_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGPartitionActor(); \
	friend struct ::Z_Construct_UClass_APCGPartitionActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_APCGPartitionActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APCGPartitionActor, APartitionActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_APCGPartitionActor_NoRegister) \
	DECLARE_SERIALIZER(APCGPartitionActor) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APCGPartitionActor(APCGPartitionActor&&) = delete; \
	APCGPartitionActor(const APCGPartitionActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, APCGPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGPartitionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGPartitionActor) \
	PCG_API virtual ~APCGPartitionActor();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_24_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APCGPartitionActor;

// ********** End Class APCGPartitionActor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
