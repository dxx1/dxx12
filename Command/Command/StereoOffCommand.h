#ifndef __StereoOffCommand__
#define __StereoOffCommand__

#include "command.h"

class StereoOffCommand :
	public Command
{
public:
	StereoOffCommand(Stereo *stereo);
	~StereoOffCommand(void);
    void execute();
	void undo();

private:
	Stereo *stereo_;
};

#endif