// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerBeaconHostObject.h"

#ifdef MULTISERVERREPLICATION_MultiServerBeaconHostObject_generated_h
#error "MultiServerBeaconHostObject.generated.h already included, missing '#pragma once' in MultiServerBeaconHostObject.h"
#endif
#define MULTISERVERREPLICATION_MultiServerBeaconHostObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMultiServerBeaconHostObject *********************************************
struct Z_Construct_UClass_AMultiServerBeaconHostObject_Statics;
MULTISERVERREPLICATION_API UClass* Z_Construct_UClass_AMultiServerBeaconHostObject_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiServerBeaconHostObject(); \
	friend struct ::Z_Construct_UClass_AMultiServerBeaconHostObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERREPLICATION_API UClass* ::Z_Construct_UClass_AMultiServerBeaconHostObject_NoRegister(); \
public: \
	DECLARE_CLASS2(AMultiServerBeaconHostObject, AOnlineBeaconHostObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerReplication"), Z_Construct_UClass_AMultiServerBeaconHostObject_NoRegister) \
	DECLARE_SERIALIZER(AMultiServerBeaconHostObject)


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMultiServerBeaconHostObject(AMultiServerBeaconHostObject&&) = delete; \
	AMultiServerBeaconHostObject(const AMultiServerBeaconHostObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiServerBeaconHostObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiServerBeaconHostObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiServerBeaconHostObject) \
	NO_API virtual ~AMultiServerBeaconHostObject();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMultiServerBeaconHostObject;

// ********** End Class AMultiServerBeaconHostObject ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerReplication_Private_MultiServerBeaconHostObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
