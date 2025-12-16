// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/RenderGridRemoteControlUtils.h"

#ifdef RENDERGRID_RenderGridRemoteControlUtils_generated_h
#error "RenderGridRemoteControlUtils.generated.h already included, missing '#pragma once' in RenderGridRemoteControlUtils.h"
#endif
#define RENDERGRID_RenderGridRemoteControlUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
struct FColor;
struct FInstancedStruct;
struct FLinearColor;

// ********** Begin Class URenderGridRemoteControlUtils ********************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLinearColorToJson); \
	DECLARE_FUNCTION(execColorToJson); \
	DECLARE_FUNCTION(execTransformToJson); \
	DECLARE_FUNCTION(execRotatorToJson); \
	DECLARE_FUNCTION(execVectorToJson); \
	DECLARE_FUNCTION(execStructToJson); \
	DECLARE_FUNCTION(execClassReferenceToJson); \
	DECLARE_FUNCTION(execObjectReferenceToJson); \
	DECLARE_FUNCTION(execTextToJson); \
	DECLARE_FUNCTION(execNameToJson); \
	DECLARE_FUNCTION(execStringToJson); \
	DECLARE_FUNCTION(execBooleanToJson); \
	DECLARE_FUNCTION(execFloatToJson); \
	DECLARE_FUNCTION(execInt64ToJson); \
	DECLARE_FUNCTION(execInt32ToJson); \
	DECLARE_FUNCTION(execByteToJson); \
	DECLARE_FUNCTION(execParseJsonAsLinearColor); \
	DECLARE_FUNCTION(execParseJsonAsColor); \
	DECLARE_FUNCTION(execParseJsonAsTransform); \
	DECLARE_FUNCTION(execParseJsonAsRotator); \
	DECLARE_FUNCTION(execParseJsonAsVector); \
	DECLARE_FUNCTION(execParseJsonAsStruct); \
	DECLARE_FUNCTION(execParseJsonAsClassReference); \
	DECLARE_FUNCTION(execParseJsonAsObjectReference); \
	DECLARE_FUNCTION(execParseJsonAsText); \
	DECLARE_FUNCTION(execParseJsonAsName); \
	DECLARE_FUNCTION(execParseJsonAsString); \
	DECLARE_FUNCTION(execParseJsonAsBoolean); \
	DECLARE_FUNCTION(execParseJsonAsFloat); \
	DECLARE_FUNCTION(execParseJsonAsInt64); \
	DECLARE_FUNCTION(execParseJsonAsInt32); \
	DECLARE_FUNCTION(execParseJsonAsByte);


struct Z_Construct_UClass_URenderGridRemoteControlUtils_Statics;
RENDERGRID_API UClass* Z_Construct_UClass_URenderGridRemoteControlUtils_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURenderGridRemoteControlUtils(); \
	friend struct ::Z_Construct_UClass_URenderGridRemoteControlUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRID_API UClass* ::Z_Construct_UClass_URenderGridRemoteControlUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridRemoteControlUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), Z_Construct_UClass_URenderGridRemoteControlUtils_NoRegister) \
	DECLARE_SERIALIZER(URenderGridRemoteControlUtils)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridRemoteControlUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridRemoteControlUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridRemoteControlUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridRemoteControlUtils); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridRemoteControlUtils(URenderGridRemoteControlUtils&&) = delete; \
	URenderGridRemoteControlUtils(const URenderGridRemoteControlUtils&) = delete; \
	NO_API virtual ~URenderGridRemoteControlUtils();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridRemoteControlUtils;

// ********** End Class URenderGridRemoteControlUtils **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_Utils_RenderGridRemoteControlUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
