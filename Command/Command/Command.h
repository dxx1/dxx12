#ifndef __Command__
#define __Command__

#include "stdhead.h"
#include "Light.h"
#include "GarageDoor.h"
#include "Stereo.h"

class Command
{
public:
	Command(void);
	virtual ~Command(void);
	virtual void execute() = 0;
	virtual void undo() = 0;
};

#endif