// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/VPFullScreenUserWidgetActor.h"

#ifdef VPUTILITIES_VPFullScreenUserWidgetActor_generated_h
#error "VPFullScreenUserWidgetActor.generated.h already included, missing '#pragma once' in VPFullScreenUserWidgetActor.h"
#endif
#define VPUTILITIES_VPFullScreenUserWidgetActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;

// ********** Begin Class AFullScreenUserWidgetActor ***********************************************
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUserWidget);


struct Z_Construct_UClass_AFullScreenUserWidgetActor_Statics;
VPUTILITIES_API UClass* Z_Construct_UClass_AFullScreenUserWidgetActor_NoRegister();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFullScreenUserWidgetActor(); \
	friend struct ::Z_Construct_UClass_AFullScreenUserWidgetActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VPUTILITIES_API UClass* ::Z_Construct_UClass_AFullScreenUserWidgetActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AFullScreenUserWidgetActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), Z_Construct_UClass_AFullScreenUserWidgetActor_NoRegister) \
	DECLARE_SERIALIZER(AFullScreenUserWidgetActor)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFullScreenUserWidgetActor(AFullScreenUserWidgetActor&&) = delete; \
	AFullScreenUserWidgetActor(const AFullScreenUserWidgetActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFullScreenUserWidgetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFullScreenUserWidgetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFullScreenUserWidgetActor) \
	NO_API virtual ~AFullScreenUserWidgetActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFullScreenUserWidgetActor;

// ********** End Class AFullScreenUserWidgetActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_Actors_VPFullScreenUserWidgetActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
