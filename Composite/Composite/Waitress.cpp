#include "Waitress.h"

Waitress::Waitress(MenuComponent *allMenus)
{
	this->allMenus_ = allMenus;
}

Waitress::~Waitress(void)
{
}

void Waitress::printMenu()
{
    allMenus_->print();
}
