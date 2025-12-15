// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/Serialization/IrisObjectReferencePackageMap.h"

#ifdef IRISCORE_IrisObjectReferencePackageMap_generated_h
#error "IrisObjectReferencePackageMap.generated.h already included, missing '#pragma once' in IrisObjectReferencePackageMap.h"
#endif
#define IRISCORE_IrisObjectReferencePackageMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIrisObjectReferencePackageMap *******************************************
struct Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIrisObjectReferencePackageMap(); \
	friend struct ::Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister(); \
public: \
	DECLARE_CLASS2(UIrisObjectReferencePackageMap, UPackageMap, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister) \
	DECLARE_SERIALIZER(UIrisObjectReferencePackageMap)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UIrisObjectReferencePackageMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIrisObjectReferencePackageMap(UIrisObjectReferencePackageMap&&) = delete; \
	UIrisObjectReferencePackageMap(const UIrisObjectReferencePackageMap&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UIrisObjectReferencePackageMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIrisObjectReferencePackageMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIrisObjectReferencePackageMap) \
	IRISCORE_API virtual ~UIrisObjectReferencePackageMap();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_70_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_74_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIrisObjectReferencePackageMap;

// ********** End Class UIrisObjectReferencePackageMap *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_Serialization_IrisObjectReferencePackageMap_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
