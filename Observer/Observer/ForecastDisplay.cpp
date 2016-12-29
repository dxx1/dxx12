#include "ForecastDisplay.h"
#include "Subject.h"

ForecastDisplay::ForecastDisplay(Subject *weatherData)
:pressure_(0.0)
{
	weatherData_ = weatherData;
	weatherData_->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay(void)
{
	weatherData_->removeObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{
    pressure_ = pressure;
	display();
}

void ForecastDisplay::display()
{
	cout<<"Watch out for cooler, rainy weather!"<<endl;
}