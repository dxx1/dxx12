#ifndef __GarageDoorCloseCommand__
#define __GarageDoorCloseCommand__

#include "command.h"

class GarageDoorCloseCommand :
	public Command
{
public:
	GarageDoorCloseCommand(GarageDoor *garageDoor);
	~GarageDoorCloseCommand(void);
	void execute();
	void undo();

private:
    GarageDoor *garageDoor_;
};

#endif