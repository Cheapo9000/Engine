// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGApplyOnActor.h"

#ifdef PCG_PCGApplyOnActor_generated_h
#error "PCGApplyOnActor.generated.h already included, missing '#pragma once' in PCGApplyOnActor.h"
#endif
#define PCG_PCGApplyOnActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGApplyOnActorSettings *************************************************
struct Z_Construct_UClass_UPCGApplyOnActorSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGApplyOnActorSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGApplyOnActorSettings(); \
	friend struct ::Z_Construct_UClass_UPCGApplyOnActorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGApplyOnActorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGApplyOnActorSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGApplyOnActorSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGApplyOnActorSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGApplyOnActorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGApplyOnActorSettings(UPCGApplyOnActorSettings&&) = delete; \
	UPCGApplyOnActorSettings(const UPCGApplyOnActorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGApplyOnActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGApplyOnActorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGApplyOnActorSettings) \
	NO_API virtual ~UPCGApplyOnActorSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGApplyOnActorSettings;

// ********** End Class UPCGApplyOnActorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGApplyOnActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
