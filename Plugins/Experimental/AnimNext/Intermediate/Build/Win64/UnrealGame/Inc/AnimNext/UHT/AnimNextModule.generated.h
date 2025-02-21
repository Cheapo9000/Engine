// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/AnimNextModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXT_AnimNextModule_generated_h
#error "AnimNextModule.generated.h already included, missing '#pragma once' in AnimNextModule.h"
#endif
#define ANIMNEXT_AnimNextModule_generated_h

#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextModule, NO_API)


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNextModule(); \
	friend struct Z_Construct_UClass_UAnimNextModule_Statics; \
public: \
	DECLARE_CLASS(UAnimNextModule, UAnimNextDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNext"), NO_API) \
	DECLARE_SERIALIZER(UAnimNextModule) \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNextModule(UAnimNextModule&&); \
	UAnimNextModule(const UAnimNextModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNextModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNextModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNextModule) \
	NO_API virtual ~UAnimNextModule();


#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_62_PROLOG
#define FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNEXT_API UClass* StaticClass<class UAnimNextModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNext_Internal_Module_AnimNextModule_h


#define FOREACH_ENUM_EANIMNEXTMODULEINITMETHOD(op) \
	op(EAnimNextModuleInitMethod::None) \
	op(EAnimNextModuleInitMethod::InitializeAndPause) \
	op(EAnimNextModuleInitMethod::InitializeAndPauseInEditor) \
	op(EAnimNextModuleInitMethod::InitializeAndRun) 

enum class EAnimNextModuleInitMethod : uint8;
template<> struct TIsUEnumClass<EAnimNextModuleInitMethod> { enum { Value = true }; };
template<> ANIMNEXT_API UEnum* StaticEnum<EAnimNextModuleInitMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
