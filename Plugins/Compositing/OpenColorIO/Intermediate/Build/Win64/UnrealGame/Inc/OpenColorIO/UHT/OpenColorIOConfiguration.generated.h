// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenColorIOConfiguration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENCOLORIO_OpenColorIOConfiguration_generated_h
#error "OpenColorIOConfiguration.generated.h already included, missing '#pragma once' in OpenColorIOConfiguration.h"
#endif
#define OPENCOLORIO_OpenColorIOConfiguration_generated_h

#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReloadExistingColorspaces);


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenColorIOConfiguration(); \
	friend struct Z_Construct_UClass_UOpenColorIOConfiguration_Statics; \
public: \
	DECLARE_CLASS(UOpenColorIOConfiguration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenColorIO"), NO_API) \
	DECLARE_SERIALIZER(UOpenColorIOConfiguration)


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOpenColorIOConfiguration(UOpenColorIOConfiguration&&); \
	UOpenColorIOConfiguration(const UOpenColorIOConfiguration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenColorIOConfiguration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenColorIOConfiguration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenColorIOConfiguration) \
	NO_API virtual ~UOpenColorIOConfiguration();


#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_30_PROLOG
#define FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENCOLORIO_API UClass* StaticClass<class UOpenColorIOConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOConfiguration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
