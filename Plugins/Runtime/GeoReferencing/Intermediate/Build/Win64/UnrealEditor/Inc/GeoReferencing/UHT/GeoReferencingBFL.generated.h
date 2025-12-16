// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoReferencingBFL.h"

#ifdef GEOREFERENCING_GeoReferencingBFL_generated_h
#error "GeoReferencingBFL.generated.h already included, missing '#pragma once' in GeoReferencingBFL.h"
#endif
#define GEOREFERENCING_GeoReferencingBFL_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGeoReferencingBFL *******************************************************
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToSeparateTexts); \
	DECLARE_FUNCTION(execToCompactText); \
	DECLARE_FUNCTION(execToFullText);


struct Z_Construct_UClass_UGeoReferencingBFL_Statics;
GEOREFERENCING_API UClass* Z_Construct_UClass_UGeoReferencingBFL_NoRegister();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeoReferencingBFL(); \
	friend struct ::Z_Construct_UClass_UGeoReferencingBFL_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GEOREFERENCING_API UClass* ::Z_Construct_UClass_UGeoReferencingBFL_NoRegister(); \
public: \
	DECLARE_CLASS2(UGeoReferencingBFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencing"), Z_Construct_UClass_UGeoReferencingBFL_NoRegister) \
	DECLARE_SERIALIZER(UGeoReferencingBFL)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeoReferencingBFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGeoReferencingBFL(UGeoReferencingBFL&&) = delete; \
	UGeoReferencingBFL(const UGeoReferencingBFL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeoReferencingBFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeoReferencingBFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeoReferencingBFL) \
	NO_API virtual ~UGeoReferencingBFL();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGeoReferencingBFL;

// ********** End Class UGeoReferencingBFL *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingBFL_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
