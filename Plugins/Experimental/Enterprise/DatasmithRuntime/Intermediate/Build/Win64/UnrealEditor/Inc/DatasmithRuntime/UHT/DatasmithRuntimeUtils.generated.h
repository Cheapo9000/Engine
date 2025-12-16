// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithRuntimeUtils.h"

#ifdef DATASMITHRUNTIME_DatasmithRuntimeUtils_generated_h
#error "DatasmithRuntimeUtils.generated.h already included, missing '#pragma once' in DatasmithRuntimeUtils.h"
#endif
#define DATASMITHRUNTIME_DatasmithRuntimeUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimeMesh *************************************************************
struct Z_Construct_UClass_URuntimeMesh_Statics;
DATASMITHRUNTIME_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMesh(); \
	friend struct ::Z_Construct_UClass_URuntimeMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHRUNTIME_API UClass* ::Z_Construct_UClass_URuntimeMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeMesh, UStaticMesh, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithRuntime"), Z_Construct_UClass_URuntimeMesh_NoRegister) \
	DECLARE_SERIALIZER(URuntimeMesh)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeMesh(URuntimeMesh&&) = delete; \
	URuntimeMesh(const URuntimeMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMesh) \
	NO_API virtual ~URuntimeMesh();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_41_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeMesh;

// ********** End Class URuntimeMesh ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
