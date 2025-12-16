// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchVisCharacter.h"

#ifdef ARCHVISCHARACTER_ArchVisCharacter_generated_h
#error "ArchVisCharacter.generated.h already included, missing '#pragma once' in ArchVisCharacter.h"
#endif
#define ARCHVISCHARACTER_ArchVisCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AArchVisCharacter ********************************************************
struct Z_Construct_UClass_AArchVisCharacter_Statics;
ARCHVISCHARACTER_API UClass* Z_Construct_UClass_AArchVisCharacter_NoRegister();

#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchVisCharacter(); \
	friend struct ::Z_Construct_UClass_AArchVisCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ARCHVISCHARACTER_API UClass* ::Z_Construct_UClass_AArchVisCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AArchVisCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchVisCharacter"), Z_Construct_UClass_AArchVisCharacter_NoRegister) \
	DECLARE_SERIALIZER(AArchVisCharacter)


#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AArchVisCharacter(AArchVisCharacter&&) = delete; \
	AArchVisCharacter(const AArchVisCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCHVISCHARACTER_API, AArchVisCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchVisCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArchVisCharacter) \
	ARCHVISCHARACTER_API virtual ~AArchVisCharacter();


#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AArchVisCharacter;

// ********** End Class AArchVisCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
