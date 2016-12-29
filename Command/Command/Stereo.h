#ifndef __Stereo__
#define __Stereo__

#include "stdhead.h"

class Stereo
{
public:
	Stereo(void);
	~Stereo(void);
	void on()
	{
		cout<<"Stereo On!"<<endl;
	}
	void off()
	{
		cout<<"Stereo Off!"<<endl;
	}
	void setCD()
	{
		cout<<"Set CD!"<<endl;
	}
	void setVolume(int volume)
	{
		cout<<"Volume is: "<<volume<<endl;
	}
};

#endif