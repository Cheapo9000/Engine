// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineAssembly.h"

#ifdef CINEASSEMBLYTOOLS_CineAssembly_generated_h
#error "CineAssembly.generated.h already included, missing '#pragma once' in CineAssembly.h"
#endif
#define CINEASSEMBLYTOOLS_CineAssembly_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineAssembly;
class UWorld;
struct FGuid;
struct FTemplateString;

// ********** Begin Class UCineAssembly ************************************************************
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMetadataAsFloat); \
	DECLARE_FUNCTION(execGetMetadataAsInteger); \
	DECLARE_FUNCTION(execGetMetadataAsBool); \
	DECLARE_FUNCTION(execGetMetadataAsTokenString); \
	DECLARE_FUNCTION(execGetMetadataAsString); \
	DECLARE_FUNCTION(execSetMetadataAsFloat); \
	DECLARE_FUNCTION(execSetMetadataAsInteger); \
	DECLARE_FUNCTION(execSetMetadataAsBool); \
	DECLARE_FUNCTION(execSetMetadataAsTokenString); \
	DECLARE_FUNCTION(execSetMetadataAsString); \
	DECLARE_FUNCTION(execGetFullMetadataString); \
	DECLARE_FUNCTION(execSetParentAssembly); \
	DECLARE_FUNCTION(execGetParentAssembly); \
	DECLARE_FUNCTION(execGetProductionName); \
	DECLARE_FUNCTION(execGetProductionID); \
	DECLARE_FUNCTION(execAppendToNoteText); \
	DECLARE_FUNCTION(execSetNoteText); \
	DECLARE_FUNCTION(execGetNoteText); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execGetLevel);


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetTimeCreatedString); \
	DECLARE_FUNCTION(execGetDateCreatedString); \
	DECLARE_FUNCTION(execGetCreatedString); \
	DECLARE_FUNCTION(execSetAuthor); \
	DECLARE_FUNCTION(execGetAuthor);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCineAssembly, CINEASSEMBLYTOOLS_API)


struct Z_Construct_UClass_UCineAssembly_Statics;
CINEASSEMBLYTOOLS_API UClass* Z_Construct_UClass_UCineAssembly_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineAssembly(); \
	friend struct ::Z_Construct_UClass_UCineAssembly_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CINEASSEMBLYTOOLS_API UClass* ::Z_Construct_UClass_UCineAssembly_NoRegister(); \
public: \
	DECLARE_CLASS2(UCineAssembly, ULevelSequence, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineAssemblyTools"), Z_Construct_UClass_UCineAssembly_NoRegister) \
	DECLARE_SERIALIZER(UCineAssembly) \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCineAssembly(UCineAssembly&&) = delete; \
	UCineAssembly(const UCineAssembly&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEASSEMBLYTOOLS_API, UCineAssembly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineAssembly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineAssembly) \
	CINEASSEMBLYTOOLS_API virtual ~UCineAssembly();


#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCineAssembly;

// ********** End Class UCineAssembly **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CinematicAssemblyTools_Source_CineAssemblyTools_Public_CineAssembly_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
