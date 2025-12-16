// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequenceExporterUSD.h"

#ifdef USDEXPORTER_AnimSequenceExporterUSD_generated_h
#error "AnimSequenceExporterUSD.generated.h already included, missing '#pragma once' in AnimSequenceExporterUSD.h"
#endif
#define USDEXPORTER_AnimSequenceExporterUSD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimSequenceExporterUSD *************************************************
struct Z_Construct_UClass_UAnimSequenceExporterUSD_Statics;
USDEXPORTER_API UClass* Z_Construct_UClass_UAnimSequenceExporterUSD_NoRegister();

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequenceExporterUSD(); \
	friend struct ::Z_Construct_UClass_UAnimSequenceExporterUSD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend USDEXPORTER_API UClass* ::Z_Construct_UClass_UAnimSequenceExporterUSD_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimSequenceExporterUSD, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/USDExporter"), Z_Construct_UClass_UAnimSequenceExporterUSD_NoRegister) \
	DECLARE_SERIALIZER(UAnimSequenceExporterUSD)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimSequenceExporterUSD(UAnimSequenceExporterUSD&&) = delete; \
	UAnimSequenceExporterUSD(const UAnimSequenceExporterUSD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequenceExporterUSD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequenceExporterUSD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimSequenceExporterUSD) \
	NO_API virtual ~UAnimSequenceExporterUSD();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_11_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimSequenceExporterUSD;

// ********** End Class UAnimSequenceExporterUSD ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_AnimSequenceExporterUSD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
