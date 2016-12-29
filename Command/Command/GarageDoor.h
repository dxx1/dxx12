#ifndef __GarageDoor__
#define __GarageDoor__

#include "stdhead.h"

class GarageDoor
{
public:
	GarageDoor(void);
	~GarageDoor(void);
	void up();
	void down();
	void stop();
	void lightOn();
	void lightOff();
};

#endif