#include "RunnerInfo.h"

// "RunnerInfo::" means SetTime is a RunnerInfo member function
void RunnerInfo::SetTime(int timeRunSecs) {
	timeRun = timeRunSecs;  // timeRun refers to data member
	return;
}

void RunnerInfo::SetDist(double distRunMiles) {
	distRun = distRunMiles;
	return;
}

double RunnerInfo::GetSpeedMph() const {
	return distRun / (timeRun / 3600.0); // miles / (secs / (hrs / 3600 secs))
}

