// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshUtilities.h"

#ifdef INTERCHANGEENGINE_InterchangeMeshUtilities_generated_h
#error "InterchangeMeshUtilities.generated.h already included, missing '#pragma once' in InterchangeMeshUtilities.h"
#endif
#define INTERCHANGEENGINE_InterchangeMeshUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeSourceData;
class USkeletalMesh;

// ********** Begin Class UInterchangeMeshUtilities ************************************************
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScriptedImportMorphTarget);


struct Z_Construct_UClass_UInterchangeMeshUtilities_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshUtilities(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeMeshUtilities_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshUtilities)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeMeshUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshUtilities(UInterchangeMeshUtilities&&) = delete; \
	UInterchangeMeshUtilities(const UInterchangeMeshUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeMeshUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeMeshUtilities) \
	INTERCHANGEENGINE_API virtual ~UInterchangeMeshUtilities();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_40_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshUtilities;

// ********** End Class UInterchangeMeshUtilities **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeMeshUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
