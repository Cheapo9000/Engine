// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/CEClonerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCEClonerComponent;
#ifdef CLONEREFFECTOR_CEClonerActor_generated_h
#error "CEClonerActor.generated.h already included, missing '#pragma once' in CEClonerActor.h"
#endif
#define CLONEREFFECTOR_CEClonerActor_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClonerComponent);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACEClonerActor, CLONEREFFECTOR_API)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEClonerActor(); \
	friend struct Z_Construct_UClass_ACEClonerActor_Statics; \
public: \
	DECLARE_CLASS(ACEClonerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(ACEClonerActor) \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACEClonerActor(ACEClonerActor&&); \
	ACEClonerActor(const ACEClonerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, ACEClonerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEClonerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEClonerActor) \
	CLONEREFFECTOR_API virtual ~ACEClonerActor();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class ACEClonerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_CEClonerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
