// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassDebugVisualizer.h"

#ifdef MASSGAMEPLAYDEBUG_MassDebugVisualizer_generated_h
#error "MassDebugVisualizer.generated.h already included, missing '#pragma once' in MassDebugVisualizer.h"
#endif
#define MASSGAMEPLAYDEBUG_MassDebugVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassDebugVisualizer *****************************************************
struct Z_Construct_UClass_AMassDebugVisualizer_Statics;
MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_AMassDebugVisualizer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassDebugVisualizer(); \
	friend struct ::Z_Construct_UClass_AMassDebugVisualizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSGAMEPLAYDEBUG_API UClass* ::Z_Construct_UClass_AMassDebugVisualizer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassDebugVisualizer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassGameplayDebug"), Z_Construct_UClass_AMassDebugVisualizer_NoRegister) \
	DECLARE_SERIALIZER(AMassDebugVisualizer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassDebugVisualizer(AMassDebugVisualizer&&) = delete; \
	AMassDebugVisualizer(const AMassDebugVisualizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSGAMEPLAYDEBUG_API, AMassDebugVisualizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassDebugVisualizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassDebugVisualizer) \
	MASSGAMEPLAYDEBUG_API virtual ~AMassDebugVisualizer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassDebugVisualizer;

// ********** End Class AMassDebugVisualizer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
