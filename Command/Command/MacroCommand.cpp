#include "MacroCommand.h"

MacroCommand::MacroCommand(void)
{
}

MacroCommand::~MacroCommand(void)
{
}

void MacroCommand::addCommand(Command *command)
{
	commands_.push_back(command);
}