// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"

#ifdef ENGINE_VisualLoggerDebugSnapshotInterface_generated_h
#error "VisualLoggerDebugSnapshotInterface.generated.h already included, missing '#pragma once' in VisualLoggerDebugSnapshotInterface.h"
#endif
#define ENGINE_VisualLoggerDebugSnapshotInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UVisualLoggerDebugSnapshotInterface **********************************
struct Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics;
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerDebugSnapshotInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerDebugSnapshotInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerDebugSnapshotInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVisualLoggerDebugSnapshotInterface(UVisualLoggerDebugSnapshotInterface&&) = delete; \
	UVisualLoggerDebugSnapshotInterface(const UVisualLoggerDebugSnapshotInterface&) = delete; \
	virtual ~UVisualLoggerDebugSnapshotInterface() = default;


#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVisualLoggerDebugSnapshotInterface(); \
	friend struct ::Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UVisualLoggerDebugSnapshotInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister) \
	DECLARE_SERIALIZER(UVisualLoggerDebugSnapshotInterface)


#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVisualLoggerDebugSnapshotInterface() {} \
public: \
	typedef UVisualLoggerDebugSnapshotInterface UClassType; \
	typedef IVisualLoggerDebugSnapshotInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVisualLoggerDebugSnapshotInterface;

// ********** End Interface UVisualLoggerDebugSnapshotInterface ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
