#include "WeatherData.h"

WeatherData::WeatherData(void)
{
}

WeatherData::~WeatherData(void)
{
}

void WeatherData::registerObserver(Observer *ob)
{
	observers_.push_back(ob);
}

void WeatherData::removeObserver(Observer *ob)
{
	observers_.remove(ob);
}

void WeatherData::notifyObservers()
{
	list<Observer *>::iterator it = observers_.begin();
	for(;it != observers_.end(); it++)
	{
		(*it)->update(temperature_, humidity_, pressure_);
	}
}