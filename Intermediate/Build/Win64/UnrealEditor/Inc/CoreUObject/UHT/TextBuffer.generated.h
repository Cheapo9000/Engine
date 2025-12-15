// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/TextBuffer.h"

#ifdef COREUOBJECT_TextBuffer_generated_h
#error "TextBuffer.generated.h already included, missing '#pragma once' in TextBuffer.h"
#endif
#define COREUOBJECT_TextBuffer_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextBuffer **************************************************************
struct Z_Construct_UClass_UTextBuffer_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UTextBuffer_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextBuffer(); \
	friend struct ::Z_Construct_UClass_UTextBuffer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UTextBuffer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextBuffer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UTextBuffer_NoRegister) \
	DECLARE_SERIALIZER(UTextBuffer)


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextBuffer(UTextBuffer&&) = delete; \
	UTextBuffer(const UTextBuffer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UTextBuffer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextBuffer) \
	COREUOBJECT_API virtual ~UTextBuffer();


#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_25_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextBuffer;

// ********** End Class UTextBuffer ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_Misc_TextBuffer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
