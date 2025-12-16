// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/ConversionLibraries/MVVMFontConversionLibrary.h"

#ifdef MODELVIEWVIEWMODEL_MVVMFontConversionLibrary_generated_h
#error "MVVMFontConversionLibrary.generated.h already included, missing '#pragma once' in MVVMFontConversionLibrary.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMFontConversionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTexture;
struct FColor;
struct FLinearColor;
struct FSlateFontInfo;

// ********** Begin Class UMVVMFontConversionLibrary ***********************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_SetTextureParameterMID); \
	DECLARE_FUNCTION(execConv_SetVectorParameterMID_FColor); \
	DECLARE_FUNCTION(execConv_SetVectorParameterMID); \
	DECLARE_FUNCTION(execConv_SetScalarParameterMID); \
	DECLARE_FUNCTION(execConv_SetTextureParameter); \
	DECLARE_FUNCTION(execConv_SetVectorParameter_FColor); \
	DECLARE_FUNCTION(execConv_SetVectorParameter); \
	DECLARE_FUNCTION(execConv_SetScalarParameter);


struct Z_Construct_UClass_UMVVMFontConversionLibrary_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMFontConversionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMFontConversionLibrary(); \
	friend struct ::Z_Construct_UClass_UMVVMFontConversionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMFontConversionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMFontConversionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMFontConversionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMVVMFontConversionLibrary)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMFontConversionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMFontConversionLibrary(UMVVMFontConversionLibrary&&) = delete; \
	UMVVMFontConversionLibrary(const UMVVMFontConversionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMFontConversionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMFontConversionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMFontConversionLibrary) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMFontConversionLibrary();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMFontConversionLibrary;

// ********** End Class UMVVMFontConversionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_ConversionLibraries_MVVMFontConversionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
