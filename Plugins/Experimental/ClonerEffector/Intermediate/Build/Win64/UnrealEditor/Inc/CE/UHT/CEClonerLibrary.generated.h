// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/CEClonerLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEClonerComponent;
class UCEClonerExtensionBase;
class UCEClonerLayoutBase;
class UObject;
struct FLatentActionInfo;
#ifdef CLONEREFFECTOR_CEClonerLibrary_generated_h
#error "CEClonerLibrary.generated.h already included, missing '#pragma once' in CEClonerLibrary.h"
#endif
#define CLONEREFFECTOR_CEClonerLibrary_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetClonerLayoutByName); \
	DECLARE_FUNCTION(execSetClonerLayoutByClass); \
	DECLARE_FUNCTION(execGetClonerLayoutClass); \
	DECLARE_FUNCTION(execGetClonerLayoutName); \
	DECLARE_FUNCTION(execGetClonerExtensionClasses); \
	DECLARE_FUNCTION(execGetClonerLayoutClasses);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLibrary(); \
	friend struct Z_Construct_UClass_UCEClonerLibrary_Statics; \
public: \
	DECLARE_CLASS(UCEClonerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerLibrary)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLONEREFFECTOR_API UCEClonerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerLibrary(UCEClonerLibrary&&); \
	UCEClonerLibrary(const UCEClonerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEClonerLibrary) \
	CLONEREFFECTOR_API virtual ~UCEClonerLibrary();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEClonerLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
