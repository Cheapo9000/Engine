// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamComponent.h"

#ifdef MEDIASTREAM_MediaStreamComponent_generated_h
#error "MediaStreamComponent.generated.h already included, missing '#pragma once' in MediaStreamComponent.h"
#endif
#define MEDIASTREAM_MediaStreamComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaStream;

// ********** Begin Class UMediaStreamComponent ****************************************************
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSourceChanged);


struct Z_Construct_UClass_UMediaStreamComponent_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_UMediaStreamComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaStreamComponent(); \
	friend struct ::Z_Construct_UClass_UMediaStreamComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_UMediaStreamComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaStreamComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_UMediaStreamComponent_NoRegister) \
	DECLARE_SERIALIZER(UMediaStreamComponent)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaStreamComponent(UMediaStreamComponent&&) = delete; \
	UMediaStreamComponent(const UMediaStreamComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, UMediaStreamComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaStreamComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMediaStreamComponent) \
	MEDIASTREAM_API virtual ~UMediaStreamComponent();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaStreamComponent;

// ********** End Class UMediaStreamComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
