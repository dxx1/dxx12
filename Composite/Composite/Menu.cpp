#include "Menu.h"

Menu::Menu(string name, string description)
{
	this->name_ = name;
	this->description_ = description;
}

Menu::~Menu(void)
{
}

void Menu::add(MenuComponent *menuComponent)
{
	menuComponents_.push_back(menuComponent);
}

void Menu::remove(MenuComponent *menuComponent)
{
	vector<MenuComponent*>::iterator it = menuComponents_.begin();
	for(;it != menuComponents_.end(); it++)
	{
		if(*it == menuComponent)
		{
			break;
		}
	}
	menuComponents_.erase(it);
}

MenuComponent* Menu::getChild(int i)
{
	return menuComponents_[i];
}

string Menu::getName()
{
	return name_;
}

string Menu::getDescription()
{
	return description_;
}

void Menu::print()
{
	cout<<"\n"<<getName()<<": "<<getDescription()
	     <<"\n----------------------------\n";
	vector<MenuComponent*>::iterator it = menuComponents_.begin();
	for(; it != menuComponents_.end(); it++)
	{
		(*it)->print();
	}
}