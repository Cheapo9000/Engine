// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverNetworkPredictionLiaison.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_MoverNetworkPredictionLiaison_generated_h
#error "MoverNetworkPredictionLiaison.generated.h already included, missing '#pragma once' in MoverNetworkPredictionLiaison.h"
#endif
#define MOVER_MoverNetworkPredictionLiaison_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverNetworkPredictionLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverNetworkPredictionLiaisonComponent_Statics; \
public: \
	DECLARE_CLASS(UMoverNetworkPredictionLiaisonComponent, UNetworkPredictionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverNetworkPredictionLiaisonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverNetworkPredictionLiaisonComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverNetworkPredictionLiaisonComponent(UMoverNetworkPredictionLiaisonComponent&&); \
	UMoverNetworkPredictionLiaisonComponent(const UMoverNetworkPredictionLiaisonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverNetworkPredictionLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverNetworkPredictionLiaisonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoverNetworkPredictionLiaisonComponent) \
	NO_API virtual ~UMoverNetworkPredictionLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverNetworkPredictionLiaisonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverNetworkPredictionLiaison_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
