// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IGeometryMaskReadInterface.h"

#ifdef GEOMETRYMASK_IGeometryMaskReadInterface_generated_h
#error "IGeometryMaskReadInterface.generated.h already included, missing '#pragma once' in IGeometryMaskReadInterface.h"
#endif
#define GEOMETRYMASK_IGeometryMaskReadInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UGeometryMaskReadInterface *******************************************
struct Z_Construct_UClass_UGeometryMaskReadInterface_Statics;
GEOMETRYMASK_API UClass* Z_Construct_UClass_UGeometryMaskReadInterface_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYMASK_API UGeometryMaskReadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeometryMaskReadInterface(UGeometryMaskReadInterface&&) = delete; \
	UGeometryMaskReadInterface(const UGeometryMaskReadInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYMASK_API, UGeometryMaskReadInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryMaskReadInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryMaskReadInterface) \
	virtual ~UGeometryMaskReadInterface() = default;


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGeometryMaskReadInterface(); \
	friend struct ::Z_Construct_UClass_UGeometryMaskReadInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOMETRYMASK_API UClass* ::Z_Construct_UClass_UGeometryMaskReadInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeometryMaskReadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GeometryMask"), Z_Construct_UClass_UGeometryMaskReadInterface_NoRegister) \
	DECLARE_SERIALIZER(UGeometryMaskReadInterface)


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGeometryMaskReadInterface() {} \
public: \
	typedef UGeometryMaskReadInterface UClassType; \
	typedef IGeometryMaskReadInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeometryMaskReadInterface;

// ********** End Interface UGeometryMaskReadInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_GeometryMask_Source_GeometryMask_Public_IGeometryMaskReadInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
