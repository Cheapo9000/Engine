// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEdge.h"

#ifdef PCG_PCGEdge_generated_h
#error "PCGEdge.generated.h already included, missing '#pragma once' in PCGEdge.h"
#endif
#define PCG_PCGEdge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEdge *****************************************************************
struct Z_Construct_UClass_UPCGEdge_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGEdge_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEdge(); \
	friend struct ::Z_Construct_UClass_UPCGEdge_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGEdge_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEdge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGEdge_NoRegister) \
	DECLARE_SERIALIZER(UPCGEdge)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEdge(UPCGEdge&&) = delete; \
	UPCGEdge(const UPCGEdge&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGEdge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEdge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEdge) \
	PCG_API virtual ~UPCGEdge();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEdge;

// ********** End Class UPCGEdge *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_PCGEdge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
