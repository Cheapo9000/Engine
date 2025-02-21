// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Backends/MoverStandaloneLiaison.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_MoverStandaloneLiaison_generated_h
#error "MoverStandaloneLiaison.generated.h already included, missing '#pragma once' in MoverStandaloneLiaison.h"
#endif
#define MOVER_MoverStandaloneLiaison_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoverStandaloneLiaisonComponent(); \
	friend struct Z_Construct_UClass_UMoverStandaloneLiaisonComponent_Statics; \
public: \
	DECLARE_CLASS(UMoverStandaloneLiaisonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mover"), NO_API) \
	DECLARE_SERIALIZER(UMoverStandaloneLiaisonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMoverStandaloneLiaisonComponent*>(this); }


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoverStandaloneLiaisonComponent(UMoverStandaloneLiaisonComponent&&); \
	UMoverStandaloneLiaisonComponent(const UMoverStandaloneLiaisonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoverStandaloneLiaisonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoverStandaloneLiaisonComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoverStandaloneLiaisonComponent) \
	NO_API virtual ~UMoverStandaloneLiaisonComponent();


#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVER_API UClass* StaticClass<class UMoverStandaloneLiaisonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_Backends_MoverStandaloneLiaison_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
