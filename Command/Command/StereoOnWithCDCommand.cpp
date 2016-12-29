#include "StereoOnWithCDCommand.h"

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *stereo)
{
	stereo_ = stereo;
}

StereoOnWithCDCommand::~StereoOnWithCDCommand(void)
{
}

void StereoOnWithCDCommand::execute()
{
	stereo_->on();
    stereo_->setCD();
	stereo_->setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
    stereo_->off();
}