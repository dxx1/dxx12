#ifndef __LightOnCommand__
#define __LightOnCommand__

#include "command.h"

class LightOnCommand :
	public Command
{
public:
	LightOnCommand(Light *light);
	~LightOnCommand(void);
	void execute();
	void undo();

private:
	Light *light_;
};

#endif