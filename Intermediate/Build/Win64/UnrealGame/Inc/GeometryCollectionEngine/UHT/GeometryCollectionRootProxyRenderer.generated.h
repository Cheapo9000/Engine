// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionRootProxyRenderer.h"

#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionRootProxyRenderer_generated_h
#error "GeometryCollectionRootProxyRenderer.generated.h already included, missing '#pragma once' in GeometryCollectionRootProxyRenderer.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionRootProxyRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeometryCollectionRootProxyRenderer *************************************
struct Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics;
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollectionRootProxyRenderer(); \
	friend struct ::Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYCOLLECTIONENGINE_API UClass* ::Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryCollectionRootProxyRenderer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), Z_Construct_UClass_UGeometryCollectionRootProxyRenderer_NoRegister) \
	DECLARE_SERIALIZER(UGeometryCollectionRootProxyRenderer) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionRootProxyRenderer*>(this); }


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionRootProxyRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryCollectionRootProxyRenderer(UGeometryCollectionRootProxyRenderer&&) = delete; \
	UGeometryCollectionRootProxyRenderer(const UGeometryCollectionRootProxyRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollectionRootProxyRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionRootProxyRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionRootProxyRenderer) \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UGeometryCollectionRootProxyRenderer();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_12_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryCollectionRootProxyRenderer;

// ********** End Class UGeometryCollectionRootProxyRenderer ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionRootProxyRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
