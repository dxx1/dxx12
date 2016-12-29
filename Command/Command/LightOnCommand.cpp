#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light *light)
:light_(light)
{
}

LightOnCommand::~LightOnCommand(void)
{
}

void LightOnCommand::execute()
{
	light_->on();
}

void LightOnCommand::undo()
{
	light_->off();
}
