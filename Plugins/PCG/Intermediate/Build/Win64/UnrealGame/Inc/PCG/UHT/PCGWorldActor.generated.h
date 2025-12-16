// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGWorldActor.h"

#ifdef PCG_PCGWorldActor_generated_h
#error "PCGWorldActor.generated.h already included, missing '#pragma once' in PCGWorldActor.h"
#endif
#define PCG_PCGWorldActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APCGWorldActor ***********************************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetPCGGridSize);


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APCGWorldActor, PCG_API)


struct Z_Construct_UClass_APCGWorldActor_Statics;
PCG_API UClass* Z_Construct_UClass_APCGWorldActor_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPCGWorldActor(); \
	friend struct ::Z_Construct_UClass_APCGWorldActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_APCGWorldActor_NoRegister(); \
public: \
	DECLARE_CLASS2(APCGWorldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_APCGWorldActor_NoRegister) \
	DECLARE_SERIALIZER(APCGWorldActor) \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APCGWorldActor(APCGWorldActor&&) = delete; \
	APCGWorldActor(const APCGWorldActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, APCGWorldActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APCGWorldActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APCGWorldActor) \
	PCG_API virtual ~APCGWorldActor();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APCGWorldActor;

// ********** End Class APCGWorldActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGWorldActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
