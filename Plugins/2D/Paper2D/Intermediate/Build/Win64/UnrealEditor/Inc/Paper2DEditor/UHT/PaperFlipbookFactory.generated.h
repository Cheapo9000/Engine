// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperFlipbookFactory.h"

#ifdef PAPER2DEDITOR_PaperFlipbookFactory_generated_h
#error "PaperFlipbookFactory.generated.h already included, missing '#pragma once' in PaperFlipbookFactory.h"
#endif
#define PAPER2DEDITOR_PaperFlipbookFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPaperFlipbookFactory ****************************************************
struct Z_Construct_UClass_UPaperFlipbookFactory_Statics;
PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperFlipbookFactory_NoRegister();

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbookFactory(); \
	friend struct ::Z_Construct_UClass_UPaperFlipbookFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PAPER2DEDITOR_API UClass* ::Z_Construct_UClass_UPaperFlipbookFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPaperFlipbookFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2DEditor"), Z_Construct_UClass_UPaperFlipbookFactory_NoRegister) \
	DECLARE_SERIALIZER(UPaperFlipbookFactory)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PAPER2DEDITOR_API UPaperFlipbookFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PAPER2DEDITOR_API, UPaperFlipbookFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPaperFlipbookFactory(UPaperFlipbookFactory&&) = delete; \
	UPaperFlipbookFactory(const UPaperFlipbookFactory&) = delete; \
	PAPER2DEDITOR_API virtual ~UPaperFlipbookFactory();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_15_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_18_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPaperFlipbookFactory;

// ********** End Class UPaperFlipbookFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
