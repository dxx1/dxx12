#include "GarageDoorCloseCommand.h"

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor *garageDoor)
{
	garageDoor_ = garageDoor;
}

GarageDoorCloseCommand::~GarageDoorCloseCommand(void)
{
}

void GarageDoorCloseCommand::execute()
{
    garageDoor_->lightOff();
	garageDoor_->down();
	cout<<"Wait";
	for(int i=0;i<1000000;i++)
	{
		if(i%100000 ==0)
			cout<<".";
	}
	cout<<endl;
    garageDoor_->stop();
}

void GarageDoorCloseCommand::undo()
{
    garageDoor_->up();
	for(int i=0;i<1000;i++);
	garageDoor_->stop();
    garageDoor_->lightOn();
}