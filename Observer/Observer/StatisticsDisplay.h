#ifndef __StatisticsDisplay__
#define __StatisticsDisplay__

#include "observer.h"
#include <vector>
using namespace std;

class StatisticsDisplay :
	public Observer
{
public:
	StatisticsDisplay(Subject *weatherData);
	~StatisticsDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float sum_;
	float max_;
	float min_;
	int count_;
};

#endif