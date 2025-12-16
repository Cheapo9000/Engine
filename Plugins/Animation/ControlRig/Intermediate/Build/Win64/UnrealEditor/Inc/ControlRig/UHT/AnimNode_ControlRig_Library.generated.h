// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_ControlRig_Library.h"

#ifdef CONTROLRIG_AnimNode_ControlRig_Library_generated_h
#error "AnimNode_ControlRig_Library.generated.h already included, missing '#pragma once' in AnimNode_ControlRig_Library.h"
#endif
#define CONTROLRIG_AnimNode_ControlRig_Library_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UControlRig;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FControlRigReference;

// ********** Begin ScriptStruct FControlRigReference **********************************************
struct Z_Construct_UScriptStruct_FControlRigReference_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FControlRigReference_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FControlRigReference;
// ********** End ScriptStruct FControlRigReference ************************************************

// ********** Begin Class UAnimNodeControlRigLibrary ***********************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetControlRigClass); \
	DECLARE_FUNCTION(execConvertToControlRigPure); \
	DECLARE_FUNCTION(execConvertToControlRig);


struct Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics;
CONTROLRIG_API UClass* Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNodeControlRigLibrary(); \
	friend struct ::Z_Construct_UClass_UAnimNodeControlRigLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIG_API UClass* ::Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimNodeControlRigLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), Z_Construct_UClass_UAnimNodeControlRigLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimNodeControlRigLibrary)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIG_API UAnimNodeControlRigLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimNodeControlRigLibrary(UAnimNodeControlRigLibrary&&) = delete; \
	UAnimNodeControlRigLibrary(const UAnimNodeControlRigLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIG_API, UAnimNodeControlRigLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNodeControlRigLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNodeControlRigLibrary) \
	CONTROLRIG_API virtual ~UAnimNodeControlRigLibrary();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_21_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimNodeControlRigLibrary;

// ********** End Class UAnimNodeControlRigLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_Library_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
