#ifndef __MenuComponent__
#define __MenuComponent__

#include "stdhead.h"
#include "UnsupportedOperation.h"

class MenuComponent
{
public:
	MenuComponent(void);
	virtual ~MenuComponent(void);
	// used by menu
	virtual void add(MenuComponent *menuComponent)
	{
		throw UnsupportedOperation();
	}
	virtual void remove(MenuComponent *menuComponent)
	{
		throw UnsupportedOperation();
	}
	virtual MenuComponent* getChild(int i)
	{
		throw UnsupportedOperation();
	}

	// used by menu item, some method also be used by menu .
	virtual string getName()
	{
		throw UnsupportedOperation();
	}
    virtual string getDescription()
	{
        throw UnsupportedOperation();
	}
	virtual double getPrice()
	{
        throw UnsupportedOperation();
	}
	virtual bool isVegetarian()
	{
		throw UnsupportedOperation();
	}

	// devived by menu item and menu
	virtual void print()
	{
		throw UnsupportedOperation();
	}
};


#endif
