#include "CurrentConditionDisplay.h"
#include "Subject.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject *weatherData)
:temperature_(0.0), humidity_(0.0)
{
	weatherData_ = weatherData;
	weatherData_->registerObserver(this);
}

CurrentConditionDisplay::~CurrentConditionDisplay(void)
{
	weatherData_->removeObserver(this);
}

void CurrentConditionDisplay::update(float temperature, float humidity, float pressure)
{
	temperature_ = temperature;
    humidity_ = humidity;

	display();
}

void CurrentConditionDisplay::display()
{
	cout<<"Current conditions: "<<temperature_<<"F degrees and "<<humidity_<<"% humidity"<<endl;
}