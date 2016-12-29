#include "StereoOffCommand.h"

StereoOffCommand::StereoOffCommand(Stereo *stereo)
{
	stereo_ = stereo;
}

StereoOffCommand::~StereoOffCommand(void)
{
}

void StereoOffCommand::execute()
{
	stereo_->off();
}

void StereoOffCommand::undo()
{
	stereo_->on();
    stereo_->setCD();
	stereo_->setVolume(11);
}