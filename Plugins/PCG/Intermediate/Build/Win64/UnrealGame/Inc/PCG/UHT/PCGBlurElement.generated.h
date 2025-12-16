// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGBlurElement.h"

#ifdef PCG_PCGBlurElement_generated_h
#error "PCGBlurElement.generated.h already included, missing '#pragma once' in PCGBlurElement.h"
#endif
#define PCG_PCGBlurElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGBlurSettings *********************************************************
struct Z_Construct_UClass_UPCGBlurSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGBlurSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGBlurSettings(); \
	friend struct ::Z_Construct_UClass_UPCGBlurSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGBlurSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGBlurSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGBlurSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGBlurSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGBlurSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGBlurSettings(UPCGBlurSettings&&) = delete; \
	UPCGBlurSettings(const UPCGBlurSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGBlurSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGBlurSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGBlurSettings) \
	PCG_API virtual ~UPCGBlurSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_29_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGBlurSettings;

// ********** End Class UPCGBlurSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGBlurElement_h

// ********** Begin Enum EPCGBlurElementMode *******************************************************
#define FOREACH_ENUM_EPCGBLURELEMENTMODE(op) \
	op(EPCGBlurElementMode::Constant) \
	op(EPCGBlurElementMode::Linear) \
	op(EPCGBlurElementMode::Gaussian) 

enum class EPCGBlurElementMode;
template<> struct TIsUEnumClass<EPCGBlurElementMode> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGBlurElementMode>();
// ********** End Enum EPCGBlurElementMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
