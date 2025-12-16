// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/GenSources/PCGGenSourceWPStreamingSource.h"

#ifdef PCG_PCGGenSourceWPStreamingSource_generated_h
#error "PCGGenSourceWPStreamingSource.generated.h already included, missing '#pragma once' in PCGGenSourceWPStreamingSource.h"
#endif
#define PCG_PCGGenSourceWPStreamingSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGenSourceWPStreamingSource *******************************************
struct Z_Construct_UClass_UPCGGenSourceWPStreamingSource_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenSourceWPStreamingSource_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenSourceWPStreamingSource(); \
	friend struct ::Z_Construct_UClass_UPCGGenSourceWPStreamingSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenSourceWPStreamingSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenSourceWPStreamingSource, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenSourceWPStreamingSource_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenSourceWPStreamingSource) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGGenSourceWPStreamingSource*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGenSourceWPStreamingSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenSourceWPStreamingSource(UPCGGenSourceWPStreamingSource&&) = delete; \
	UPCGGenSourceWPStreamingSource(const UPCGGenSourceWPStreamingSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenSourceWPStreamingSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenSourceWPStreamingSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenSourceWPStreamingSource) \
	PCG_API virtual ~UPCGGenSourceWPStreamingSource();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenSourceWPStreamingSource;

// ********** End Class UPCGGenSourceWPStreamingSource *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceWPStreamingSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
