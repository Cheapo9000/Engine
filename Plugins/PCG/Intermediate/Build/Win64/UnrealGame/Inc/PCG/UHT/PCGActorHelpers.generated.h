// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/PCGActorHelpers.h"

#ifdef PCG_PCGActorHelpers_generated_h
#error "PCGActorHelpers.generated.h already included, missing '#pragma once' in PCGActorHelpers.h"
#endif
#define PCG_PCGActorHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGActorHelpers *********************************************************
struct Z_Construct_UClass_UPCGActorHelpers_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGActorHelpers_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGActorHelpers(); \
	friend struct ::Z_Construct_UClass_UPCGActorHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGActorHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGActorHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGActorHelpers_NoRegister) \
	DECLARE_SERIALIZER(UPCGActorHelpers)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGActorHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGActorHelpers(UPCGActorHelpers&&) = delete; \
	UPCGActorHelpers(const UPCGActorHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGActorHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGActorHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGActorHelpers) \
	PCG_API virtual ~UPCGActorHelpers();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_110_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGActorHelpers;

// ********** End Class UPCGActorHelpers ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
