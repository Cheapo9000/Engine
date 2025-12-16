// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaStreamActor.h"

#ifdef MEDIASTREAM_MediaStreamActor_generated_h
#error "MediaStreamActor.generated.h already included, missing '#pragma once' in MediaStreamActor.h"
#endif
#define MEDIASTREAM_MediaStreamActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMediaStreamActor ********************************************************
struct Z_Construct_UClass_AMediaStreamActor_Statics;
MEDIASTREAM_API UClass* Z_Construct_UClass_AMediaStreamActor_NoRegister();

#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMediaStreamActor(); \
	friend struct ::Z_Construct_UClass_AMediaStreamActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIASTREAM_API UClass* ::Z_Construct_UClass_AMediaStreamActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMediaStreamActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaStream"), Z_Construct_UClass_AMediaStreamActor_NoRegister) \
	DECLARE_SERIALIZER(AMediaStreamActor)


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMediaStreamActor(AMediaStreamActor&&) = delete; \
	AMediaStreamActor(const AMediaStreamActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIASTREAM_API, AMediaStreamActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMediaStreamActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMediaStreamActor) \
	MEDIASTREAM_API virtual ~AMediaStreamActor();


#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMediaStreamActor;

// ********** End Class AMediaStreamActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MediaStream_Source_MediaStream_Public_MediaStreamActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
