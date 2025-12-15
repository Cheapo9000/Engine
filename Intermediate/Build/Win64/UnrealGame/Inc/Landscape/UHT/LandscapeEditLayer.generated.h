// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeEditLayer.h"

#ifdef LANDSCAPE_LandscapeEditLayer_generated_h
#error "LandscapeEditLayer.generated.h already included, missing '#pragma once' in LandscapeEditLayer.h"
#endif
#define LANDSCAPE_LandscapeEditLayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeEditLayerBase **************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_ACCESSORS \
static void SetGuid_WrapperImpl(void* Object, const void* InValue); \
static void SetLayerName_WrapperImpl(void* Object, const void* InValue); \
static void SetbVisible_WrapperImpl(void* Object, const void* InValue); \
static void SetbLocked_WrapperImpl(void* Object, const void* InValue); \
static void SetHeightmapAlpha_WrapperImpl(void* Object, const void* InValue); \
static void SetWeightmapAlpha_WrapperImpl(void* Object, const void* InValue); \
static void SetWeightmapLayerAllocationBlend_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_ULandscapeEditLayerBase_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerBase_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerBase(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditLayerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeEditLayerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditLayerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeEditLayerBase_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditLayerBase)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerBase(ULandscapeEditLayerBase&&) = delete; \
	ULandscapeEditLayerBase(const ULandscapeEditLayerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerBase) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerBase();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_41_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditLayerBase;

// ********** End Class ULandscapeEditLayerBase ****************************************************

// ********** Begin Class ULandscapeEditLayerPersistent ********************************************
struct Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerPersistent_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_387_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerPersistent(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeEditLayerPersistent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditLayerPersistent, ULandscapeEditLayerBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeEditLayerPersistent_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditLayerPersistent) \
	virtual UObject* _getUObject() const override { return const_cast<ULandscapeEditLayerPersistent*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_387_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerPersistent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerPersistent(ULandscapeEditLayerPersistent&&) = delete; \
	ULandscapeEditLayerPersistent(const ULandscapeEditLayerPersistent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerPersistent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerPersistent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerPersistent) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerPersistent();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_383_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_387_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_387_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_387_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditLayerPersistent;

// ********** End Class ULandscapeEditLayerPersistent **********************************************

// ********** Begin Class ULandscapeEditLayer ******************************************************
struct Z_Construct_UClass_ULandscapeEditLayer_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayer_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_415_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayer(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditLayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeEditLayer_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditLayer, ULandscapeEditLayerPersistent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeEditLayer_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditLayer)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_415_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditLayer(ULandscapeEditLayer&&) = delete; \
	ULandscapeEditLayer(const ULandscapeEditLayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayer) \
	LANDSCAPE_API virtual ~ULandscapeEditLayer();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_412_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_415_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_415_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_415_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditLayer;

// ********** End Class ULandscapeEditLayer ********************************************************

// ********** Begin Class ULandscapeEditLayerProcedural ********************************************
struct Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerProcedural_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_437_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerProcedural(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeEditLayerProcedural_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditLayerProcedural, ULandscapeEditLayerBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeEditLayerProcedural_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditLayerProcedural)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_437_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerProcedural(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerProcedural(ULandscapeEditLayerProcedural&&) = delete; \
	ULandscapeEditLayerProcedural(const ULandscapeEditLayerProcedural&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerProcedural); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerProcedural); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerProcedural) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerProcedural();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_434_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_437_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_437_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_437_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditLayerProcedural;

// ********** End Class ULandscapeEditLayerProcedural **********************************************

// ********** Begin Class ULandscapeEditLayerSplines ***********************************************
struct Z_Construct_UClass_ULandscapeEditLayerSplines_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerSplines_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_454_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeEditLayerSplines(); \
	friend struct ::Z_Construct_UClass_ULandscapeEditLayerSplines_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ULandscapeEditLayerSplines_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeEditLayerSplines, ULandscapeEditLayerPersistent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ULandscapeEditLayerSplines_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeEditLayerSplines)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_454_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeEditLayerSplines(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeEditLayerSplines(ULandscapeEditLayerSplines&&) = delete; \
	ULandscapeEditLayerSplines(const ULandscapeEditLayerSplines&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeEditLayerSplines); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeEditLayerSplines); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeEditLayerSplines) \
	LANDSCAPE_API virtual ~ULandscapeEditLayerSplines();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_451_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_454_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_454_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_454_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeEditLayerSplines;

// ********** End Class ULandscapeEditLayerSplines *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
