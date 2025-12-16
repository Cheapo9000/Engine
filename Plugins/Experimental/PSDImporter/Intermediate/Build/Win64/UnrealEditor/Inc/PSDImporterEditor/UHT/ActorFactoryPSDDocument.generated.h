// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ActorFactoryPSDDocument.h"

#ifdef PSDIMPORTEREDITOR_ActorFactoryPSDDocument_generated_h
#error "ActorFactoryPSDDocument.generated.h already included, missing '#pragma once' in ActorFactoryPSDDocument.h"
#endif
#define PSDIMPORTEREDITOR_ActorFactoryPSDDocument_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorFactoryPSDDocument *************************************************
struct Z_Construct_UClass_UActorFactoryPSDDocument_Statics;
PSDIMPORTEREDITOR_API UClass* Z_Construct_UClass_UActorFactoryPSDDocument_NoRegister();

#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFactoryPSDDocument(); \
	friend struct ::Z_Construct_UClass_UActorFactoryPSDDocument_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PSDIMPORTEREDITOR_API UClass* ::Z_Construct_UClass_UActorFactoryPSDDocument_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorFactoryPSDDocument, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PSDImporterEditor"), Z_Construct_UClass_UActorFactoryPSDDocument_NoRegister) \
	DECLARE_SERIALIZER(UActorFactoryPSDDocument)


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorFactoryPSDDocument(UActorFactoryPSDDocument&&) = delete; \
	UActorFactoryPSDDocument(const UActorFactoryPSDDocument&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorFactoryPSDDocument); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactoryPSDDocument); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorFactoryPSDDocument) \
	NO_API virtual ~UActorFactoryPSDDocument();


#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorFactoryPSDDocument;

// ********** End Class UActorFactoryPSDDocument ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PSDImporter_Source_PSDImporterEditor_Private_Factories_ActorFactoryPSDDocument_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
