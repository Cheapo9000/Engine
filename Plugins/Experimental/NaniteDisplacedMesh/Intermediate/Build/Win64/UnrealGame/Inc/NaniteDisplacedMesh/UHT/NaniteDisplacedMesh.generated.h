// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NaniteDisplacedMesh.h"

#ifdef NANITEDISPLACEDMESH_NaniteDisplacedMesh_generated_h
#error "NaniteDisplacedMesh.generated.h already included, missing '#pragma once' in NaniteDisplacedMesh.h"
#endif
#define NANITEDISPLACEDMESH_NaniteDisplacedMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNaniteDisplacedMeshDisplacementMap *******************************
struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics;
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteDisplacedMeshDisplacementMap_Statics; \
	NANITEDISPLACEDMESH_API static class UScriptStruct* StaticStruct();


struct FNaniteDisplacedMeshDisplacementMap;
// ********** End ScriptStruct FNaniteDisplacedMeshDisplacementMap *********************************

// ********** Begin ScriptStruct FNaniteDisplacedMeshParams ****************************************
struct Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics;
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNaniteDisplacedMeshParams_Statics; \
	NANITEDISPLACEDMESH_API static class UScriptStruct* StaticStruct();


struct FNaniteDisplacedMeshParams;
// ********** End ScriptStruct FNaniteDisplacedMeshParams ******************************************

// ********** Begin Class UNaniteDisplacedMesh *****************************************************
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNaniteDisplacedMesh, NANITEDISPLACEDMESH_API)


struct Z_Construct_UClass_UNaniteDisplacedMesh_Statics;
NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister();

#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNaniteDisplacedMesh(); \
	friend struct ::Z_Construct_UClass_UNaniteDisplacedMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NANITEDISPLACEDMESH_API UClass* ::Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UNaniteDisplacedMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NaniteDisplacedMesh"), Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister) \
	DECLARE_SERIALIZER(UNaniteDisplacedMesh) \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UNaniteDisplacedMesh*>(this); }


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNaniteDisplacedMesh(UNaniteDisplacedMesh&&) = delete; \
	UNaniteDisplacedMesh(const UNaniteDisplacedMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NANITEDISPLACEDMESH_API, UNaniteDisplacedMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNaniteDisplacedMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNaniteDisplacedMesh) \
	NANITEDISPLACEDMESH_API virtual ~UNaniteDisplacedMesh();


#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_197_PROLOG
#define FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNaniteDisplacedMesh;

// ********** End Class UNaniteDisplacedMesh *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
