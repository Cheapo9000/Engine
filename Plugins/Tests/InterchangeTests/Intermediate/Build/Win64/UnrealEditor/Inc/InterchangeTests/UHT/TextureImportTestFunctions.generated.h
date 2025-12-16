// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImportTestFunctions/TextureImportTestFunctions.h"

#ifdef INTERCHANGETESTS_TextureImportTestFunctions_generated_h
#error "TextureImportTestFunctions.generated.h already included, missing '#pragma once' in TextureImportTestFunctions.h"
#endif
#define INTERCHANGETESTS_TextureImportTestFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FInterchangeTestFunctionResult;

// ********** Begin Class UTextureImportTestFunctions **********************************************
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckTextureAddressZ); \
	DECLARE_FUNCTION(execCheckTextureAddressY); \
	DECLARE_FUNCTION(execCheckTextureAddressX); \
	DECLARE_FUNCTION(execCheckTextureFilter); \
	DECLARE_FUNCTION(execCheckImportedTextureCount);


struct Z_Construct_UClass_UTextureImportTestFunctions_Statics;
INTERCHANGETESTS_API UClass* Z_Construct_UClass_UTextureImportTestFunctions_NoRegister();

#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureImportTestFunctions(); \
	friend struct ::Z_Construct_UClass_UTextureImportTestFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGETESTS_API UClass* ::Z_Construct_UClass_UTextureImportTestFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureImportTestFunctions, UImportTestFunctionsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeTests"), Z_Construct_UClass_UTextureImportTestFunctions_NoRegister) \
	DECLARE_SERIALIZER(UTextureImportTestFunctions)


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGETESTS_API UTextureImportTestFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureImportTestFunctions(UTextureImportTestFunctions&&) = delete; \
	UTextureImportTestFunctions(const UTextureImportTestFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGETESTS_API, UTextureImportTestFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportTestFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportTestFunctions) \
	INTERCHANGETESTS_API virtual ~UTextureImportTestFunctions();


#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_16_PROLOG
#define FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureImportTestFunctions;

// ********** End Class UTextureImportTestFunctions ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_TextureImportTestFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
