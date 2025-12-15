// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AsyncTaskDownloadImage.h"

#ifdef UMG_AsyncTaskDownloadImage_generated_h
#error "AsyncTaskDownloadImage.generated.h already included, missing '#pragma once' in AsyncTaskDownloadImage.h"
#endif
#define UMG_AsyncTaskDownloadImage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncTaskDownloadImage;
class UTexture2DDynamic;

// ********** Begin Delegate FDownloadImageDelegate ************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_14_DELEGATE \
UMG_API void FDownloadImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageDelegate, UTexture2DDynamic* Texture);


// ********** End Delegate FDownloadImageDelegate **************************************************

// ********** Begin Class UAsyncTaskDownloadImage **************************************************
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDownloadImage);


struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics;
UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct ::Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UMG_API UClass* ::Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UAsyncTaskDownloadImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&) = delete; \
	UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&) = delete; \
	UMG_API virtual ~UAsyncTaskDownloadImage();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTaskDownloadImage;

// ********** End Class UAsyncTaskDownloadImage ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
