// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGeometryCollectionOutliner.h"

#ifdef FRACTUREEDITOR_SGeometryCollectionOutliner_generated_h
#error "SGeometryCollectionOutliner.generated.h already included, missing '#pragma once' in SGeometryCollectionOutliner.h"
#endif
#define FRACTUREEDITOR_SGeometryCollectionOutliner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOutlinerSettings ********************************************************
struct Z_Construct_UClass_UOutlinerSettings_Statics;
FRACTUREEDITOR_API UClass* Z_Construct_UClass_UOutlinerSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlinerSettings(); \
	friend struct ::Z_Construct_UClass_UOutlinerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FRACTUREEDITOR_API UClass* ::Z_Construct_UClass_UOutlinerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOutlinerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), Z_Construct_UClass_UOutlinerSettings_NoRegister) \
	DECLARE_SERIALIZER(UOutlinerSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOutlinerSettings(UOutlinerSettings&&) = delete; \
	UOutlinerSettings(const UOutlinerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerSettings) \
	NO_API virtual ~UOutlinerSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_43_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOutlinerSettings;

// ********** End Class UOutlinerSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h

// ********** Begin Enum EOutlinerItemNameEnum *****************************************************
#define FOREACH_ENUM_EOUTLINERITEMNAMEENUM(op) \
	op(EOutlinerItemNameEnum::BoneName) \
	op(EOutlinerItemNameEnum::BoneIndex) 

enum class EOutlinerItemNameEnum : uint8;
template<> struct TIsUEnumClass<EOutlinerItemNameEnum> { enum { Value = true }; };
template<> FRACTUREEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOutlinerItemNameEnum>();
// ********** End Enum EOutlinerItemNameEnum *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
