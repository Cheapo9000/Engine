// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolActivities/PolyEditActivityContext.h"

#ifdef MESHMODELINGTOOLS_PolyEditActivityContext_generated_h
#error "PolyEditActivityContext.generated.h already included, missing '#pragma once' in PolyEditActivityContext.h"
#endif
#define MESHMODELINGTOOLS_PolyEditActivityContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPolyEditActivityContext *************************************************
struct Z_Construct_UClass_UPolyEditActivityContext_Statics;
MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyEditActivityContext(); \
	friend struct ::Z_Construct_UClass_UPolyEditActivityContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MESHMODELINGTOOLS_API UClass* ::Z_Construct_UClass_UPolyEditActivityContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UPolyEditActivityContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), Z_Construct_UClass_UPolyEditActivityContext_NoRegister) \
	DECLARE_SERIALIZER(UPolyEditActivityContext)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MESHMODELINGTOOLS_API UPolyEditActivityContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPolyEditActivityContext(UPolyEditActivityContext&&) = delete; \
	UPolyEditActivityContext(const UPolyEditActivityContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MESHMODELINGTOOLS_API, UPolyEditActivityContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyEditActivityContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyEditActivityContext) \
	MESHMODELINGTOOLS_API virtual ~UPolyEditActivityContext();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPolyEditActivityContext;

// ********** End Class UPolyEditActivityContext ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditActivityContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
