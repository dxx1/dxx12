#ifndef __Observer__
#define __Observer__

#include "stdhead.h"
class Subject;

class Observer
{
public:
	Observer(void);
	~Observer(void);
	virtual void update(float temperature, float humidity, float pressure) = 0;
	virtual void display() = 0;
protected:
	Subject *weatherData_;
};

#endif