// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transforms/MultiTransformer.h"

#ifdef MODELINGCOMPONENTS_MultiTransformer_generated_h
#error "MultiTransformer.generated.h already included, missing '#pragma once' in MultiTransformer.h"
#endif
#define MODELINGCOMPONENTS_MultiTransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMultiTransformer ********************************************************
struct Z_Construct_UClass_UMultiTransformer_Statics;
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiTransformer_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiTransformer(); \
	friend struct ::Z_Construct_UClass_UMultiTransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGCOMPONENTS_API UClass* ::Z_Construct_UClass_UMultiTransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiTransformer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), Z_Construct_UClass_UMultiTransformer_NoRegister) \
	DECLARE_SERIALIZER(UMultiTransformer)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UMultiTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiTransformer(UMultiTransformer&&) = delete; \
	UMultiTransformer(const UMultiTransformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UMultiTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTransformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTransformer) \
	MODELINGCOMPONENTS_API virtual ~UMultiTransformer();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiTransformer;

// ********** End Class UMultiTransformer **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h

// ********** Begin Enum EMultiTransformerMode *****************************************************
#define FOREACH_ENUM_EMULTITRANSFORMERMODE(op) \
	op(EMultiTransformerMode::DefaultGizmo) \
	op(EMultiTransformerMode::QuickAxisTranslation) 

enum class EMultiTransformerMode;
template<> struct TIsUEnumClass<EMultiTransformerMode> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMultiTransformerMode>();
// ********** End Enum EMultiTransformerMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
