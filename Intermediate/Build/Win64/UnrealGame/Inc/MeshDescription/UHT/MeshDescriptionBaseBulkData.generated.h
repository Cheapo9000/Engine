// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshDescriptionBaseBulkData.h"

#ifdef MESHDESCRIPTION_MeshDescriptionBaseBulkData_generated_h
#error "MeshDescriptionBaseBulkData.generated.h already included, missing '#pragma once' in MeshDescriptionBaseBulkData.h"
#endif
#define MESHDESCRIPTION_MeshDescriptionBaseBulkData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshDescriptionBaseBulkData *********************************************
#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMeshDescriptionBaseBulkData, MESHDESCRIPTION_API)


struct Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics;
MESHDESCRIPTION_API UClass* Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister();

#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDescriptionBaseBulkData(); \
	friend struct ::Z_Construct_UClass_UMeshDescriptionBaseBulkData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHDESCRIPTION_API UClass* ::Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDescriptionBaseBulkData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshDescription"), Z_Construct_UClass_UMeshDescriptionBaseBulkData_NoRegister) \
	DECLARE_SERIALIZER(UMeshDescriptionBaseBulkData) \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDescriptionBaseBulkData(UMeshDescriptionBaseBulkData&&) = delete; \
	UMeshDescriptionBaseBulkData(const UMeshDescriptionBaseBulkData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHDESCRIPTION_API, UMeshDescriptionBaseBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDescriptionBaseBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshDescriptionBaseBulkData) \
	MESHDESCRIPTION_API virtual ~UMeshDescriptionBaseBulkData();


#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_23_PROLOG
#define FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDescriptionBaseBulkData;

// ********** End Class UMeshDescriptionBaseBulkData ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MeshDescription_Public_MeshDescriptionBaseBulkData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
