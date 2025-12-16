// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGPointMatchAndSet.h"

#ifdef PCG_PCGPointMatchAndSet_generated_h
#error "PCGPointMatchAndSet.generated.h already included, missing '#pragma once' in PCGPointMatchAndSet.h"
#endif
#define PCG_PCGPointMatchAndSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UPCGMatchAndSetBase;

// ********** Begin Class UPCGPointMatchAndSetSettings *********************************************
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMatchAndSetType);


struct Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGPointMatchAndSetSettings(); \
	friend struct ::Z_Construct_UClass_UPCGPointMatchAndSetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGPointMatchAndSetSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGPointMatchAndSetSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGPointMatchAndSetSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGPointMatchAndSetSettings(UPCGPointMatchAndSetSettings&&) = delete; \
	UPCGPointMatchAndSetSettings(const UPCGPointMatchAndSetSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGPointMatchAndSetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGPointMatchAndSetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGPointMatchAndSetSettings) \
	PCG_API virtual ~UPCGPointMatchAndSetSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGPointMatchAndSetSettings;

// ********** End Class UPCGPointMatchAndSetSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGPointMatchAndSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
