// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/DMXLibraryFactory.h"

#ifdef DMXEDITOR_DMXLibraryFactory_generated_h
#error "DMXLibraryFactory.generated.h already included, missing '#pragma once' in DMXLibraryFactory.h"
#endif
#define DMXEDITOR_DMXLibraryFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXLibraryFactory *******************************************************
struct Z_Construct_UClass_UDMXLibraryFactory_Statics;
DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXLibraryFactory(); \
	friend struct ::Z_Construct_UClass_UDMXLibraryFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXEDITOR_API UClass* ::Z_Construct_UClass_UDMXLibraryFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXLibraryFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXEditor"), Z_Construct_UClass_UDMXLibraryFactory_NoRegister) \
	DECLARE_SERIALIZER(UDMXLibraryFactory)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXLibraryFactory(UDMXLibraryFactory&&) = delete; \
	UDMXLibraryFactory(const UDMXLibraryFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXLibraryFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXLibraryFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXLibraryFactory) \
	NO_API virtual ~UDMXLibraryFactory();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXLibraryFactory;

// ********** End Class UDMXLibraryFactory *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXLibraryFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
