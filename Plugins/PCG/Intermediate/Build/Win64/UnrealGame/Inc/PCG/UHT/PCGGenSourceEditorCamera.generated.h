// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeGen/GenSources/PCGGenSourceEditorCamera.h"

#ifdef PCG_PCGGenSourceEditorCamera_generated_h
#error "PCGGenSourceEditorCamera.generated.h already included, missing '#pragma once' in PCGGenSourceEditorCamera.h"
#endif
#define PCG_PCGGenSourceEditorCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGenSourceEditorCamera ************************************************
struct Z_Construct_UClass_UPCGGenSourceEditorCamera_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenSourceEditorCamera_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenSourceEditorCamera(); \
	friend struct ::Z_Construct_UClass_UPCGGenSourceEditorCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenSourceEditorCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenSourceEditorCamera, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenSourceEditorCamera_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenSourceEditorCamera) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGGenSourceEditorCamera*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGenSourceEditorCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenSourceEditorCamera(UPCGGenSourceEditorCamera&&) = delete; \
	UPCGGenSourceEditorCamera(const UPCGGenSourceEditorCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGenSourceEditorCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenSourceEditorCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGenSourceEditorCamera) \
	PCG_API virtual ~UPCGGenSourceEditorCamera();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenSourceEditorCamera;

// ********** End Class UPCGGenSourceEditorCamera **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_RuntimeGen_GenSources_PCGGenSourceEditorCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
