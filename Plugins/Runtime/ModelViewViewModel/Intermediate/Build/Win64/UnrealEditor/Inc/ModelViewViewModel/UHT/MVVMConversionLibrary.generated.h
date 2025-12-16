// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bindings/MVVMConversionLibrary.h"

#ifdef MODELVIEWVIEWMODEL_MVVMConversionLibrary_generated_h
#error "MVVMConversionLibrary.generated.h already included, missing '#pragma once' in MVVMConversionLibrary.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMConversionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;

// ********** Begin Class UMVVMConversionLibrary ***************************************************
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConv_BoolToSlateVisibility);


struct Z_Construct_UClass_UMVVMConversionLibrary_Statics;
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMConversionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMConversionLibrary(); \
	friend struct ::Z_Construct_UClass_UMVVMConversionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODELVIEWVIEWMODEL_API UClass* ::Z_Construct_UClass_UMVVMConversionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMVVMConversionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), Z_Construct_UClass_UMVVMConversionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMVVMConversionLibrary)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELVIEWVIEWMODEL_API UMVVMConversionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMVVMConversionLibrary(UMVVMConversionLibrary&&) = delete; \
	UMVVMConversionLibrary(const UMVVMConversionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELVIEWVIEWMODEL_API, UMVVMConversionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMConversionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMConversionLibrary) \
	MODELVIEWVIEWMODEL_API virtual ~UMVVMConversionLibrary();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMVVMConversionLibrary;

// ********** End Class UMVVMConversionLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMConversionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
