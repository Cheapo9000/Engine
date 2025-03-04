// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperSpriteSheet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPERSPRITESHEETIMPORTER_PaperSpriteSheet_generated_h
#error "PaperSpriteSheet.generated.h already included, missing '#pragma once' in PaperSpriteSheet.h"
#endif
#define PAPERSPRITESHEETIMPORTER_PaperSpriteSheet_generated_h

#if WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperSpriteSheet, NO_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPaperSpriteSheet(); \
	friend struct Z_Construct_UClass_UPaperSpriteSheet_Statics; \
public: \
	DECLARE_CLASS(UPaperSpriteSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PaperSpriteSheetImporter"), NO_API) \
	DECLARE_SERIALIZER(UPaperSpriteSheet) \
	FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSpriteSheet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSpriteSheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSpriteSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSpriteSheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPaperSpriteSheet(UPaperSpriteSheet&&); \
	UPaperSpriteSheet(const UPaperSpriteSheet&); \
public: \
	NO_API virtual ~UPaperSpriteSheet();


#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_9_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERSPRITESHEETIMPORTER_API UClass* StaticClass<class UPaperSpriteSheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_PaperSpriteSheetImporter_Private_PaperSpriteSheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
