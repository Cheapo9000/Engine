// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VT/VirtualTexture.h"

#ifdef ENGINE_VirtualTexture_generated_h
#error "VirtualTexture.generated.h already included, missing '#pragma once' in VirtualTexture.h"
#endif
#define ENGINE_VirtualTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVirtualTexture **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVirtualTexture, ENGINE_API)


struct Z_Construct_UClass_UVirtualTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexture(); \
	friend struct ::Z_Construct_UClass_UVirtualTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVirtualTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVirtualTexture_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTexture(UVirtualTexture&&) = delete; \
	UVirtualTexture(const UVirtualTexture&) = delete; \
	ENGINE_API virtual ~UVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTexture;

// ********** End Class UVirtualTexture ************************************************************

// ********** Begin Class ULightMapVirtualTexture **************************************************
struct Z_Construct_UClass_ULightMapVirtualTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULightMapVirtualTexture(); \
	friend struct ::Z_Construct_UClass_ULightMapVirtualTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_ULightMapVirtualTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightMapVirtualTexture, UVirtualTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_ULightMapVirtualTexture_NoRegister) \
	DECLARE_SERIALIZER(ULightMapVirtualTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightMapVirtualTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightMapVirtualTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightMapVirtualTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightMapVirtualTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightMapVirtualTexture(ULightMapVirtualTexture&&) = delete; \
	ULightMapVirtualTexture(const ULightMapVirtualTexture&) = delete; \
	ENGINE_API virtual ~ULightMapVirtualTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightMapVirtualTexture;

// ********** End Class ULightMapVirtualTexture ****************************************************

// ********** Begin Class URuntimeVirtualTextureStreamingProxy *************************************
struct Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureStreamingProxy(); \
	friend struct ::Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeVirtualTextureStreamingProxy, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureStreamingProxy)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureStreamingProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureStreamingProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureStreamingProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureStreamingProxy); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeVirtualTextureStreamingProxy(URuntimeVirtualTextureStreamingProxy&&) = delete; \
	URuntimeVirtualTextureStreamingProxy(const URuntimeVirtualTextureStreamingProxy&) = delete; \
	NO_API virtual ~URuntimeVirtualTextureStreamingProxy();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_26_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeVirtualTextureStreamingProxy;

// ********** End Class URuntimeVirtualTextureStreamingProxy ***************************************

// ********** Begin Class UVirtualTexture2D ********************************************************
struct Z_Construct_UClass_UVirtualTexture2D_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVirtualTexture2D_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualTexture2D(); \
	friend struct ::Z_Construct_UClass_UVirtualTexture2D_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVirtualTexture2D_NoRegister(); \
public: \
	DECLARE_CLASS2(UVirtualTexture2D, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVirtualTexture2D_NoRegister) \
	DECLARE_SERIALIZER(UVirtualTexture2D)


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualTexture2D); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVirtualTexture2D(UVirtualTexture2D&&) = delete; \
	UVirtualTexture2D(const UVirtualTexture2D&) = delete; \
	NO_API virtual ~UVirtualTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVirtualTexture2D;

// ********** End Class UVirtualTexture2D **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
