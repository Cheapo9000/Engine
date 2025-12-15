// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavModifierVolume.h"

#ifdef NAVIGATIONSYSTEM_NavModifierVolume_generated_h
#error "NavModifierVolume.generated.h already included, missing '#pragma once' in NavModifierVolume.h"
#endif
#define NAVIGATIONSYSTEM_NavModifierVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UNavArea;

// ********** Begin Class ANavModifierVolume *******************************************************
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAreaClassToReplace); \
	DECLARE_FUNCTION(execSetAreaClass);


struct Z_Construct_UClass_ANavModifierVolume_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavModifierVolume(); \
	friend struct ::Z_Construct_UClass_ANavModifierVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavModifierVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavModifierVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavModifierVolume_NoRegister) \
	DECLARE_SERIALIZER(ANavModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ANavModifierVolume*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavModifierVolume(ANavModifierVolume&&) = delete; \
	ANavModifierVolume(const ANavModifierVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavModifierVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavModifierVolume) \
	NAVIGATIONSYSTEM_API virtual ~ANavModifierVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_23_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavModifierVolume;

// ********** End Class ANavModifierVolume *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
