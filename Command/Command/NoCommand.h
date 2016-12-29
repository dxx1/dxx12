#ifndef __NoCommand__
#define __NoCommand__

#include "command.h"

class NoCommand :
	public Command
{
public:
	NoCommand(void);
	~NoCommand(void);
	void execute()
	{
		cout<<"Execution NoCommand do nothing!"<<endl;
	}
	void undo()
	{
		cout<<"Undo NoCommand do nothing"<<endl;
	}
};

#endif