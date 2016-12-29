#ifndef __MacroCommand__
#define __MacroCommand__

#include "command.h"

class MacroCommand :
	public Command
{
public:
	MacroCommand(void);
	~MacroCommand(void);
	void addCommand(Command *command);
	void execute()
	{
		vector<Command*>::iterator it= commands_.begin();
		for(;it != commands_.end(); it++)
		{
			(*it)->execute();
		}
	}
	void undo()
	{
	}

private:
	vector<Command*>commands_;
};

#endif