#include "Waitress.h"
#include "Menu.h"
#include "MenuItem.h"
#include "MenuComponent.h"

int main(int argc, char *argv[])
{
	MenuComponent *pancakeHouseMenu = new Menu("Pancake House Menu", "Breakfast");
	MenuComponent *dinerMenu = new Menu("Diner Menu", "Lunch");
	MenuComponent *cafeMenu = new Menu("Cafe Menu", "Dinner");
	MenuComponent *dessertMenu = new Menu("Dessert Menu", "Dessert of course!");

	MenuComponent *allMenus = new Menu("ALL MENUS", "All menu combined");
    allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);

    pancakeHouseMenu->add(new MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.85));
	pancakeHouseMenu->add(new MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.78));
	pancakeHouseMenu->add(new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49));
	pancakeHouseMenu->add(new MenuItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59));
    
	dinerMenu->add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
	dinerMenu->add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.98));
	dinerMenu->add(new MenuItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29));
	dinerMenu->add(new MenuItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05));

	cafeMenu->add(new MenuItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", true, 3.89));
	cafeMenu->add(dessertMenu);
	dessertMenu->add(new MenuItem("Aplle Pie", "Apple pie with a flakey crust, topped with vanilla ice cream", true, 1.59));

    Waitress *waitress = new Waitress(allMenus);
	waitress->printMenu();
	system("pause");

	return 0;
}