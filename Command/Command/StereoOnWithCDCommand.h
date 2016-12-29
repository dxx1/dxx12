#ifndef __StereoOnWithCDCommand__
#define __StereoOnWithCDCommand__

#include "command.h"

class StereoOnWithCDCommand :
	public Command
{
public:
	StereoOnWithCDCommand(Stereo *stereo);
	~StereoOnWithCDCommand(void);
    void execute();
	void undo();

private:
	Stereo *stereo_;
};

#endif