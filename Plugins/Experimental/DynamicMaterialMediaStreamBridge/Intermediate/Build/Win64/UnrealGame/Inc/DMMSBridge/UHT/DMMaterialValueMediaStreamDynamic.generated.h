// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMMaterialValueMediaStreamDynamic.h"

#ifdef DYNAMICMATERIALMEDIASTREAMBRIDGE_DMMaterialValueMediaStreamDynamic_generated_h
#error "DMMaterialValueMediaStreamDynamic.generated.h already included, missing '#pragma once' in DMMaterialValueMediaStreamDynamic.h"
#endif
#define DYNAMICMATERIALMEDIASTREAMBRIDGE_DMMaterialValueMediaStreamDynamic_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaStream;

// ********** Begin Class UDMMaterialValueMediaStreamDynamic ***************************************
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMediaStream);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execOnPlayerChanged); \
	DECLARE_FUNCTION(execOnSourceChanged);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UDMMaterialValueMediaStreamDynamic_Statics;
DYNAMICMATERIALMEDIASTREAMBRIDGE_API UClass* Z_Construct_UClass_UDMMaterialValueMediaStreamDynamic_NoRegister();

#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMMaterialValueMediaStreamDynamic(); \
	friend struct ::Z_Construct_UClass_UDMMaterialValueMediaStreamDynamic_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DYNAMICMATERIALMEDIASTREAMBRIDGE_API UClass* ::Z_Construct_UClass_UDMMaterialValueMediaStreamDynamic_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMMaterialValueMediaStreamDynamic, UDMMaterialValueTextureDynamic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DynamicMaterialMediaStreamBridge"), Z_Construct_UClass_UDMMaterialValueMediaStreamDynamic_NoRegister) \
	DECLARE_SERIALIZER(UDMMaterialValueMediaStreamDynamic)


#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMMaterialValueMediaStreamDynamic(UDMMaterialValueMediaStreamDynamic&&) = delete; \
	UDMMaterialValueMediaStreamDynamic(const UDMMaterialValueMediaStreamDynamic&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DYNAMICMATERIALMEDIASTREAMBRIDGE_API, UDMMaterialValueMediaStreamDynamic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMMaterialValueMediaStreamDynamic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMMaterialValueMediaStreamDynamic) \
	DYNAMICMATERIALMEDIASTREAMBRIDGE_API virtual ~UDMMaterialValueMediaStreamDynamic();


#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMMaterialValueMediaStreamDynamic;

// ********** End Class UDMMaterialValueMediaStreamDynamic *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterialMediaStreamBridge_Source_DynamicMaterialMediaStreamBridge_Public_DMMaterialValueMediaStreamDynamic_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
