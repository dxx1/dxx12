#include "RemoteControl.h"

int main(int argc, char *argv[])
{
    RemoteControl *remoteControl = new RemoteControl();
	Light *livingRoomLight = new Light("Living Room");
	Light *kitchenLight = new Light("Kitchen");
	GarageDoor *garageDoor = new GarageDoor();
	Stereo *stereo = new Stereo();

	LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
	LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);

	LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
	LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);

    GarageDoorCloseCommand *garageDoorClose = new GarageDoorCloseCommand(garageDoor);
	GarageDoorOpenCommand *garageDoorOpen = new GarageDoorOpenCommand(garageDoor);

    StereoOffCommand *stereoOff = new StereoOffCommand(stereo);
	StereoOnWithCDCommand *stereoOnWithCD = new StereoOnWithCDCommand(stereo);

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
	remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
	remoteControl->setCommand(2, garageDoorOpen, garageDoorClose);
	remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

	remoteControl->onButtonPushed(0);
	remoteControl->undoButtonPushed();
	remoteControl->offButtonPushed(0);

	remoteControl->onButtonPushed(1);
	remoteControl->offButtonPushed(1);
	remoteControl->undoButtonPushed();

	remoteControl->onButtonPushed(2);
	remoteControl->offButtonPushed(2);

	remoteControl->onButtonPushed(3);
	remoteControl->offButtonPushed(3);
	remoteControl->undoButtonPushed();

	MacroCommand *groupOnCommand = new MacroCommand();
    groupOnCommand->addCommand(livingRoomLightOn);
	groupOnCommand->addCommand(kitchenLightOn);
	groupOnCommand->addCommand(garageDoorOpen);

	MacroCommand *groupOffCommand = new MacroCommand();
	groupOffCommand->addCommand(livingRoomLightOff);
	groupOffCommand->addCommand(kitchenLightOff);
	groupOffCommand->addCommand(garageDoorClose);
	remoteControl->setCommand(4,groupOnCommand,groupOffCommand); 
	remoteControl->onButtonPushed(4);
	remoteControl->offButtonPushed(4);
	system("pause");
	return 0;
}