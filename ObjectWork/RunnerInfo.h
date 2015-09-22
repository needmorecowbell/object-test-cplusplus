class RunnerInfo {
public:                                // The class' public functions
	void   SetTime(int timeRunSecs);       // Time run in seconds
	void   SetDist(double distRunMiles);   // Distance run in miles
	double GetSpeedMph() const;            // Speed in miles/hour
private:  // The class' private internal data members
	int    timeRun;
	double distRun;
};