// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGenerateSeedElement.h"

#ifdef PCG_PCGGenerateSeedElement_generated_h
#error "PCGGenerateSeedElement.generated.h already included, missing '#pragma once' in PCGGenerateSeedElement.h"
#endif
#define PCG_PCGGenerateSeedElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGenerateSeedSettings *************************************************
struct Z_Construct_UClass_UPCGGenerateSeedSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGenerateSeedSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGenerateSeedSettings(); \
	friend struct ::Z_Construct_UClass_UPCGGenerateSeedSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGenerateSeedSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGenerateSeedSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGenerateSeedSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGGenerateSeedSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGenerateSeedSettings(UPCGGenerateSeedSettings&&) = delete; \
	UPCGGenerateSeedSettings(const UPCGGenerateSeedSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGGenerateSeedSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGenerateSeedSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGGenerateSeedSettings) \
	NO_API virtual ~UPCGGenerateSeedSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_18_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGenerateSeedSettings;

// ********** End Class UPCGGenerateSeedSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGenerateSeedElement_h

// ********** Begin Enum EPCGGenerateSeedSource ****************************************************
#define FOREACH_ENUM_EPCGGENERATESEEDSOURCE(op) \
	op(EPCGGenerateSeedSource::RandomStream) \
	op(EPCGGenerateSeedSource::HashEachSourceAttribute) \
	op(EPCGGenerateSeedSource::HashStringConstant) 

enum class EPCGGenerateSeedSource : uint8;
template<> struct TIsUEnumClass<EPCGGenerateSeedSource> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGGenerateSeedSource>();
// ********** End Enum EPCGGenerateSeedSource ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
