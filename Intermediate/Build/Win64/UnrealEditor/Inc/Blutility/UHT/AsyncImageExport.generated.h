// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncImageExport.h"

#ifdef BLUTILITY_AsyncImageExport_generated_h
#error "AsyncImageExport.generated.h already included, missing '#pragma once' in AsyncImageExport.h"
#endif
#define BLUTILITY_AsyncImageExport_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncImageExport;
class UTexture;

// ********** Begin Delegate FOnExportImageAsyncComplete *******************************************
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_26_DELEGATE \
BLUTILITY_API void FOnExportImageAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnExportImageAsyncComplete, bool bSuccess);


// ********** End Delegate FOnExportImageAsyncComplete *********************************************

// ********** Begin Class UAsyncImageExport ********************************************************
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportImageAsync);


struct Z_Construct_UClass_UAsyncImageExport_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UAsyncImageExport_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncImageExport(); \
	friend struct ::Z_Construct_UClass_UAsyncImageExport_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UAsyncImageExport_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncImageExport, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UAsyncImageExport_NoRegister) \
	DECLARE_SERIALIZER(UAsyncImageExport)


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncImageExport(UAsyncImageExport&&) = delete; \
	UAsyncImageExport(const UAsyncImageExport&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncImageExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncImageExport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncImageExport) \
	BLUTILITY_API virtual ~UAsyncImageExport();


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_28_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncImageExport;

// ********** End Class UAsyncImageExport **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
