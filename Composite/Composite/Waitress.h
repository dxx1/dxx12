#ifndef __Waitress__
#define __Waitress__

#include "MenuComponent.h"

class Waitress
{
public:
	Waitress(MenuComponent *allMenus);
	~Waitress(void);
    void printMenu();

private:
    MenuComponent *allMenus_;
};

#endif