// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/UVLayoutProperties.h"

#ifdef MODELINGOPERATORS_UVLayoutProperties_generated_h
#error "UVLayoutProperties.generated.h already included, missing '#pragma once' in UVLayoutProperties.h"
#endif
#define MODELINGOPERATORS_UVLayoutProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVLayoutProperties ******************************************************
struct Z_Construct_UClass_UUVLayoutProperties_Statics;
MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutProperties(); \
	friend struct ::Z_Construct_UClass_UUVLayoutProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELINGOPERATORS_API UClass* ::Z_Construct_UClass_UUVLayoutProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVLayoutProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingOperators"), Z_Construct_UClass_UUVLayoutProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVLayoutProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGOPERATORS_API UUVLayoutProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVLayoutProperties(UUVLayoutProperties&&) = delete; \
	UUVLayoutProperties(const UUVLayoutProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGOPERATORS_API, UUVLayoutProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutProperties) \
	MODELINGOPERATORS_API virtual ~UUVLayoutProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVLayoutProperties;

// ********** End Class UUVLayoutProperties ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h

// ********** Begin Enum EUVLayoutType *************************************************************
#define FOREACH_ENUM_EUVLAYOUTTYPE(op) \
	op(EUVLayoutType::Transform) \
	op(EUVLayoutType::Stack) \
	op(EUVLayoutType::Repack) \
	op(EUVLayoutType::Normalize) 

enum class EUVLayoutType;
template<> struct TIsUEnumClass<EUVLayoutType> { enum { Value = true }; };
template<> MODELINGOPERATORS_NON_ATTRIBUTED_API UEnum* StaticEnum<EUVLayoutType>();
// ********** End Enum EUVLayoutType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
