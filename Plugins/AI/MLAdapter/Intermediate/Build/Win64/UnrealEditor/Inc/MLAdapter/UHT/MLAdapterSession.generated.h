// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sessions/MLAdapterSession.h"

#ifdef MLADAPTER_MLAdapterSession_generated_h
#error "MLAdapterSession.generated.h already included, missing '#pragma once' in MLAdapterSession.h"
#endif
#define MLADAPTER_MLAdapterSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMLAdapterSession ********************************************************
struct Z_Construct_UClass_UMLAdapterSession_Statics;
MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSession_NoRegister();

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterSession(); \
	friend struct ::Z_Construct_UClass_UMLAdapterSession_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MLADAPTER_API UClass* ::Z_Construct_UClass_UMLAdapterSession_NoRegister(); \
public: \
	DECLARE_CLASS2(UMLAdapterSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), Z_Construct_UClass_UMLAdapterSession_NoRegister) \
	DECLARE_SERIALIZER(UMLAdapterSession)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMLAdapterSession(UMLAdapterSession&&) = delete; \
	UMLAdapterSession(const UMLAdapterSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterSession) \
	NO_API virtual ~UMLAdapterSession();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_36_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMLAdapterSession;

// ********** End Class UMLAdapterSession **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
