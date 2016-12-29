#ifndef __CurrentConditionDisplay__
#define __CurrentConditionDisplay__

#include "observer.h"

class CurrentConditionDisplay :
	public Observer
{
public:
	CurrentConditionDisplay(Subject *weatherData);
	~CurrentConditionDisplay(void);
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	float temperature_;
	float humidity_;
};

#endif