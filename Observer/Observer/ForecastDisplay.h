#ifndef __ForecastDisplay__
#define __ForecastDisplay__

#include "observer.h"

class ForecastDisplay :
	public Observer
{
public:
	ForecastDisplay(Subject *weatherData);
	~ForecastDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();

private:
    float pressure_;
};

#endif