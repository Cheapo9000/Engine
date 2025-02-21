// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/CEEffectorActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEEffectorComponent;
#ifdef CLONEREFFECTOR_CEEffectorActor_generated_h
#error "CEEffectorActor.generated.h already included, missing '#pragma once' in CEEffectorActor.h"
#endif
#define CLONEREFFECTOR_CEEffectorActor_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEffectorComponent);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACEEffectorActor, CLONEREFFECTOR_API)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEEffectorActor(); \
	friend struct Z_Construct_UClass_ACEEffectorActor_Statics; \
public: \
	DECLARE_CLASS(ACEEffectorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(ACEEffectorActor) \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACEEffectorActor(ACEEffectorActor&&); \
	ACEEffectorActor(const ACEEffectorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, ACEEffectorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEEffectorActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEEffectorActor) \
	CLONEREFFECTOR_API virtual ~ACEEffectorActor();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class ACEEffectorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_CEEffectorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
