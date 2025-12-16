// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TechAudioToolsFloatMapping.h"

#ifdef TECHAUDIOTOOLS_TechAudioToolsFloatMapping_generated_h
#error "TechAudioToolsFloatMapping.generated.h already included, missing '#pragma once' in TechAudioToolsFloatMapping.h"
#endif
#define TECHAUDIOTOOLS_TechAudioToolsFloatMapping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETechAudioToolsFloatUnit : uint8;
enum class ETechAudioToolsMappingEndpoint : uint8;

// ********** Begin Class UTechAudioToolsFloatMapping **********************************************
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisplayMax); \
	DECLARE_FUNCTION(execGetDisplayMin); \
	DECLARE_FUNCTION(execGetSourceMax); \
	DECLARE_FUNCTION(execGetSourceMin); \
	DECLARE_FUNCTION(execGetUnits);


struct Z_Construct_UClass_UTechAudioToolsFloatMapping_Statics;
TECHAUDIOTOOLS_API UClass* Z_Construct_UClass_UTechAudioToolsFloatMapping_NoRegister();

#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTechAudioToolsFloatMapping(); \
	friend struct ::Z_Construct_UClass_UTechAudioToolsFloatMapping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TECHAUDIOTOOLS_API UClass* ::Z_Construct_UClass_UTechAudioToolsFloatMapping_NoRegister(); \
public: \
	DECLARE_CLASS2(UTechAudioToolsFloatMapping, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TechAudioTools"), Z_Construct_UClass_UTechAudioToolsFloatMapping_NoRegister) \
	DECLARE_SERIALIZER(UTechAudioToolsFloatMapping)


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TECHAUDIOTOOLS_API UTechAudioToolsFloatMapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTechAudioToolsFloatMapping(UTechAudioToolsFloatMapping&&) = delete; \
	UTechAudioToolsFloatMapping(const UTechAudioToolsFloatMapping&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TECHAUDIOTOOLS_API, UTechAudioToolsFloatMapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTechAudioToolsFloatMapping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTechAudioToolsFloatMapping) \
	TECHAUDIOTOOLS_API virtual ~UTechAudioToolsFloatMapping();


#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTechAudioToolsFloatMapping;

// ********** End Class UTechAudioToolsFloatMapping ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TechAudioTools_Source_TechAudioTools_Public_TechAudioToolsFloatMapping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
