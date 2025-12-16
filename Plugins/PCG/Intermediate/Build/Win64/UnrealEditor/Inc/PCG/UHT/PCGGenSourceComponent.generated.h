// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/GenSources/PCGGenSourceComponent.h"

#ifdef PCG_PCGGenSourceComponent_generated_h
#error "PCGGenSourceComponent.generated.h already included, missing '#pragma once' in PCGGenSourceComponent.h"
#endif
#define PCG_PCGGenSourceComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGenSourceComponent ***************************************************
struct Z_Construct_UClass_UPCGGenSourceComponent_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenSourceComponent_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenSourceComponent(); \
	friend struct ::Z_Construct_UClass_UPCGGenSourceComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenSourceComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenSourceComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenSourceComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGGenSourceComponent*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenSourceComponent(UPCGGenSourceComponent&&) = delete; \
	UPCGGenSourceComponent(const UPCGGenSourceComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenSourceComponent)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_20_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenSourceComponent;

// ********** End Class UPCGGenSourceComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
