// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGWorldRaycast.h"

#ifdef PCG_PCGWorldRaycast_generated_h
#error "PCGWorldRaycast.generated.h already included, missing '#pragma once' in PCGWorldRaycast.h"
#endif
#define PCG_PCGWorldRaycast_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGWorldRaycastElementSettings ******************************************
struct Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGWorldRaycastElementSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGWorldRaycastElementSettings(); \
	friend struct ::Z_Construct_UClass_UPCGWorldRaycastElementSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGWorldRaycastElementSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGWorldRaycastElementSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGWorldRaycastElementSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGWorldRaycastElementSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGWorldRaycastElementSettings(UPCGWorldRaycastElementSettings&&) = delete; \
	UPCGWorldRaycastElementSettings(const UPCGWorldRaycastElementSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGWorldRaycastElementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGWorldRaycastElementSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGWorldRaycastElementSettings) \
	NO_API virtual ~UPCGWorldRaycastElementSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGWorldRaycastElementSettings;

// ********** End Class UPCGWorldRaycastElementSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGWorldRaycast_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
