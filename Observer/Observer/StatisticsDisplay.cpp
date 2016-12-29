#include "StatisticsDisplay.h"
#include "Subject.h"

StatisticsDisplay::StatisticsDisplay(Subject *weatherData)
:sum_(0.0), max_(0.0), min_(0.0), count_(0)
{
	weatherData_ = weatherData;
	weatherData_->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay(void)
{
	weatherData_->removeObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
	sum_ += temperature;
	count_++;
	if(temperature > max_){
		max_ = temperature;
	}else if(temperature < min_){
		min_ = temperature;
	}
	else
	{
	}

	display();
}

void StatisticsDisplay::display()
{
	cout<< "Avg/Max/Min temperature = "<<sum_/count_<<"/"<<max_<<"/"<<min_<<endl;
}