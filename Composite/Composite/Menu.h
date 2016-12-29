#ifndef __Menu__
#define __Menu__

#include "menucomponent.h"

class Menu :
	public MenuComponent
{
public:
	Menu(string name, string description);
	~Menu(void);
    void add(MenuComponent *menuComponent);
	void remove(MenuComponent *menuComponent);
	MenuComponent* getChild(int i);
	string getName();
	string getDescription();
	void print();

private:
	vector<MenuComponent*> menuComponents_;
	string name_;
	string description_;
};

#endif