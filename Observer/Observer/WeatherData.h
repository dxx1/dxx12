#ifndef __WeatherData__
#define __WeatherData__

#include "subject.h"

class WeatherData :
	public Subject
{
public:
	WeatherData(void);
	~WeatherData(void);
	virtual void registerObserver(Observer *ob);
	virtual void removeObserver(Observer *ob);
	virtual void notifyObservers();
    void measurementsChanged()
	{
		notifyObservers();
	}
	void setMeasurements(float temperature, float humidity, float pressure)
	{
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
		measurementsChanged();
	}

private:
	list<Observer*> observers_;
	float temperature_;
	float humidity_;
	float pressure_;
};

#endif