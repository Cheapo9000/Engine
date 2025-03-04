// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreTypes.h"

// TraceServices
#include "TraceServices/Model/TimingProfiler.h"

// TraceInsights
#include "Insights/TimingProfiler/ViewModels/StatsAggregator.h"

namespace TraceServices
{
	class IAnalysisSession;
	class ITimingProfilerButterfly;
}

namespace UE::Insights::TimingProfiler
{

class FTimerButterflyAggregator : public FStatsAggregator
{
public:
	FTimerButterflyAggregator() : FStatsAggregator(TEXT("Butterfly")) {}
	virtual ~FTimerButterflyAggregator() {}

	TraceServices::ITimingProfilerButterfly* GetResultButterfly() const;
	void ResetResults();

protected:
	virtual IStatsAggregationWorker* CreateWorker(TSharedPtr<const TraceServices::IAnalysisSession> InSession) override;
};

} // namespace UE::Insights::TimingProfiler
