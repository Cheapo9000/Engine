// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseEnum.h"

#ifdef COREUOBJECT_VVMVerseEnum_generated_h
#error "VVMVerseEnum.generated.h already included, missing '#pragma once' in VVMVerseEnum.h"
#endif
#define COREUOBJECT_VVMVerseEnum_generated_h

#include "UObject/ObjectMacros.h"
#include "Templates/NoDestroy.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVerseEnum ***************************************************************
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVerseEnum, COREUOBJECT_API)


struct Z_Construct_UClass_UVerseEnum_Statics;
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseEnum_NoRegister();

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseEnum(); \
	friend struct ::Z_Construct_UClass_UVerseEnum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COREUOBJECT_API UClass* ::Z_Construct_UClass_UVerseEnum_NoRegister(); \
public: \
	DECLARE_CLASS2(UVerseEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), Z_Construct_UClass_UVerseEnum_NoRegister) \
	DECLARE_SERIALIZER(UVerseEnum) \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVerseEnum(UVerseEnum&&) = delete; \
	UVerseEnum(const UVerseEnum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COREUOBJECT_API, UVerseEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseEnum) \
	COREUOBJECT_API virtual ~UVerseEnum();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_34_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVerseEnum;

// ********** End Class UVerseEnum *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h

// ********** Begin Enum EVerseEnumFlags ***********************************************************
#define FOREACH_ENUM_EVERSEENUMFLAGS(op) \
	op(EVerseEnumFlags::None) \
	op(EVerseEnumFlags::NativeBound) \
	op(EVerseEnumFlags::UHTNative) 

enum class EVerseEnumFlags : uint32;
template<> struct TIsUEnumClass<EVerseEnumFlags> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EVerseEnumFlags>();
// ********** End Enum EVerseEnumFlags *************************************************************

// ********** Begin Enum EVerseFalse ***************************************************************
#define FOREACH_ENUM_EVERSEFALSE(op) \
	op(EVerseFalse::Value) 

enum class EVerseFalse : uint8;
template<> struct TIsUEnumClass<EVerseFalse> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EVerseFalse>();
// ********** End Enum EVerseFalse *****************************************************************

// ********** Begin Enum EVerseTrue ****************************************************************
#define FOREACH_ENUM_EVERSETRUE(op) \
	op(EVerseTrue::Value) 

enum class EVerseTrue : uint8;
template<> struct TIsUEnumClass<EVerseTrue> { enum { Value = true }; };
template<> COREUOBJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EVerseTrue>();
// ********** End Enum EVerseTrue ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
