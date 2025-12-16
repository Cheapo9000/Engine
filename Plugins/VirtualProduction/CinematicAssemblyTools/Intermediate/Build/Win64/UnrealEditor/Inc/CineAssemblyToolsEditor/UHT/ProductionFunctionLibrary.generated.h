// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProductionFunctionLibrary.h"

#ifdef CINEASSEMBLYTOOLSEDITOR_ProductionFunctionLibrary_generated_h
#error "ProductionFunctionLibrary.generated.h already included, missing '#pragma once' in ProductionFunctionLibrary.h"
#endif
#define CINEASSEMBLYTOOLSEDITOR_ProductionFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineAssembly;
class UCineAssemblySchema;
class UScriptStruct;
class UWorld;
struct FCinematicProduction;
struct FGuid;
struct FInstancedStruct;

// ********** Begin Class UProductionFunctionLibrary ***********************************************
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateAssembly); \
	DECLARE_FUNCTION(execSetProductionExtendedData); \
	DECLARE_FUNCTION(execGetProductionExtendedData); \
	DECLARE_FUNCTION(execRenameProduction); \
	DECLARE_FUNCTION(execDeleteProduction); \
	DECLARE_FUNCTION(execAddProduction); \
	DECLARE_FUNCTION(execIsActiveProduction); \
	DECLARE_FUNCTION(execClearActiveProduction); \
	DECLARE_FUNCTION(execSetActiveProductionByID); \
	DECLARE_FUNCTION(execSetActiveProduction); \
	DECLARE_FUNCTION(execGetActiveProduction); \
	DECLARE_FUNCTION(execGetProduction); \
	DECLARE_FUNCTION(execGetAllProductions);


struct Z_Construct_UClass_UProductionFunctionLibrary_Statics;
CINEASSEMBLYTOOLSEDITOR_API UClass* Z_Construct_UClass_UProductionFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProductionFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UProductionFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEASSEMBLYTOOLSEDITOR_API UClass* ::Z_Construct_UClass_UProductionFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UProductionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CineAssemblyToolsEditor"), Z_Construct_UClass_UProductionFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UProductionFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProductionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProductionFunctionLibrary(UProductionFunctionLibrary&&) = delete; \
	UProductionFunctionLibrary(const UProductionFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProductionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProductionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProductionFunctionLibrary) \
	NO_API virtual ~UProductionFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProductionFunctionLibrary;

// ********** End Class UProductionFunctionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyToolsEditor_Private_ProductionFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
