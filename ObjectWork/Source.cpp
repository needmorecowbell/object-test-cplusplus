#include <iostream>
#include "RunnerInfo.h"
using namespace std;

int main(){
	RunnerInfo runner1;
	runner1.SetTime(100);
	runner1.SetDist(3);
	cout<<runner1.GetSpeedMph();
	
	int c;
	cin >> c;
	return 0;
}