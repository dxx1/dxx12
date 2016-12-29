#ifndef __LightOffCommand__
#define __LightOffCommand__

#include "command.h"

class LightOffCommand :
	public Command
{
public:
	LightOffCommand(Light *light);
	~LightOffCommand(void);
    void execute();
	void undo();
private:
	Light *light_;
};

#endif