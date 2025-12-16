// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNAImporterLibrary.h"

#ifdef RIGLOGICEDITOR_DNAImporterLibrary_generated_h
#error "DNAImporterLibrary.generated.h already included, missing '#pragma once' in DNAImporterLibrary.h"
#endif
#define RIGLOGICEDITOR_DNAImporterLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UDNAImporterLibrary ******************************************************
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execImportSkeletalMeshDNA);


struct Z_Construct_UClass_UDNAImporterLibrary_Statics;
RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAImporterLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDNAImporterLibrary(); \
	friend struct ::Z_Construct_UClass_UDNAImporterLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICEDITOR_API UClass* ::Z_Construct_UClass_UDNAImporterLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDNAImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicEditor"), Z_Construct_UClass_UDNAImporterLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDNAImporterLibrary)


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGLOGICEDITOR_API UDNAImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDNAImporterLibrary(UDNAImporterLibrary&&) = delete; \
	UDNAImporterLibrary(const UDNAImporterLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICEDITOR_API, UDNAImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDNAImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDNAImporterLibrary) \
	RIGLOGICEDITOR_API virtual ~UDNAImporterLibrary();


#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDNAImporterLibrary;

// ********** End Class UDNAImporterLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAImporterLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
