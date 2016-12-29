#ifndef __GarageDoorOpenCommand__
#define __GarageDoorOpenCommand__

#include "command.h"

class GarageDoorOpenCommand :
	public Command
{
public:
	GarageDoorOpenCommand(GarageDoor *garageDoor);
	~GarageDoorOpenCommand(void);
	void execute();
	void undo();

private:
	GarageDoor *garageDoor_;
};

#endif