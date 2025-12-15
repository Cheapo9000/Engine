// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Experimental/Iris/DataStreamChannel.h"

#ifdef ENGINE_DataStreamChannel_generated_h
#error "DataStreamChannel.generated.h already included, missing '#pragma once' in DataStreamChannel.h"
#endif
#define ENGINE_DataStreamChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataStreamChannel *******************************************************
struct Z_Construct_UClass_UDataStreamChannel_Statics;
ENGINE_API UClass* Z_Construct_UClass_UDataStreamChannel_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataStreamChannel(); \
	friend struct ::Z_Construct_UClass_UDataStreamChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UDataStreamChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataStreamChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UDataStreamChannel_NoRegister) \
	DECLARE_SERIALIZER(UDataStreamChannel)


#define FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataStreamChannel(UDataStreamChannel&&) = delete; \
	UDataStreamChannel(const UDataStreamChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataStreamChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStreamChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStreamChannel) \
	ENGINE_API virtual ~UDataStreamChannel();


#define FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataStreamChannel;

// ********** End Class UDataStreamChannel *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_Net_Experimental_Iris_DataStreamChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
