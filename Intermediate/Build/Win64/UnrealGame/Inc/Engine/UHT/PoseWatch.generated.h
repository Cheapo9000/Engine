// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PoseWatch.h"

#ifdef ENGINE_PoseWatch_generated_h
#error "PoseWatch.generated.h already included, missing '#pragma once' in PoseWatch.h"
#endif
#define ENGINE_PoseWatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseWatchFolder *********************************************************
struct Z_Construct_UClass_UPoseWatchFolder_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPoseWatchFolder(); \
	friend struct ::Z_Construct_UClass_UPoseWatchFolder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseWatchFolder_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseWatchFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseWatchFolder_NoRegister) \
	DECLARE_SERIALIZER(UPoseWatchFolder)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatchFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchFolder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseWatchFolder(UPoseWatchFolder&&) = delete; \
	UPoseWatchFolder(const UPoseWatchFolder&) = delete; \
	ENGINE_API virtual ~UPoseWatchFolder();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseWatchFolder;

// ********** End Class UPoseWatchFolder ***********************************************************

// ********** Begin Class UPoseWatchElement ********************************************************
struct Z_Construct_UClass_UPoseWatchElement_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchElement_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseWatchElement(); \
	friend struct ::Z_Construct_UClass_UPoseWatchElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseWatchElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseWatchElement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseWatchElement_NoRegister) \
	DECLARE_SERIALIZER(UPoseWatchElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatchElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseWatchElement(UPoseWatchElement&&) = delete; \
	UPoseWatchElement(const UPoseWatchElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_130_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseWatchElement;

// ********** End Class UPoseWatchElement **********************************************************

// ********** Begin Class UPoseWatchPoseElement ****************************************************
struct Z_Construct_UClass_UPoseWatchPoseElement_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseWatchPoseElement_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseWatchPoseElement(); \
	friend struct ::Z_Construct_UClass_UPoseWatchPoseElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseWatchPoseElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseWatchPoseElement, UPoseWatchElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseWatchPoseElement_NoRegister) \
	DECLARE_SERIALIZER(UPoseWatchPoseElement)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseWatchPoseElement(UPoseWatchPoseElement&&) = delete; \
	UPoseWatchPoseElement(const UPoseWatchPoseElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatchPoseElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatchPoseElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatchPoseElement) \
	ENGINE_API virtual ~UPoseWatchPoseElement();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_228_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_231_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseWatchPoseElement;

// ********** End Class UPoseWatchPoseElement ******************************************************

// ********** Begin Class UPoseWatch ***************************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseWatch, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UPoseWatch_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUPoseWatch(); \
	friend struct ::Z_Construct_UClass_UPoseWatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseWatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseWatch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseWatch_NoRegister) \
	DECLARE_SERIALIZER(UPoseWatch) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseWatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseWatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseWatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseWatch); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseWatch(UPoseWatch&&) = delete; \
	UPoseWatch(const UPoseWatch&) = delete; \
	ENGINE_API virtual ~UPoseWatch();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_264_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseWatch;

// ********** End Class UPoseWatch *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
