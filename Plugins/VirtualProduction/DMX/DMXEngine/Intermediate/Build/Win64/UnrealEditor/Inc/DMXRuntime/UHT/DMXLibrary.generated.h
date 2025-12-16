// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXLibrary.h"

#ifdef DMXRUNTIME_DMXLibrary_generated_h
#error "DMXLibrary.generated.h already included, missing '#pragma once' in DMXLibrary.h"
#endif
#define DMXRUNTIME_DMXLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDMXLibraryPortReferences *****************************************
struct Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXLibraryPortReferences;
// ********** End ScriptStruct FDMXLibraryPortReferences *******************************************

// ********** Begin Class UDMXLibrary **************************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXLibrary, NO_API)


struct Z_Construct_UClass_UDMXLibrary_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXLibrary(); \
	friend struct ::Z_Construct_UClass_UDMXLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXLibrary, UDMXObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDMXLibrary) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DMXEditor");} \



#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXLibrary(UDMXLibrary&&) = delete; \
	UDMXLibrary(const UDMXLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXLibrary) \
	NO_API virtual ~UDMXLibrary();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_49_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXLibrary;

// ********** End Class UDMXLibrary ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
