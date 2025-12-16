// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGDefaultExecutionSource.h"

#ifdef PCG_PCGDefaultExecutionSource_generated_h
#error "PCGDefaultExecutionSource.generated.h already included, missing '#pragma once' in PCGDefaultExecutionSource.h"
#endif
#define PCG_PCGDefaultExecutionSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDefaultExecutionSource ***********************************************
struct Z_Construct_UClass_UPCGDefaultExecutionSource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDefaultExecutionSource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDefaultExecutionSource(); \
	friend struct ::Z_Construct_UClass_UPCGDefaultExecutionSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDefaultExecutionSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDefaultExecutionSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDefaultExecutionSource_NoRegister) \
	DECLARE_SERIALIZER(UPCGDefaultExecutionSource) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGDefaultExecutionSource*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_66_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDefaultExecutionSource(UPCGDefaultExecutionSource&&) = delete; \
	UPCGDefaultExecutionSource(const UPCGDefaultExecutionSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDefaultExecutionSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDefaultExecutionSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGDefaultExecutionSource)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_61_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDefaultExecutionSource;

// ********** End Class UPCGDefaultExecutionSource *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGDefaultExecutionSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
