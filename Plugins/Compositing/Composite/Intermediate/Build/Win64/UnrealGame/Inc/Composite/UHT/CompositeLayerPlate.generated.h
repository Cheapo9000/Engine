// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/CompositeLayerPlate.h"

#ifdef COMPOSITE_CompositeLayerPlate_generated_h
#error "CompositeLayerPlate.generated.h already included, missing '#pragma once' in CompositeLayerPlate.h"
#endif
#define COMPOSITE_CompositeLayerPlate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture;
enum class ECompositePlateMode : uint8;

// ********** Begin Class UCompositeLayerPlate *****************************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCompositeTexture); \
	DECLARE_FUNCTION(execSetPlateMode); \
	DECLARE_FUNCTION(execGetPlateMode); \
	DECLARE_FUNCTION(execSetCompositeMeshes); \
	DECLARE_FUNCTION(execGetCompositeMeshes);


struct Z_Construct_UClass_UCompositeLayerPlate_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeLayerPlate_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeLayerPlate(); \
	friend struct ::Z_Construct_UClass_UCompositeLayerPlate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeLayerPlate_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeLayerPlate, UCompositeLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeLayerPlate_NoRegister) \
	DECLARE_SERIALIZER(UCompositeLayerPlate)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeLayerPlate(UCompositeLayerPlate&&) = delete; \
	UCompositeLayerPlate(const UCompositeLayerPlate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeLayerPlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeLayerPlate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeLayerPlate)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_32_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeLayerPlate;

// ********** End Class UCompositeLayerPlate *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerPlate_h

// ********** Begin Enum ECompositePlateMode *******************************************************
#define FOREACH_ENUM_ECOMPOSITEPLATEMODE(op) \
	op(ECompositePlateMode::Texture) \
	op(ECompositePlateMode::CompositeMesh) 

enum class ECompositePlateMode : uint8;
template<> struct TIsUEnumClass<ECompositePlateMode> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositePlateMode>();
// ********** End Enum ECompositePlateMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
