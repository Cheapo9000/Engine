// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElements/ICompositingTextureLookupTable.h"

#ifdef COMPOSURE_ICompositingTextureLookupTable_generated_h
#error "ICompositingTextureLookupTable.generated.h already included, missing '#pragma once' in ICompositingTextureLookupTable.h"
#endif
#define COMPOSURE_ICompositingTextureLookupTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;

// ********** Begin Interface UCompositingTextureLookupTable ***************************************
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindNamedPassResult);


struct Z_Construct_UClass_UCompositingTextureLookupTable_Statics;
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTextureLookupTable_NoRegister();

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPOSURE_API UCompositingTextureLookupTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingTextureLookupTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSURE_API, UCompositingTextureLookupTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingTextureLookupTable); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositingTextureLookupTable(UCompositingTextureLookupTable&&) = delete; \
	UCompositingTextureLookupTable(const UCompositingTextureLookupTable&) = delete; \
	virtual ~UCompositingTextureLookupTable() = default;


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCompositingTextureLookupTable(); \
	friend struct ::Z_Construct_UClass_UCompositingTextureLookupTable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSURE_API UClass* ::Z_Construct_UClass_UCompositingTextureLookupTable_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositingTextureLookupTable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), Z_Construct_UClass_UCompositingTextureLookupTable_NoRegister) \
	DECLARE_SERIALIZER(UCompositingTextureLookupTable)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~ICompositingTextureLookupTable() {} \
public: \
	typedef UCompositingTextureLookupTable UClassType; \
	typedef ICompositingTextureLookupTable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_12_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositingTextureLookupTable;

// ********** End Interface UCompositingTextureLookupTable *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_ICompositingTextureLookupTable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
