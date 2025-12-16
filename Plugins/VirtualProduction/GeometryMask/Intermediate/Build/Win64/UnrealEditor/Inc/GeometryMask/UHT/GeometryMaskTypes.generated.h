// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryMaskTypes.h"

#ifdef GEOMETRYMASK_GeometryMaskTypes_generated_h
#error "GeometryMaskTypes.generated.h already included, missing '#pragma once' in GeometryMaskTypes.h"
#endif
#define GEOMETRYMASK_GeometryMaskTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasRenderTarget2D;
class UGeometryMaskCanvas;

// ********** Begin ScriptStruct FGeometryMaskCanvasId *********************************************
struct Z_Construct_UScriptStruct_FGeometryMaskCanvasId_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskCanvasId_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGeometryMaskCanvasId;
// ********** End ScriptStruct FGeometryMaskCanvasId ***********************************************

// ********** Begin ScriptStruct FGeometryMaskDrawingContext ***************************************
struct Z_Construct_UScriptStruct_FGeometryMaskDrawingContext_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskDrawingContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct FGeometryMaskDrawingContext;
// ********** End ScriptStruct FGeometryMaskDrawingContext *****************************************

// ********** Begin Delegate FOnGeometryMaskSetCanvasDelegate **************************************
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_170_DELEGATE \
GEOMETRYMASK_API void FOnGeometryMaskSetCanvasDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryMaskSetCanvasDelegate, const UGeometryMaskCanvas* InCanvas);


// ********** End Delegate FOnGeometryMaskSetCanvasDelegate ****************************************

// ********** Begin ScriptStruct FGeometryMaskReadParameters ***************************************
struct Z_Construct_UScriptStruct_FGeometryMaskReadParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskReadParameters_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


struct FGeometryMaskReadParameters;
// ********** End ScriptStruct FGeometryMaskReadParameters *****************************************

// ********** Begin ScriptStruct FGeometryMaskWriteParameters **************************************
struct Z_Construct_UScriptStruct_FGeometryMaskWriteParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGeometryMaskWriteParameters_Statics; \
	GEOMETRYMASK_API static class UScriptStruct* StaticStruct();


struct FGeometryMaskWriteParameters;
// ********** End ScriptStruct FGeometryMaskWriteParameters ****************************************

// ********** Begin Class UGeometryMaskCanvasReferenceComponentBase ********************************
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTexture);


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_Statics;
GEOMETRYMASK_API UClass* Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryMaskCanvasReferenceComponentBase(); \
	friend struct ::Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMASK_API UClass* ::Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryMaskCanvasReferenceComponentBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryMask"), Z_Construct_UClass_UGeometryMaskCanvasReferenceComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UGeometryMaskCanvasReferenceComponentBase)


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryMaskCanvasReferenceComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryMaskCanvasReferenceComponentBase(UGeometryMaskCanvasReferenceComponentBase&&) = delete; \
	UGeometryMaskCanvasReferenceComponentBase(const UGeometryMaskCanvasReferenceComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryMaskCanvasReferenceComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskCanvasReferenceComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskCanvasReferenceComponentBase)


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_222_PROLOG
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryMaskCanvasReferenceComponentBase;

// ********** End Class UGeometryMaskCanvasReferenceComponentBase **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_GeometryMaskTypes_h

// ********** Begin Enum EGeometryMaskColorChannel *************************************************
#define FOREACH_ENUM_EGEOMETRYMASKCOLORCHANNEL(op) \
	op(EGeometryMaskColorChannel::Red) \
	op(EGeometryMaskColorChannel::Green) \
	op(EGeometryMaskColorChannel::Blue) \
	op(EGeometryMaskColorChannel::Alpha) \
	op(EGeometryMaskColorChannel::None) \
	op(EGeometryMaskColorChannel::Num) 

enum class EGeometryMaskColorChannel : uint8;
template<> struct TIsUEnumClass<EGeometryMaskColorChannel> { enum { Value = true }; };
template<> GEOMETRYMASK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryMaskColorChannel>();
// ********** End Enum EGeometryMaskColorChannel ***************************************************

// ********** Begin Enum EGeometryMaskCompositeOperation *******************************************
#define FOREACH_ENUM_EGEOMETRYMASKCOMPOSITEOPERATION(op) \
	op(EGeometryMaskCompositeOperation::Add) \
	op(EGeometryMaskCompositeOperation::Subtract) \
	op(EGeometryMaskCompositeOperation::Intersect) \
	op(EGeometryMaskCompositeOperation::Num) 

enum class EGeometryMaskCompositeOperation : uint8;
template<> struct TIsUEnumClass<EGeometryMaskCompositeOperation> { enum { Value = true }; };
template<> GEOMETRYMASK_NON_ATTRIBUTED_API UEnum* StaticEnum<EGeometryMaskCompositeOperation>();
// ********** End Enum EGeometryMaskCompositeOperation *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
