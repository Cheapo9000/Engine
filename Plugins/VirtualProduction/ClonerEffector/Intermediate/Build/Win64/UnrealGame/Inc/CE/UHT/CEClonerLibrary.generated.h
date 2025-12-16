// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/CEClonerLibrary.h"

#ifdef CLONEREFFECTOR_CEClonerLibrary_generated_h
#error "CEClonerLibrary.generated.h already included, missing '#pragma once' in CEClonerLibrary.h"
#endif
#define CLONEREFFECTOR_CEClonerLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEClonerComponent;
class UCEClonerExtensionBase;
class UCEClonerLayoutBase;
class UClass;
class UObject;
struct FLatentActionInfo;

// ********** Begin Class UCEClonerLibrary *********************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetClonerLayoutByName); \
	DECLARE_FUNCTION(execSetClonerLayoutByClass); \
	DECLARE_FUNCTION(execGetClonerLayoutClass); \
	DECLARE_FUNCTION(execGetClonerLayoutNames); \
	DECLARE_FUNCTION(execGetClonerLayoutName); \
	DECLARE_FUNCTION(execGetClonerExtensionClasses); \
	DECLARE_FUNCTION(execGetClonerLayoutClasses);


struct Z_Construct_UClass_UCEClonerLibrary_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLibrary(); \
	friend struct ::Z_Construct_UClass_UCEClonerLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerLibrary)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLONEREFFECTOR_API UCEClonerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerLibrary(UCEClonerLibrary&&) = delete; \
	UCEClonerLibrary(const UCEClonerLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEClonerLibrary) \
	CLONEREFFECTOR_API virtual ~UCEClonerLibrary();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerLibrary;

// ********** End Class UCEClonerLibrary ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
