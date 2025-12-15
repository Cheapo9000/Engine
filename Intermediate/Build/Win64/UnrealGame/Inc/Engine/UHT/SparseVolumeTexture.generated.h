// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SparseVolumeTexture/SparseVolumeTexture.h"

#ifdef ENGINE_SparseVolumeTexture_generated_h
#error "SparseVolumeTexture.generated.h already included, missing '#pragma once' in SparseVolumeTexture.h"
#endif
#define ENGINE_SparseVolumeTexture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USparseVolumeTextureFrame;

// ********** Begin Class USparseVolumeTexture *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetFrameTransform); \
	DECLARE_FUNCTION(execGetNumMipLevels); \
	DECLARE_FUNCTION(execGetNumFrames); \
	DECLARE_FUNCTION(execGetSizeZ); \
	DECLARE_FUNCTION(execGetSizeY); \
	DECLARE_FUNCTION(execGetSizeX);


struct Z_Construct_UClass_USparseVolumeTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUSparseVolumeTexture(); \
	friend struct ::Z_Construct_UClass_USparseVolumeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USparseVolumeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(USparseVolumeTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USparseVolumeTexture_NoRegister) \
	DECLARE_SERIALIZER(USparseVolumeTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USparseVolumeTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USparseVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USparseVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USparseVolumeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USparseVolumeTexture(USparseVolumeTexture&&) = delete; \
	USparseVolumeTexture(const USparseVolumeTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_307_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USparseVolumeTexture;

// ********** End Class USparseVolumeTexture *******************************************************

// ********** Begin Class USparseVolumeTextureFrame ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USparseVolumeTextureFrame, ENGINE_API)


struct Z_Construct_UClass_USparseVolumeTextureFrame_Statics;
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_INCLASS \
private: \
	static void StaticRegisterNativesUSparseVolumeTextureFrame(); \
	friend struct ::Z_Construct_UClass_USparseVolumeTextureFrame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister(); \
public: \
	DECLARE_CLASS2(USparseVolumeTextureFrame, USparseVolumeTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USparseVolumeTextureFrame_NoRegister) \
	DECLARE_SERIALIZER(USparseVolumeTextureFrame) \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USparseVolumeTextureFrame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USparseVolumeTextureFrame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USparseVolumeTextureFrame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USparseVolumeTextureFrame); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USparseVolumeTextureFrame(USparseVolumeTextureFrame&&) = delete; \
	USparseVolumeTextureFrame(const USparseVolumeTextureFrame&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_364_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_367_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USparseVolumeTextureFrame;

// ********** End Class USparseVolumeTextureFrame **************************************************

// ********** Begin Class UStreamableSparseVolumeTexture *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStreamableSparseVolumeTexture, ENGINE_API)


struct Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_INCLASS \
private: \
	static void StaticRegisterNativesUStreamableSparseVolumeTexture(); \
	friend struct ::Z_Construct_UClass_UStreamableSparseVolumeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UStreamableSparseVolumeTexture, USparseVolumeTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStreamableSparseVolumeTexture_NoRegister) \
	DECLARE_SERIALIZER(UStreamableSparseVolumeTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UStreamableSparseVolumeTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStreamableSparseVolumeTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamableSparseVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamableSparseVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamableSparseVolumeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreamableSparseVolumeTexture(UStreamableSparseVolumeTexture&&) = delete; \
	UStreamableSparseVolumeTexture(const UStreamableSparseVolumeTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_450_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_453_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreamableSparseVolumeTexture;

// ********** End Class UStreamableSparseVolumeTexture *********************************************

// ********** Begin Class UStaticSparseVolumeTexture ***********************************************
struct Z_Construct_UClass_UStaticSparseVolumeTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_618_INCLASS \
private: \
	static void StaticRegisterNativesUStaticSparseVolumeTexture(); \
	friend struct ::Z_Construct_UClass_UStaticSparseVolumeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UStaticSparseVolumeTexture, UStreamableSparseVolumeTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister) \
	DECLARE_SERIALIZER(UStaticSparseVolumeTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_618_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticSparseVolumeTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticSparseVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticSparseVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticSparseVolumeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStaticSparseVolumeTexture(UStaticSparseVolumeTexture&&) = delete; \
	UStaticSparseVolumeTexture(const UStaticSparseVolumeTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_615_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_618_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_618_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_618_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStaticSparseVolumeTexture;

// ********** End Class UStaticSparseVolumeTexture *************************************************

// ********** Begin Class UAnimatedSparseVolumeTexture *********************************************
struct Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_641_INCLASS \
private: \
	static void StaticRegisterNativesUAnimatedSparseVolumeTexture(); \
	friend struct ::Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimatedSparseVolumeTexture, UStreamableSparseVolumeTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister) \
	DECLARE_SERIALIZER(UAnimatedSparseVolumeTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_641_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimatedSparseVolumeTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimatedSparseVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimatedSparseVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimatedSparseVolumeTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimatedSparseVolumeTexture(UAnimatedSparseVolumeTexture&&) = delete; \
	UAnimatedSparseVolumeTexture(const UAnimatedSparseVolumeTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_638_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_641_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_641_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_641_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimatedSparseVolumeTexture;

// ********** End Class UAnimatedSparseVolumeTexture ***********************************************

// ********** Begin Class UAnimatedSparseVolumeTextureController ***********************************
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetCurrentFramesForInterpolation); \
	DECLARE_FUNCTION(execGetCurrentFrame); \
	DECLARE_FUNCTION(execGetFrameByIndex); \
	DECLARE_FUNCTION(execGetFractionalFrameIndex); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_INCLASS \
private: \
	static void StaticRegisterNativesUAnimatedSparseVolumeTextureController(); \
	friend struct ::Z_Construct_UClass_UAnimatedSparseVolumeTextureController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimatedSparseVolumeTextureController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAnimatedSparseVolumeTextureController_NoRegister) \
	DECLARE_SERIALIZER(UAnimatedSparseVolumeTextureController)


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimatedSparseVolumeTextureController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimatedSparseVolumeTextureController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimatedSparseVolumeTextureController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimatedSparseVolumeTextureController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimatedSparseVolumeTextureController(UAnimatedSparseVolumeTextureController&&) = delete; \
	UAnimatedSparseVolumeTextureController(const UAnimatedSparseVolumeTextureController&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_657_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_660_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimatedSparseVolumeTextureController;

// ********** End Class UAnimatedSparseVolumeTextureController *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
