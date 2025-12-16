// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGSelectPoints.h"

#ifdef PCG_PCGSelectPoints_generated_h
#error "PCGSelectPoints.generated.h already included, missing '#pragma once' in PCGSelectPoints.h"
#endif
#define PCG_PCGSelectPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGSelectPointsSettings *************************************************
struct Z_Construct_UClass_UPCGSelectPointsSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSelectPointsSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSelectPointsSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSelectPointsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSelectPointsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSelectPointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSelectPointsSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSelectPointsSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGSelectPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSelectPointsSettings(UPCGSelectPointsSettings&&) = delete; \
	UPCGSelectPointsSettings(const UPCGSelectPointsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSelectPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSelectPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGSelectPointsSettings) \
	PCG_API virtual ~UPCGSelectPointsSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_9_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSelectPointsSettings;

// ********** End Class UPCGSelectPointsSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGSelectPoints_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
