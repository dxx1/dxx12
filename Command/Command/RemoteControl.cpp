#include "RemoteControl.h"

RemoteControl::RemoteControl(void)
{
	onCommands_ = new Command*[COMMAND_SIZE];
    offCommands_ = new Command*[COMMAND_SIZE];
	Command *noCommand = new NoCommand();
	for(int i=0;i<COMMAND_SIZE;i++)
	{
		onCommands_[i] = noCommand;
		offCommands_[i] = noCommand;
	}
	undoCommand_ = noCommand;
}

RemoteControl::~RemoteControl(void)
{
	for(int i=0;i<COMMAND_SIZE;i++)
	{
		if(onCommands_[i])
		{
			delete onCommands_[i];
			onCommands_[i] = NULL;
		}
		if(offCommands_[i])
		{
			delete offCommands_[i];
			offCommands_[i] = NULL;
		}
	}

	delete []onCommands_;
	delete []offCommands_;
	delete undoCommand_;
}

void RemoteControl::setCommand(int slot, Command *onCommand, Command *offCommand)
{
	 onCommands_[slot] = onCommand;
	 offCommands_[slot] = offCommand;
}

void RemoteControl::onButtonPushed(int slot)
{
	(onCommands_[slot])->execute();
    undoCommand_ = onCommands_[slot];
}

void RemoteControl::offButtonPushed(int slot)
{
	(offCommands_[slot])->execute();
	undoCommand_ = onCommands_[slot];
}

void RemoteControl::undoButtonPushed()
{
	undoCommand_->undo();
}