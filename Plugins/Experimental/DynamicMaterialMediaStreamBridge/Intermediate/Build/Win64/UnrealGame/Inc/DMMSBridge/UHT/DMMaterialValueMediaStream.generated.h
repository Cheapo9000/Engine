// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMMaterialValueMediaStream.h"

#ifdef DYNAMICMATERIALMEDIASTREAMBRIDGE_DMMaterialValueMediaStream_generated_h
#error "DMMaterialValueMediaStream.generated.h already included, missing '#pragma once' in DMMaterialValueMediaStream.h"
#endif
#define DYNAMICMATERIALMEDIASTREAMBRIDGE_DMMaterialValueMediaStream_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaStream;

// ********** Begin Class UDMMaterialValueMediaStream **********************************************
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMediaStream);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execOnPlayerChanged); \
	DECLARE_FUNCTION(execOnSourceChanged);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialValueMediaStream_Statics;
DYNAMICMATERIALMEDIASTREAMBRIDGE_API UClass* Z_Construct_UClass_UDMMaterialValueMediaStream_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueMediaStream(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueMediaStream_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALMEDIASTREAMBRIDGE_API UClass* ::Z_Construct_UClass_UDMMaterialValueMediaStream_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueMediaStream, UDMMaterialValueTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialMediaStreamBridge"), Z_Construct_UClass_UDMMaterialValueMediaStream_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueMediaStream)


#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueMediaStream(UDMMaterialValueMediaStream&&) = delete; \
	UDMMaterialValueMediaStream(const UDMMaterialValueMediaStream&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALMEDIASTREAMBRIDGE_API, UDMMaterialValueMediaStream); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueMediaStream); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueMediaStream)


#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueMediaStream;

// ********** End Class UDMMaterialValueMediaStream ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStream_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
