// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGGetResourcePath.h"

#ifdef PCG_PCGGetResourcePath_generated_h
#error "PCGGetResourcePath.generated.h already included, missing '#pragma once' in PCGGetResourcePath.h"
#endif
#define PCG_PCGGetResourcePath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGGetResourcePath ******************************************************
struct Z_Construct_UClass_UPCGGetResourcePath_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGGetResourcePath_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGGetResourcePath(); \
	friend struct ::Z_Construct_UClass_UPCGGetResourcePath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGGetResourcePath_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGGetResourcePath, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGGetResourcePath_NoRegister) \
	DECLARE_SERIALIZER(UPCGGetResourcePath)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGGetResourcePath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGGetResourcePath(UPCGGetResourcePath&&) = delete; \
	UPCGGetResourcePath(const UPCGGetResourcePath&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGGetResourcePath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGGetResourcePath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGGetResourcePath) \
	PCG_API virtual ~UPCGGetResourcePath();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_11_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGGetResourcePath;

// ********** End Class UPCGGetResourcePath ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGGetResourcePath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
