// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Text3DActor.h"

#ifdef TEXT3D_Text3DActor_generated_h
#error "Text3DActor.generated.h already included, missing '#pragma once' in Text3DActor.h"
#endif
#define TEXT3D_Text3DActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AText3DActor *************************************************************
struct Z_Construct_UClass_AText3DActor_Statics;
TEXT3D_API UClass* Z_Construct_UClass_AText3DActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAText3DActor(); \
	friend struct ::Z_Construct_UClass_AText3DActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXT3D_API UClass* ::Z_Construct_UClass_AText3DActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AText3DActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), Z_Construct_UClass_AText3DActor_NoRegister) \
	DECLARE_SERIALIZER(AText3DActor)


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AText3DActor(AText3DActor&&) = delete; \
	AText3DActor(const AText3DActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AText3DActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AText3DActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AText3DActor) \
	NO_API virtual ~AText3DActor();


#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AText3DActor;

// ********** End Class AText3DActor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Text3D_Source_Text3D_Public_Text3DActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
