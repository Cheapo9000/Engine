// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassClientBubbleInfoBase.h"

#ifdef MASSREPLICATION_MassClientBubbleInfoBase_generated_h
#error "MassClientBubbleInfoBase.generated.h already included, missing '#pragma once' in MassClientBubbleInfoBase.h"
#endif
#define MASSREPLICATION_MassClientBubbleInfoBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassClientBubbleInfoBase ************************************************
struct Z_Construct_UClass_AMassClientBubbleInfoBase_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassClientBubbleInfoBase(); \
	friend struct ::Z_Construct_UClass_AMassClientBubbleInfoBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassClientBubbleInfoBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister) \
	DECLARE_SERIALIZER(AMassClientBubbleInfoBase)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassClientBubbleInfoBase(AMassClientBubbleInfoBase&&) = delete; \
	AMassClientBubbleInfoBase(const AMassClientBubbleInfoBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, AMassClientBubbleInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassClientBubbleInfoBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassClientBubbleInfoBase) \
	MASSREPLICATION_API virtual ~AMassClientBubbleInfoBase();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassClientBubbleInfoBase;

// ********** End Class AMassClientBubbleInfoBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
