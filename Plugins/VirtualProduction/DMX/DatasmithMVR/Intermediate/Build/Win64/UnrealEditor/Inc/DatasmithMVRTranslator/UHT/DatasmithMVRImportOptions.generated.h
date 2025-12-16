// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithMVRImportOptions.h"

#ifdef DATASMITHMVRTRANSLATOR_DatasmithMVRImportOptions_generated_h
#error "DatasmithMVRImportOptions.generated.h already included, missing '#pragma once' in DatasmithMVRImportOptions.h"
#endif
#define DATASMITHMVRTRANSLATOR_DatasmithMVRImportOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDatasmithMVRImportOptions ***********************************************
struct Z_Construct_UClass_UDatasmithMVRImportOptions_Statics;
DATASMITHMVRTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithMVRImportOptions_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithMVRImportOptions(); \
	friend struct ::Z_Construct_UClass_UDatasmithMVRImportOptions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATASMITHMVRTRANSLATOR_API UClass* ::Z_Construct_UClass_UDatasmithMVRImportOptions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatasmithMVRImportOptions, UDatasmithOptionsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithMVRTranslator"), Z_Construct_UClass_UDatasmithMVRImportOptions_NoRegister) \
	DECLARE_SERIALIZER(UDatasmithMVRImportOptions) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithMVRImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatasmithMVRImportOptions(UDatasmithMVRImportOptions&&) = delete; \
	UDatasmithMVRImportOptions(const UDatasmithMVRImportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithMVRImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithMVRImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithMVRImportOptions) \
	NO_API virtual ~UDatasmithMVRImportOptions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatasmithMVRImportOptions;

// ********** End Class UDatasmithMVRImportOptions *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DatasmithMVR_Source_DatasmithMVRTranslator_Private_DatasmithMVRImportOptions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
