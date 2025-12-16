// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMLink.h"

#ifdef RIGVMDEVELOPER_RigVMLink_generated_h
#error "RigVMLink.generated.h already included, missing '#pragma once' in RigVMLink.h"
#endif
#define RIGVMDEVELOPER_RigVMLink_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMGraph;
class URigVMNode;
class URigVMPin;

// ********** Begin Class URigVMLink ***************************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPinPathRepresentation); \
	DECLARE_FUNCTION(execGetOppositePin); \
	DECLARE_FUNCTION(execGetTargetNode); \
	DECLARE_FUNCTION(execGetSourceNode); \
	DECLARE_FUNCTION(execGetTargetPin); \
	DECLARE_FUNCTION(execGetSourcePin); \
	DECLARE_FUNCTION(execGetGraphDepth); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetLinkIndex);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMLink, RIGVMDEVELOPER_API)


struct Z_Construct_UClass_URigVMLink_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLink_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMLink(); \
	friend struct ::Z_Construct_UClass_URigVMLink_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMLink_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMLink, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMLink_NoRegister) \
	DECLARE_SERIALIZER(URigVMLink) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMLink(URigVMLink&&) = delete; \
	URigVMLink(const URigVMLink&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMLink); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMLink); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMLink) \
	RIGVMDEVELOPER_API virtual ~URigVMLink();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMLink;

// ********** End Class URigVMLink *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMLink_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
