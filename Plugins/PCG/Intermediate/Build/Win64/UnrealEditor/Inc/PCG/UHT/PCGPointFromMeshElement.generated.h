// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPointFromMeshElement.h"

#ifdef PCG_PCGPointFromMeshElement_generated_h
#error "PCGPointFromMeshElement.generated.h already included, missing '#pragma once' in PCGPointFromMeshElement.h"
#endif
#define PCG_PCGPointFromMeshElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGPointFromMeshSettings ************************************************
struct Z_Construct_UClass_UPCGPointFromMeshSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointFromMeshSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointFromMeshSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPointFromMeshSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointFromMeshSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointFromMeshSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointFromMeshSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointFromMeshSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGPointFromMeshSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointFromMeshSettings(UPCGPointFromMeshSettings&&) = delete; \
	UPCGPointFromMeshSettings(const UPCGPointFromMeshSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPointFromMeshSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointFromMeshSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointFromMeshSettings) \
	PCG_API virtual ~UPCGPointFromMeshSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointFromMeshSettings;

// ********** End Class UPCGPointFromMeshSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointFromMeshElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
