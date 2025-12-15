// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model.h"

#ifdef ENGINE_Model_generated_h
#error "Model.generated.h already included, missing '#pragma once' in Model.h"
#endif
#define ENGINE_Model_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBspSurf **********************************************************
struct Z_Construct_UScriptStruct_FBspSurf_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Model_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBspSurf_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FBspSurf;
// ********** End ScriptStruct FBspSurf ************************************************************

// ********** Begin Class UModel *******************************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Model_h_402_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UModel, ENGINE_API)


struct Z_Construct_UClass_UModel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UModel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Model_h_402_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModel(); \
	friend struct ::Z_Construct_UClass_UModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UModel_NoRegister) \
	DECLARE_SERIALIZER(UModel) \
	FID_Engine_Source_Runtime_Engine_Public_Model_h_402_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Model_h_402_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModel(UModel&&) = delete; \
	UModel(const UModel&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModel) \
	ENGINE_API virtual ~UModel();


#define FID_Engine_Source_Runtime_Engine_Public_Model_h_399_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Model_h_402_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Model_h_402_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Model_h_402_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModel;

// ********** End Class UModel *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Model_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
