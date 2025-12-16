// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassVisualizer.h"

#ifdef MASSREPRESENTATION_MassVisualizer_generated_h
#error "MassVisualizer.generated.h already included, missing '#pragma once' in MassVisualizer.h"
#endif
#define MASSREPRESENTATION_MassVisualizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassVisualizer **********************************************************
struct Z_Construct_UClass_AMassVisualizer_Statics;
MASSREPRESENTATION_API UClass* Z_Construct_UClass_AMassVisualizer_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassVisualizer(); \
	friend struct ::Z_Construct_UClass_AMassVisualizer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPRESENTATION_API UClass* ::Z_Construct_UClass_AMassVisualizer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassVisualizer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassRepresentation"), Z_Construct_UClass_AMassVisualizer_NoRegister) \
	DECLARE_SERIALIZER(AMassVisualizer)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassVisualizer(AMassVisualizer&&) = delete; \
	AMassVisualizer(const AMassVisualizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPRESENTATION_API, AMassVisualizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassVisualizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassVisualizer) \
	MASSREPRESENTATION_API virtual ~AMassVisualizer();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassVisualizer;

// ********** End Class AMassVisualizer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
