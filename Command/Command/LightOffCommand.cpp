#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light *light)
:light_(light)
{
}

LightOffCommand::~LightOffCommand(void)
{
}

void LightOffCommand::execute()
{
	light_->off();
}

void LightOffCommand::undo()
{
	light_->on();
}