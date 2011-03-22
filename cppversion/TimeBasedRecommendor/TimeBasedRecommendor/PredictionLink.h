#ifndef _PREDICTION_LINK_H_
#define _PREDICTION_LINK_H_

#include "RatingMovingAverage.h"
#include "ParticipationMovingAverage.h"
#include "Distribution.h"
#include "ScatterPlot.h"

class PredictionLink
{
public:
	PredictionLink(void);
	PredictionLink(MovingAverage* input, RatingMovingAverage* output);
	void update(void);
	Distribution guess(void);
	//Distribution guess(DateTime when);
private:
	MovingAverage* inputData;
	RatingMovingAverage* outputData;
	ScatterPlot plot;
	DateTime latestUpdateTime;
};

#endif