// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingElementTransforms.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
#ifdef COMPOSURE_CompositingElementTransforms_generated_h
#error "CompositingElementTransforms.generated.h already included, missing '#pragma once' in CompositingElementTransforms.h"
#endif
#define COMPOSURE_CompositingElementTransforms_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingPostProcessPass(); \
	friend struct Z_Construct_UClass_UCompositingPostProcessPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingPostProcessPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingPostProcessPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPostProcessPass(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingPostProcessPass(UCompositingPostProcessPass&&); \
	UCompositingPostProcessPass(const UCompositingPostProcessPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingPostProcessPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingPostProcessPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingPostProcessPass) \
	NO_API virtual ~UCompositingPostProcessPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_18_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingPostProcessPass>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParameterMapping); \
	DECLARE_FUNCTION(execSetMaterialInterface);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementMaterialPass(); \
	friend struct Z_Construct_UClass_UCompositingElementMaterialPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingElementMaterialPass, UCompositingPostProcessPass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingElementMaterialPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementMaterialPass(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingElementMaterialPass(UCompositingElementMaterialPass&&); \
	UCompositingElementMaterialPass(const UCompositingElementMaterialPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingElementMaterialPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingElementMaterialPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingElementMaterialPass) \
	NO_API virtual ~UCompositingElementMaterialPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_41_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingElementMaterialPass>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingTonemapPass(); \
	friend struct Z_Construct_UClass_UCompositingTonemapPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingTonemapPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingTonemapPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingTonemapPass(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingTonemapPass(UCompositingTonemapPass&&); \
	UCompositingTonemapPass(const UCompositingTonemapPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingTonemapPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingTonemapPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingTonemapPass) \
	NO_API virtual ~UCompositingTonemapPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_82_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingTonemapPass>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiPassChromaKeyer(); \
	friend struct Z_Construct_UClass_UMultiPassChromaKeyer_Statics; \
public: \
	DECLARE_CLASS(UMultiPassChromaKeyer, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UMultiPassChromaKeyer)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiPassChromaKeyer(UMultiPassChromaKeyer&&); \
	UMultiPassChromaKeyer(const UMultiPassChromaKeyer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiPassChromaKeyer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiPassChromaKeyer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiPassChromaKeyer) \
	NO_API virtual ~UMultiPassChromaKeyer();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_116_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UMultiPassChromaKeyer>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiPassDespill(); \
	friend struct Z_Construct_UClass_UMultiPassDespill_Statics; \
public: \
	DECLARE_CLASS(UMultiPassDespill, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UMultiPassDespill)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMultiPassDespill(UMultiPassDespill&&); \
	UMultiPassDespill(const UMultiPassDespill&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiPassDespill); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiPassDespill); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiPassDespill) \
	NO_API virtual ~UMultiPassDespill();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_147_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UMultiPassDespill>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlphaTransformPass(); \
	friend struct Z_Construct_UClass_UAlphaTransformPass_Statics; \
public: \
	DECLARE_CLASS(UAlphaTransformPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UAlphaTransformPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAlphaTransformPass(UAlphaTransformPass&&); \
	UAlphaTransformPass(const UAlphaTransformPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlphaTransformPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlphaTransformPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAlphaTransformPass) \
	NO_API virtual ~UAlphaTransformPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_175_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UAlphaTransformPass>();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingOpenColorIOPass(); \
	friend struct Z_Construct_UClass_UCompositingOpenColorIOPass_Statics; \
public: \
	DECLARE_CLASS(UCompositingOpenColorIOPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingOpenColorIOPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingOpenColorIOPass(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCompositingOpenColorIOPass(UCompositingOpenColorIOPass&&); \
	UCompositingOpenColorIOPass(const UCompositingOpenColorIOPass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingOpenColorIOPass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingOpenColorIOPass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositingOpenColorIOPass) \
	NO_API virtual ~UCompositingOpenColorIOPass();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_202_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingOpenColorIOPass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
