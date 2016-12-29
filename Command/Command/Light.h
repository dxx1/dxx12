#ifndef __Light__
#define __Light__

#include "stdhead.h"

class Light
{
public:
	Light(string name);
	~Light(void);
	void on()
	{
		cout<<name_+" On!"<<endl;
	}
	void off()
	{
		cout<<name_+" Off!"<<endl;
	}
	
private:
	string name_;
};

#endif