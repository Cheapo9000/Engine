// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosFlesh/FleshAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHENGINE_FleshAsset_generated_h
#error "FleshAsset.generated.h already included, missing '#pragma once' in FleshAsset.h"
#endif
#define CHAOSFLESHENGINE_FleshAsset_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFleshAsset, NO_API)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUFleshAsset(); \
	friend struct Z_Construct_UClass_UFleshAsset_Statics; \
public: \
	DECLARE_CLASS(UFleshAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UFleshAsset) \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFleshAsset*>(this); }


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFleshAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFleshAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFleshAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFleshAsset(UFleshAsset&&); \
	UFleshAsset(const UFleshAsset&); \
public: \
	NO_API virtual ~UFleshAsset();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UFleshAsset>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowFleshContent(); \
	friend struct Z_Construct_UClass_UDataflowFleshContent_Statics; \
public: \
	DECLARE_CLASS(UDataflowFleshContent, UDataflowSkeletalContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowFleshContent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_198_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowFleshContent(UDataflowFleshContent&&); \
	UDataflowFleshContent(const UDataflowFleshContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowFleshContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowFleshContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowFleshContent)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_195_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_198_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDataflowFleshContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
