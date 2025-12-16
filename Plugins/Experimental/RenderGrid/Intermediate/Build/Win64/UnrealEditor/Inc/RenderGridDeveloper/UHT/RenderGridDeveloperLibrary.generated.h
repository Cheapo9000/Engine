// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderGridDeveloperLibrary.h"

#ifdef RENDERGRIDDEVELOPER_RenderGridDeveloperLibrary_generated_h
#error "RenderGridDeveloperLibrary.generated.h already included, missing '#pragma once' in RenderGridDeveloperLibrary.h"
#endif
#define RENDERGRIDDEVELOPER_RenderGridDeveloperLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URenderGrid;

// ********** Begin Class URenderGridDeveloperLibrary **********************************************
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRenderGridAsset); \
	DECLARE_FUNCTION(execGetAllRenderGridAssets);


struct Z_Construct_UClass_URenderGridDeveloperLibrary_Statics;
RENDERGRIDDEVELOPER_API UClass* Z_Construct_UClass_URenderGridDeveloperLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridDeveloperLibrary(); \
	friend struct ::Z_Construct_UClass_URenderGridDeveloperLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RENDERGRIDDEVELOPER_API UClass* ::Z_Construct_UClass_URenderGridDeveloperLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URenderGridDeveloperLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGridDeveloper"), Z_Construct_UClass_URenderGridDeveloperLibrary_NoRegister) \
	DECLARE_SERIALIZER(URenderGridDeveloperLibrary)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridDeveloperLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URenderGridDeveloperLibrary(URenderGridDeveloperLibrary&&) = delete; \
	URenderGridDeveloperLibrary(const URenderGridDeveloperLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridDeveloperLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridDeveloperLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridDeveloperLibrary) \
	NO_API virtual ~URenderGridDeveloperLibrary();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URenderGridDeveloperLibrary;

// ********** End Class URenderGridDeveloperLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridDeveloper_Public_RenderGridDeveloperLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
