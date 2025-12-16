// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttractElement.h"

#ifdef PCG_PCGAttractElement_generated_h
#error "PCGAttractElement.generated.h already included, missing '#pragma once' in PCGAttractElement.h"
#endif
#define PCG_PCGAttractElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGAttractSettings ******************************************************
struct Z_Construct_UClass_UPCGAttractSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttractSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttractSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttractSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttractSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttractSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttractSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttractSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttractSettings(UPCGAttractSettings&&) = delete; \
	UPCGAttractSettings(const UPCGAttractSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttractSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttractSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttractSettings) \
	PCG_API virtual ~UPCGAttractSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_26_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttractSettings;

// ********** End Class UPCGAttractSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttractElement_h

// ********** Begin Enum EPCGAttractMode ***********************************************************
#define FOREACH_ENUM_EPCGATTRACTMODE(op) \
	op(EPCGAttractMode::Closest) \
	op(EPCGAttractMode::MinAttribute) \
	op(EPCGAttractMode::MaxAttribute) \
	op(EPCGAttractMode::FromIndex) 

enum class EPCGAttractMode : uint8;
template<> struct TIsUEnumClass<EPCGAttractMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttractMode>();
// ********** End Enum EPCGAttractMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
