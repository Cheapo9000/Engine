// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeEditorUtilitiesBase.h"

#ifdef INTERCHANGEENGINE_InterchangeEditorUtilitiesBase_generated_h
#error "InterchangeEditorUtilitiesBase.generated.h already included, missing '#pragma once' in InterchangeEditorUtilitiesBase.h"
#endif
#define INTERCHANGEENGINE_InterchangeEditorUtilitiesBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeEditorUtilitiesBase ******************************************
struct Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics;
INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeEditorUtilitiesBase(); \
	friend struct ::Z_Construct_UClass_UInterchangeEditorUtilitiesBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEENGINE_API UClass* ::Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeEditorUtilitiesBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), Z_Construct_UClass_UInterchangeEditorUtilitiesBase_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeEditorUtilitiesBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEENGINE_API UInterchangeEditorUtilitiesBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeEditorUtilitiesBase(UInterchangeEditorUtilitiesBase&&) = delete; \
	UInterchangeEditorUtilitiesBase(const UInterchangeEditorUtilitiesBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEENGINE_API, UInterchangeEditorUtilitiesBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeEditorUtilitiesBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeEditorUtilitiesBase) \
	INTERCHANGEENGINE_API virtual ~UInterchangeEditorUtilitiesBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_10_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeEditorUtilitiesBase;

// ********** End Class UInterchangeEditorUtilitiesBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeEditorUtilitiesBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
