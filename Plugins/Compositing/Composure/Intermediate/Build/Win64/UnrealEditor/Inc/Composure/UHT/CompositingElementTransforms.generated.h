// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/CompositingElementTransforms.h"

#ifdef COMPOSURE_CompositingElementTransforms_generated_h
#error "CompositingElementTransforms.generated.h already included, missing '#pragma once' in CompositingElementTransforms.h"
#endif
#define COMPOSURE_CompositingElementTransforms_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;

// ********** Begin Class UCompositingPostProcessPass **********************************************
struct Z_Construct_UClass_UCompositingPostProcessPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingPostProcessPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingPostProcessPass(); \
	friend struct ::Z_Construct_UClass_UCompositingPostProcessPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingPostProcessPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingPostProcessPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingPostProcessPass_NoRegister) \
	DECLARE_SERIALIZER(UCompositingPostProcessPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPostProcessPass(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingPostProcessPass(UCompositingPostProcessPass&&) = delete; \
	UCompositingPostProcessPass(const UCompositingPostProcessPass&) = delete; \
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


class UCompositingPostProcessPass;

// ********** End Class UCompositingPostProcessPass ************************************************

// ********** Begin Class UCompositingElementMaterialPass ******************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetParameterMapping); \
	DECLARE_FUNCTION(execSetMaterialInterface);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UCompositingElementMaterialPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementMaterialPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingElementMaterialPass(); \
	friend struct ::Z_Construct_UClass_UCompositingElementMaterialPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingElementMaterialPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingElementMaterialPass, UCompositingPostProcessPass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingElementMaterialPass_NoRegister) \
	DECLARE_SERIALIZER(UCompositingElementMaterialPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingElementMaterialPass(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingElementMaterialPass(UCompositingElementMaterialPass&&) = delete; \
	UCompositingElementMaterialPass(const UCompositingElementMaterialPass&) = delete; \
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


class UCompositingElementMaterialPass;

// ********** End Class UCompositingElementMaterialPass ********************************************

// ********** Begin Class UCompositingTonemapPass **************************************************
struct Z_Construct_UClass_UCompositingTonemapPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTonemapPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingTonemapPass(); \
	friend struct ::Z_Construct_UClass_UCompositingTonemapPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingTonemapPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingTonemapPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingTonemapPass_NoRegister) \
	DECLARE_SERIALIZER(UCompositingTonemapPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingTonemapPass(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingTonemapPass(UCompositingTonemapPass&&) = delete; \
	UCompositingTonemapPass(const UCompositingTonemapPass&) = delete; \
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


class UCompositingTonemapPass;

// ********** End Class UCompositingTonemapPass ****************************************************

// ********** Begin Class UMultiPassChromaKeyer ****************************************************
struct Z_Construct_UClass_UMultiPassChromaKeyer_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassChromaKeyer_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiPassChromaKeyer(); \
	friend struct ::Z_Construct_UClass_UMultiPassChromaKeyer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UMultiPassChromaKeyer_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiPassChromaKeyer, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UMultiPassChromaKeyer_NoRegister) \
	DECLARE_SERIALIZER(UMultiPassChromaKeyer)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_119_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiPassChromaKeyer(UMultiPassChromaKeyer&&) = delete; \
	UMultiPassChromaKeyer(const UMultiPassChromaKeyer&) = delete; \
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


class UMultiPassChromaKeyer;

// ********** End Class UMultiPassChromaKeyer ******************************************************

// ********** Begin Class UMultiPassDespill ********************************************************
struct Z_Construct_UClass_UMultiPassDespill_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassDespill_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiPassDespill(); \
	friend struct ::Z_Construct_UClass_UMultiPassDespill_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UMultiPassDespill_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiPassDespill, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UMultiPassDespill_NoRegister) \
	DECLARE_SERIALIZER(UMultiPassDespill)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_150_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiPassDespill(UMultiPassDespill&&) = delete; \
	UMultiPassDespill(const UMultiPassDespill&) = delete; \
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


class UMultiPassDespill;

// ********** End Class UMultiPassDespill **********************************************************

// ********** Begin Class UAlphaTransformPass ******************************************************
struct Z_Construct_UClass_UAlphaTransformPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UAlphaTransformPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlphaTransformPass(); \
	friend struct ::Z_Construct_UClass_UAlphaTransformPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UAlphaTransformPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UAlphaTransformPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UAlphaTransformPass_NoRegister) \
	DECLARE_SERIALIZER(UAlphaTransformPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_178_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAlphaTransformPass(UAlphaTransformPass&&) = delete; \
	UAlphaTransformPass(const UAlphaTransformPass&) = delete; \
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


class UAlphaTransformPass;

// ********** End Class UAlphaTransformPass ********************************************************

// ********** Begin Class UCompositingOpenColorIOPass **********************************************
struct Z_Construct_UClass_UCompositingOpenColorIOPass_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingOpenColorIOPass_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingOpenColorIOPass(); \
	friend struct ::Z_Construct_UClass_UCompositingOpenColorIOPass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingOpenColorIOPass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingOpenColorIOPass, UCompositingElementTransform, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingOpenColorIOPass_NoRegister) \
	DECLARE_SERIALIZER(UCompositingOpenColorIOPass)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingOpenColorIOPass(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingOpenColorIOPass(UCompositingOpenColorIOPass&&) = delete; \
	UCompositingOpenColorIOPass(const UCompositingOpenColorIOPass&) = delete; \
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


class UCompositingOpenColorIOPass;

// ********** End Class UCompositingOpenColorIOPass ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
