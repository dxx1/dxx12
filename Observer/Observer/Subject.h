#ifndef __Subject__
#define __Subject__

#include "stdhead.h"
#include "Observer.h"

class Subject
{
public:
	Subject(void);
	virtual ~Subject(void);
	virtual void registerObserver(Observer *ob) = 0;
	virtual void removeObserver(Observer *ob) = 0;
	virtual void notifyObservers() = 0;
};

#endif