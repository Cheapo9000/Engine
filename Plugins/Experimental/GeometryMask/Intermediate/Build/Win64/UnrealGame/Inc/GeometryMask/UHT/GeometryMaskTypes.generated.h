// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasRenderTarget2D;
class UGeometryMaskCanvas;
#ifdef GEOMETRYMASK_GeometryMaskTypes_generated_h
#error "GeometryMaskTypes.generated.h already included, missing '#pragma once' in GeometryMaskTypes.h"
#endif
#define GEOMETRYMASK_GeometryMaskTypes_generated_h

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryMaskCanvasId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYMASK_API UScriptStruct* StaticStruct<struct FGeometryMaskCanvasId>();

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryMaskDrawingContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYMASK_API UScriptStruct* StaticStruct<struct FGeometryMaskDrawingContext>();

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_170_DELEGATE \
GEOMETRYMASK_API void FOnGeometryMaskSetCanvasDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryMaskSetCanvasDelegate, const UGeometryMaskCanvas* InCanvas);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryMaskReadParameters_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYMASK_API UScriptStruct* StaticStruct<struct FGeometryMaskReadParameters>();

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryMaskWriteParameters_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYMASK_API UScriptStruct* StaticStruct<struct FGeometryMaskWriteParameters>();

#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTexture);


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskCanvasReferenceComponentBase(); \
	friend struct Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_Statics; \
public: \
	DECLARE_CLASS(UGeometryMaskCanvasReferenceComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryMask"), NO_API) \
	DECLARE_SERIALIZER(UGeometryMaskCanvasReferenceComponentBase)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskCanvasReferenceComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryMaskCanvasReferenceComponentBase(UGeometryMaskCanvasReferenceComponentBase&&); \
	UGeometryMaskCanvasReferenceComponentBase(const UGeometryMaskCanvasReferenceComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskCanvasReferenceComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskCanvasReferenceComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskCanvasReferenceComponentBase)


#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_222_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYMASK_API UClass* StaticClass<class UGeometryMaskCanvasReferenceComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h


#define FOREACH_ENUM_EGEOMETRYMASKCOLORCHANNEL(op) \
	op(EGeometryMaskColorChannel::Red) \
	op(EGeometryMaskColorChannel::Green) \
	op(EGeometryMaskColorChannel::Blue) \
	op(EGeometryMaskColorChannel::Alpha) \
	op(EGeometryMaskColorChannel::None) \
	op(EGeometryMaskColorChannel::Num) 

enum class EGeometryMaskColorChannel : uint8;
template<> struct TIsUEnumClass<EGeometryMaskColorChannel> { enum { Value = true }; };
template<> GEOMETRYMASK_API UEnum* StaticEnum<EGeometryMaskColorChannel>();

#define FOREACH_ENUM_EGEOMETRYMASKCOMPOSITEOPERATION(op) \
	op(EGeometryMaskCompositeOperation::Add) \
	op(EGeometryMaskCompositeOperation::Subtract) \
	op(EGeometryMaskCompositeOperation::Intersect) \
	op(EGeometryMaskCompositeOperation::Num) 

enum class EGeometryMaskCompositeOperation : uint8;
template<> struct TIsUEnumClass<EGeometryMaskCompositeOperation> { enum { Value = true }; };
template<> GEOMETRYMASK_API UEnum* StaticEnum<EGeometryMaskCompositeOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
