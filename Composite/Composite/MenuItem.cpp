#include "MenuItem.h"

MenuItem::MenuItem(string name, string description, bool vegetarian, double price)
{
	this->name_ = name;
	this->description_ = description;
	this->price_ = price;
	this->vegetarian_ = vegetarian;
}

MenuItem::~MenuItem(void)
{
}

void MenuItem::print()
{
	cout<<getName();
	if(isVegetarian())
	{
		cout<<"(V)";
	}
	cout<<": "<<getPrice();
	cout<<"  --  "<<getDescription()<<endl;
}