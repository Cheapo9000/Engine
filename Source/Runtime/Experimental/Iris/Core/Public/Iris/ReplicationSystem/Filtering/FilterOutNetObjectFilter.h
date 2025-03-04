// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
#include "FilterOutNetObjectFilter.generated.h"

UCLASS(transient, MinimalAPI)
class UFilterOutNetObjectFilterConfig final : public UNetObjectFilterConfig
{
	GENERATED_BODY()
};

UCLASS()
class UFilterOutNetObjectFilter final : public UNetObjectFilter
{
	GENERATED_BODY()

protected:
	// UNetObjectFilter interface
	IRISCORE_API virtual void OnInit(const FNetObjectFilterInitParams&) override;
	virtual void OnDeinit() override {}
	virtual void OnMaxInternalNetRefIndexIncreased(uint32 NewMaxInternalIndex) override {}
	IRISCORE_API virtual bool AddObject(uint32 ObjectIndex, FNetObjectFilterAddObjectParams&) override;
	IRISCORE_API virtual void RemoveObject(uint32 ObjectIndex, const FNetObjectFilteringInfo&) override;
	IRISCORE_API virtual void Filter(FNetObjectFilteringParams&) override;
};
