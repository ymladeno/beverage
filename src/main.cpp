/*
 * main.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include <iostream>
#include "DarkRoast.hpp"
#include "Mocka.hpp"
#include "Whip.hpp"

int main() {
	Beverage* beverage = new DarkRoast;
	Beverage* beverage1 = new Mocka(*beverage);
    beverage1->setSize(Beverage::Size::large);
    beverage1 = new Mocka(*beverage1);
    beverage1 = new Whip(*beverage1);

    std::cout << beverage->getDescription() << " = " << beverage->cost() << std::endl;
    std::cout << beverage1->getDescription() << " = " << beverage1->cost() << std::endl;

	delete beverage1;
	delete beverage;
	return 0;
}
