// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCOP/CustomizableObjectPopulationClass.h"

#ifdef CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationClass_generated_h
#error "CustomizableObjectPopulationClass.generated.h already included, missing '#pragma once' in CustomizableObjectPopulationClass.h"
#endif
#define CUSTOMIZABLEOBJECTPOPULATION_CustomizableObjectPopulationClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPopulationClassParameterOptions **********************************
struct Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics;
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


struct FPopulationClassParameterOptions;
// ********** End ScriptStruct FPopulationClassParameterOptions ************************************

// ********** Begin ScriptStruct FPopulationClassParameter *****************************************
struct Z_Construct_UScriptStruct_FPopulationClassParameter_Statics;
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPopulationClassParameter_Statics; \
	CUSTOMIZABLEOBJECTPOPULATION_API static class UScriptStruct* StaticStruct();


struct FPopulationClassParameter;
// ********** End ScriptStruct FPopulationClassParameter *******************************************

// ********** Begin Class UCustomizableObjectPopulationClass ***************************************
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectPopulationClass, NO_API)


struct Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics;
CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister();

#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizableObjectPopulationClass(); \
	friend struct ::Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMIZABLEOBJECTPOPULATION_API UClass* ::Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomizableObjectPopulationClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomizableObjectPopulation"), Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister) \
	DECLARE_SERIALIZER(UCustomizableObjectPopulationClass) \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizableObjectPopulationClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomizableObjectPopulationClass(UCustomizableObjectPopulationClass&&) = delete; \
	UCustomizableObjectPopulationClass(const UCustomizableObjectPopulationClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizableObjectPopulationClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizableObjectPopulationClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizableObjectPopulationClass) \
	NO_API virtual ~UCustomizableObjectPopulationClass();


#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_38_PROLOG
#define FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h_43_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomizableObjectPopulationClass;

// ********** End Class UCustomizableObjectPopulationClass *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MutablePopulation_Source_CustomizableObjectPopulation_Public_MuCOP_CustomizableObjectPopulationClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
