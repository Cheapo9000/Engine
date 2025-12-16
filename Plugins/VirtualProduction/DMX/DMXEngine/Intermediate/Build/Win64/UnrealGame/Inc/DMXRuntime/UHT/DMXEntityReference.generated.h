// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntityReference.h"

#ifdef DMXRUNTIME_DMXEntityReference_generated_h
#error "DMXEntityReference.generated.h already included, missing '#pragma once' in DMXEntityReference.h"
#endif
#define DMXRUNTIME_DMXEntityReference_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
struct FDMXEntityControllerRef;
struct FDMXEntityFixturePatchRef;
struct FDMXEntityFixtureTypeRef;

// ********** Begin ScriptStruct FDMXEntityReference ***********************************************
struct Z_Construct_UScriptStruct_FDMXEntityReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityReference_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDMXEntityReference;
// ********** End ScriptStruct FDMXEntityReference *************************************************

// ********** Begin ScriptStruct FDMXEntityControllerRef *******************************************
struct Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


struct FDMXEntityControllerRef;
// ********** End ScriptStruct FDMXEntityControllerRef *********************************************

// ********** Begin ScriptStruct FDMXEntityFixtureTypeRef ******************************************
struct Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


struct FDMXEntityFixtureTypeRef;
// ********** End ScriptStruct FDMXEntityFixtureTypeRef ********************************************

// ********** Begin ScriptStruct FDMXEntityFixturePatchRef *****************************************
struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


struct FDMXEntityFixturePatchRef;
// ********** End ScriptStruct FDMXEntityFixturePatchRef *******************************************

// ********** Begin Class UDMXEntityReferenceConversions *******************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_FixturePatchObjToRef); \
	DECLARE_FUNCTION(execConv_FixtureTypeObjToRef); \
	DECLARE_FUNCTION(execConv_ControllerObjToRef); \
	DECLARE_FUNCTION(execConv_FixturePatchRefToObj); \
	DECLARE_FUNCTION(execConv_FixtureTypeRefToObj); \
	DECLARE_FUNCTION(execConv_ControllerRefToObj);


struct Z_Construct_UClass_UDMXEntityReferenceConversions_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityReferenceConversions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntityReferenceConversions(); \
	friend struct ::Z_Construct_UClass_UDMXEntityReferenceConversions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UDMXEntityReferenceConversions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXEntityReferenceConversions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UDMXEntityReferenceConversions_NoRegister) \
	DECLARE_SERIALIZER(UDMXEntityReferenceConversions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXEntityReferenceConversions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXEntityReferenceConversions(UDMXEntityReferenceConversions&&) = delete; \
	UDMXEntityReferenceConversions(const UDMXEntityReferenceConversions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityReferenceConversions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityReferenceConversions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXEntityReferenceConversions) \
	NO_API virtual ~UDMXEntityReferenceConversions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_145_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXEntityReferenceConversions;

// ********** End Class UDMXEntityReferenceConversions *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
