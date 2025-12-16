// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassRepresentationActorManagement.h"

#ifdef MASSREPRESENTATION_MassRepresentationActorManagement_generated_h
#error "MassRepresentationActorManagement.generated.h already included, missing '#pragma once' in MassRepresentationActorManagement.h"
#endif
#define MASSREPRESENTATION_MassRepresentationActorManagement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassRepresentationActorManagement ***************************************
struct Z_Construct_UClass_UMassRepresentationActorManagement_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassRepresentationActorManagement(); \
	friend struct ::Z_Construct_UClass_UMassRepresentationActorManagement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassRepresentationActorManagement, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister) \
	DECLARE_SERIALIZER(UMassRepresentationActorManagement)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MASSREPRESENTATION_API UMassRepresentationActorManagement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassRepresentationActorManagement(UMassRepresentationActorManagement&&) = delete; \
	UMassRepresentationActorManagement(const UMassRepresentationActorManagement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, UMassRepresentationActorManagement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassRepresentationActorManagement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassRepresentationActorManagement) \
	MASSREPRESENTATION_API virtual ~UMassRepresentationActorManagement();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassRepresentationActorManagement;

// ********** End Class UMassRepresentationActorManagement *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationActorManagement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
