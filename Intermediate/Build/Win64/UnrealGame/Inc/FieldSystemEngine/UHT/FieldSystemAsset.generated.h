// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Field/FieldSystemAsset.h"

#ifdef FIELDSYSTEMENGINE_FieldSystemAsset_generated_h
#error "FieldSystemAsset.generated.h already included, missing '#pragma once' in FieldSystemAsset.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFieldSystem *************************************************************
#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFieldSystem, FIELDSYSTEMENGINE_API)


struct Z_Construct_UClass_UFieldSystem_Statics;
FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystem_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystem(); \
	friend struct ::Z_Construct_UClass_UFieldSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIELDSYSTEMENGINE_API UClass* ::Z_Construct_UClass_UFieldSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFieldSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), Z_Construct_UClass_UFieldSystem_NoRegister) \
	DECLARE_SERIALIZER(UFieldSystem) \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFieldSystem(UFieldSystem&&) = delete; \
	UFieldSystem(const UFieldSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FIELDSYSTEMENGINE_API, UFieldSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFieldSystem)


#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_19_PROLOG
#define FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFieldSystem;

// ********** End Class UFieldSystem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
