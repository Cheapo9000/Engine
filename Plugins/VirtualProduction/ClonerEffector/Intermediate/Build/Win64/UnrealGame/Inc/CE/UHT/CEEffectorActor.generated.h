// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorActor.h"

#ifdef CLONEREFFECTOR_CEEffectorActor_generated_h
#error "CEEffectorActor.generated.h already included, missing '#pragma once' in CEEffectorActor.h"
#endif
#define CLONEREFFECTOR_CEEffectorActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorComponent;

// ********** Begin Class ACEEffectorActor *********************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorComponent);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACEEffectorActor, CLONEREFFECTOR_API)


struct Z_Construct_UClass_ACEEffectorActor_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_ACEEffectorActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEEffectorActor(); \
	friend struct ::Z_Construct_UClass_ACEEffectorActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_ACEEffectorActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACEEffectorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_ACEEffectorActor_NoRegister) \
	DECLARE_SERIALIZER(ACEEffectorActor) \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACEEffectorActor(ACEEffectorActor&&) = delete; \
	ACEEffectorActor(const ACEEffectorActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, ACEEffectorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEEffectorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEEffectorActor) \
	CLONEREFFECTOR_API virtual ~ACEEffectorActor();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACEEffectorActor;

// ********** End Class ACEEffectorActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
