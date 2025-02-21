// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/CEEffectorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorExtensionBase;
class UCEEffectorModeBase;
class UCEEffectorTypeBase;
#ifdef CLONEREFFECTOR_CEEffectorLibrary_generated_h
#error "CEEffectorLibrary.generated.h already included, missing '#pragma once' in CEEffectorLibrary.h"
#endif
#define CLONEREFFECTOR_CEEffectorLibrary_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorExtensionClasses); \
	DECLARE_FUNCTION(execGetEffectorTypeClasses); \
	DECLARE_FUNCTION(execGetEffectorModeClasses);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorLibrary(); \
	friend struct Z_Construct_UClass_UCEEffectorLibrary_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorLibrary)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLONEREFFECTOR_API UCEEffectorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorLibrary(UCEEffectorLibrary&&); \
	UCEEffectorLibrary(const UCEEffectorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEEffectorLibrary) \
	CLONEREFFECTOR_API virtual ~UCEEffectorLibrary();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
