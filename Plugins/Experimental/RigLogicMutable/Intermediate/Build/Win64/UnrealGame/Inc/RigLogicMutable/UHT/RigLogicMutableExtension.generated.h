// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigLogicMutableExtension.h"

#ifdef RIGLOGICMUTABLE_RigLogicMutableExtension_generated_h
#error "RigLogicMutableExtension.generated.h already included, missing '#pragma once' in RigLogicMutableExtension.h"
#endif
#define RIGLOGICMUTABLE_RigLogicMutableExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDNAPinData *******************************************************
struct Z_Construct_UScriptStruct_FDNAPinData_Statics;
#define FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDNAPinData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FDNAPinData;
// ********** End ScriptStruct FDNAPinData *********************************************************

// ********** Begin Class URigLogicMutableExtension ************************************************
struct Z_Construct_UClass_URigLogicMutableExtension_Statics;
RIGLOGICMUTABLE_API UClass* Z_Construct_UClass_URigLogicMutableExtension_NoRegister();

#define FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigLogicMutableExtension(); \
	friend struct ::Z_Construct_UClass_URigLogicMutableExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGLOGICMUTABLE_API UClass* ::Z_Construct_UClass_URigLogicMutableExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(URigLogicMutableExtension, UCustomizableObjectExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigLogicMutable"), Z_Construct_UClass_URigLogicMutableExtension_NoRegister) \
	DECLARE_SERIALIZER(URigLogicMutableExtension)


#define FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGLOGICMUTABLE_API URigLogicMutableExtension(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigLogicMutableExtension(URigLogicMutableExtension&&) = delete; \
	URigLogicMutableExtension(const URigLogicMutableExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGLOGICMUTABLE_API, URigLogicMutableExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigLogicMutableExtension); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigLogicMutableExtension) \
	RIGLOGICMUTABLE_API virtual ~URigLogicMutableExtension();


#define FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_64_PROLOG
#define FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigLogicMutableExtension;

// ********** End Class URigLogicMutableExtension **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RigLogicMutable_Source_RigLogicMutable_Public_RigLogicMutableExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
