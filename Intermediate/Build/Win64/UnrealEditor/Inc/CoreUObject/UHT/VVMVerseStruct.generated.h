// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseStruct.h"

#ifdef COREUOBJECT_VVMVerseStruct_generated_h
#error "VVMVerseStruct.generated.h already included, missing '#pragma once' in VVMVerseStruct.h"
#endif
#define COREUOBJECT_VVMVerseStruct_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVerseStruct *************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVerseStruct, COREUOBJECT_API)


struct Z_Construct_UClass_UVerseStruct_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseStruct_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseStruct(); \
	friend struct ::Z_Construct_UClass_UVerseStruct_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UVerseStruct_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerseStruct, UScriptStruct, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UVerseStruct_NoRegister) \
	DECLARE_SERIALIZER(UVerseStruct) \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerseStruct(UVerseStruct&&) = delete; \
	UVerseStruct(const UVerseStruct&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UVerseStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseStruct) \
	COREUOBJECT_API virtual ~UVerseStruct();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_31_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerseStruct;

// ********** End Class UVerseStruct ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
