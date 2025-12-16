// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraMeshRendererProperties.h"

#ifdef NIAGARA_NiagaraMeshRendererProperties_generated_h
#error "NiagaraMeshRendererProperties.generated.h already included, missing '#pragma once' in NiagaraMeshRendererProperties.h"
#endif
#define NIAGARA_NiagaraMeshRendererProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNiagaraMeshMICOverride *******************************************
struct Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraMeshMICOverride;
// ********** End ScriptStruct FNiagaraMeshMICOverride *********************************************

// ********** Begin ScriptStruct FNiagaraMeshMaterialOverride **************************************
struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics;
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


struct FNiagaraMeshMaterialOverride;
// ********** End ScriptStruct FNiagaraMeshMaterialOverride ****************************************

// ********** Begin Class UNiagaraMeshRendererProperties *******************************************
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties, NIAGARA_API)


struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics;
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraMeshRendererProperties(); \
	friend struct ::Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NIAGARA_API UClass* ::Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UNiagaraMeshRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister) \
	DECLARE_SERIALIZER(UNiagaraMeshRendererProperties) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UNiagaraMeshRendererProperties*>(this); }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNiagaraMeshRendererProperties(UNiagaraMeshRendererProperties&&) = delete; \
	UNiagaraMeshRendererProperties(const UNiagaraMeshRendererProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraMeshRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraMeshRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraMeshRendererProperties) \
	NIAGARA_API virtual ~UNiagaraMeshRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_125_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_129_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNiagaraMeshRendererProperties;

// ********** End Class UNiagaraMeshRendererProperties *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h

// ********** Begin Enum ENiagaraMeshFacingMode ****************************************************
#define FOREACH_ENUM_ENIAGARAMESHFACINGMODE(op) \
	op(ENiagaraMeshFacingMode::Default) \
	op(ENiagaraMeshFacingMode::Velocity) \
	op(ENiagaraMeshFacingMode::CameraPosition) \
	op(ENiagaraMeshFacingMode::CameraPlane) 

enum class ENiagaraMeshFacingMode : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshFacingMode> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMeshFacingMode>();
// ********** End Enum ENiagaraMeshFacingMode ******************************************************

// ********** Begin Enum ENiagaraMeshLockedAxisSpace ***********************************************
#define FOREACH_ENUM_ENIAGARAMESHLOCKEDAXISSPACE(op) \
	op(ENiagaraMeshLockedAxisSpace::Simulation) \
	op(ENiagaraMeshLockedAxisSpace::World) \
	op(ENiagaraMeshLockedAxisSpace::Local) 

enum class ENiagaraMeshLockedAxisSpace : uint8;
template<> struct TIsUEnumClass<ENiagaraMeshLockedAxisSpace> { enum { Value = true }; };
template<> NIAGARA_NON_ATTRIBUTED_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>();
// ********** End Enum ENiagaraMeshLockedAxisSpace *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
