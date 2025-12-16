// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOP/CustomizableObjectPopulation.h"

#ifdef CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulation_generated_h
#error "CustomizableObjectPopulation.generated.h already included, missing '#pragma once' in CustomizableObjectPopulation.h"
#endif
#define CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCustomizableObjectInstance;

// ********** Begin ScriptStruct FClassWeightPair **************************************************
struct Z_Construct_UScriptStruct_FClassWeightPair_Statics;
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClassWeightPair_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


struct FClassWeightPair;
// ********** End ScriptStruct FClassWeightPair ****************************************************

// ********** Begin Class UCustomizableObjectPopulation ********************************************
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegeneratePopulation); \
	DECLARE_FUNCTION(execGeneratePopulation);


struct Z_Construct_UClass_UCustomizableObjectPopulation_Statics;
CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulation_NoRegister();

#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectPopulation(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectPopulation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTPOPULATION_API UClass* ::Z_Construct_UClass_UCustomizableObjectPopulation_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectPopulation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectPopulation"), Z_Construct_UClass_UCustomizableObjectPopulation_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectPopulation)


#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectPopulation(UCustomizableObjectPopulation&&) = delete; \
	UCustomizableObjectPopulation(const UCustomizableObjectPopulation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectPopulation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectPopulation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomizableObjectPopulation) \
	NO_API virtual ~UCustomizableObjectPopulation();


#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h_47_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectPopulation;

// ********** End Class UCustomizableObjectPopulation **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
