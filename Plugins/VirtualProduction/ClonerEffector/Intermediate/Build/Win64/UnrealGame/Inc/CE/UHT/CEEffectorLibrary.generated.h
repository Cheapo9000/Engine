// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/CEEffectorLibrary.h"

#ifdef CLONEREFFECTOR_CEEffectorLibrary_generated_h
#error "CEEffectorLibrary.generated.h already included, missing '#pragma once' in CEEffectorLibrary.h"
#endif
#define CLONEREFFECTOR_CEEffectorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorEffectBase;
class UCEEffectorModeBase;
class UCEEffectorTypeBase;
class UClass;

// ********** Begin Class UCEEffectorLibrary *******************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorEffectClasses); \
	DECLARE_FUNCTION(execGetEffectorTypeNames); \
	DECLARE_FUNCTION(execGetEffectorTypeClasses); \
	DECLARE_FUNCTION(execGetEffectorModeClasses);


struct Z_Construct_UClass_UCEEffectorLibrary_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorLibrary(); \
	friend struct ::Z_Construct_UClass_UCEEffectorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorLibrary)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CLONEREFFECTOR_API UCEEffectorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorLibrary(UCEEffectorLibrary&&) = delete; \
	UCEEffectorLibrary(const UCEEffectorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEEffectorLibrary) \
	CLONEREFFECTOR_API virtual ~UCEEffectorLibrary();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorLibrary;

// ********** End Class UCEEffectorLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Utilities_CEEffectorLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
