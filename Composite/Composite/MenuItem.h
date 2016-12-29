#ifndef __MenuItem__
#define __MenuItem__

#include "menucomponent.h"

class MenuItem :
	public MenuComponent
{
public:
	MenuItem(string name, string description, bool vegetarian, double price);
	~MenuItem(void);
    string getName()
	{
		return name_;
	}
	string getDescription()
	{
		return description_;
	}
	double getPrice()
	{
		return price_;
	}
	bool isVegetarian()
	{
		return vegetarian_;
	}
	void print();

private:
	string name_;
	string description_;
	bool vegetarian_;
	double price_;
};

#endif