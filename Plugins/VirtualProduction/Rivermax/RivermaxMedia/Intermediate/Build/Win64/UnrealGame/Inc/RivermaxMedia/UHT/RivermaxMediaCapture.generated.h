// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivermaxMediaCapture.h"

#ifdef RIVERMAXMEDIA_RivermaxMediaCapture_generated_h
#error "RivermaxMediaCapture.generated.h already included, missing '#pragma once' in RivermaxMediaCapture.h"
#endif
#define RIVERMAXMEDIA_RivermaxMediaCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URivermaxMediaCapture ****************************************************
struct Z_Construct_UClass_URivermaxMediaCapture_Statics;
RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaCapture_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivermaxMediaCapture(); \
	friend struct ::Z_Construct_UClass_URivermaxMediaCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIVERMAXMEDIA_API UClass* ::Z_Construct_UClass_URivermaxMediaCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(URivermaxMediaCapture, UMediaCapture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RivermaxMedia"), Z_Construct_UClass_URivermaxMediaCapture_NoRegister) \
	DECLARE_SERIALIZER(URivermaxMediaCapture)


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivermaxMediaCapture(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URivermaxMediaCapture(URivermaxMediaCapture&&) = delete; \
	URivermaxMediaCapture(const URivermaxMediaCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivermaxMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivermaxMediaCapture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URivermaxMediaCapture) \
	NO_API virtual ~URivermaxMediaCapture();


#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URivermaxMediaCapture;

// ********** End Class URivermaxMediaCapture ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
