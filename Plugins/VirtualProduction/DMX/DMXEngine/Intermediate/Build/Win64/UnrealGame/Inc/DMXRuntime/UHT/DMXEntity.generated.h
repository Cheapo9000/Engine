// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntity.h"

#ifdef DMXRUNTIME_DMXEntity_generated_h
#error "DMXEntity.generated.h already included, missing '#pragma once' in DMXEntity.h"
#endif
#define DMXRUNTIME_DMXEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXEntity ***************************************************************
struct Z_Construct_UClass_UDMXEntity_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntity(); \
	friend struct ::Z_Construct_UClass_UDMXEntity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXEntity_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEntity, UDMXObjectBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXEntity_NoRegister) \
	DECLARE_SERIALIZER(UDMXEntity)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEntity(UDMXEntity&&) = delete; \
	UDMXEntity(const UDMXEntity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntity); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMXEntity) \
	NO_API virtual ~UDMXEntity();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEntity;

// ********** End Class UDMXEntity *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
