// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetActorProperty.h"

#ifdef PCG_PCGGetActorProperty_generated_h
#error "PCGGetActorProperty.generated.h already included, missing '#pragma once' in PCGGetActorProperty.h"
#endif
#define PCG_PCGGetActorProperty_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetActorPropertySettings *********************************************
struct Z_Construct_UClass_UPCGGetActorPropertySettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetActorPropertySettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetActorPropertySettings(); \
	friend struct ::Z_Construct_UClass_UPCGGetActorPropertySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetActorPropertySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetActorPropertySettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetActorPropertySettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetActorPropertySettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetActorPropertySettings(UPCGGetActorPropertySettings&&) = delete; \
	UPCGGetActorPropertySettings(const UPCGGetActorPropertySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetActorPropertySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetActorPropertySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetActorPropertySettings) \
	PCG_API virtual ~UPCGGetActorPropertySettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetActorPropertySettings;

// ********** End Class UPCGGetActorPropertySettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetActorProperty_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
