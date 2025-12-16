// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGCreateCollisionData.h"

#ifdef PCG_PCGCreateCollisionData_generated_h
#error "PCGCreateCollisionData.generated.h already included, missing '#pragma once' in PCGCreateCollisionData.h"
#endif
#define PCG_PCGCreateCollisionData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCreateCollisionDataSettings ******************************************
struct Z_Construct_UClass_UPCGCreateCollisionDataSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCreateCollisionDataSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCreateCollisionDataSettings(); \
	friend struct ::Z_Construct_UClass_UPCGCreateCollisionDataSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCreateCollisionDataSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCreateCollisionDataSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCreateCollisionDataSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGCreateCollisionDataSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCreateCollisionDataSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCreateCollisionDataSettings(UPCGCreateCollisionDataSettings&&) = delete; \
	UPCGCreateCollisionDataSettings(const UPCGCreateCollisionDataSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCreateCollisionDataSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCreateCollisionDataSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCreateCollisionDataSettings) \
	PCG_API virtual ~UPCGCreateCollisionDataSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_12_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCreateCollisionDataSettings;

// ********** End Class UPCGCreateCollisionDataSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGCreateCollisionData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
