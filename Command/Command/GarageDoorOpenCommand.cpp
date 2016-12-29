#include "GarageDoorOpenCommand.h"

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor *garageDoor)
{
	garageDoor_ = garageDoor;
}

GarageDoorOpenCommand::~GarageDoorOpenCommand(void)
{
}

void GarageDoorOpenCommand::execute()
{ 
    garageDoor_->up();
	cout<<"Wait";
	for(int i=0;i<1000000;i++)
	{
		if(i%100000 ==0)
			cout<<".";
	}
	cout<<endl;
	garageDoor_->stop();
    garageDoor_->lightOn();
}

void GarageDoorOpenCommand::undo()
{
    garageDoor_->lightOff();
	garageDoor_->down();
	for(int i=0;i<1000;i++);
    garageDoor_->stop();
}