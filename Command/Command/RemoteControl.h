#ifndef __RemoteControl__
#define __RemoteControl__

#include "NoCommand.h"
#include "GarageDoorCloseCommand.h"
#include "GarageDoorOpenCommand.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"
#include "MacroCommand.h"

#define COMMAND_SIZE 7

class RemoteControl
{
public:
	RemoteControl(void);
	~RemoteControl(void);
	void setCommand(int slot, Command *onCommand, Command *offCommand);
	void onButtonPushed(int slot);
	void offButtonPushed(int slot);
	void undoButtonPushed();

private:
	Command **onCommands_;
	Command **offCommands_;
	Command *undoCommand_;
};

#endif