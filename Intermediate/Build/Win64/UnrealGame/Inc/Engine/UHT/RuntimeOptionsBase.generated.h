// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RuntimeOptionsBase.h"

#ifdef ENGINE_RuntimeOptionsBase_generated_h
#error "RuntimeOptionsBase.generated.h already included, missing '#pragma once' in RuntimeOptionsBase.h"
#endif
#define ENGINE_RuntimeOptionsBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URuntimeOptionsBase ******************************************************
struct Z_Construct_UClass_URuntimeOptionsBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeOptionsBase(); \
	friend struct ::Z_Construct_UClass_URuntimeOptionsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_URuntimeOptionsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(URuntimeOptionsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_URuntimeOptionsBase_NoRegister) \
	DECLARE_SERIALIZER(URuntimeOptionsBase) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("RuntimeOptions");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URuntimeOptionsBase(URuntimeOptionsBase&&) = delete; \
	URuntimeOptionsBase(const URuntimeOptionsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URuntimeOptionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeOptionsBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URuntimeOptionsBase) \
	ENGINE_API virtual ~URuntimeOptionsBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URuntimeOptionsBase;

// ********** End Class URuntimeOptionsBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
