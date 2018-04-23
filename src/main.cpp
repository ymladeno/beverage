/*
 * main.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include <iostream>
#include <cassert>
#include "DarkRoast.hpp"
#include "Mocka.hpp"
#include "Whip.hpp"
#include "CondimentPrettyPrint.hpp"

std::ostream& operator<<(std::ostream& os, Beverage* pobj) {
	assert(pobj != nullptr);

	arrayOfStrings arrs = pobj->getDescription();

	for(auto str : arrs) {
		os << str << ", ";
	}

	os << " $" << std::to_string(pobj->cost());

	return os;
}

int main() {
	Beverage* beverage = new DarkRoast;
	beverage = new Mocka(*beverage);
    beverage->setSize(Beverage::Size::large);
    beverage = new Mocka(*beverage);
    beverage = new Whip(*beverage);
    beverage = new CondimentPrettyPrint(*beverage);

    std::cout << beverage << std::endl;

	delete beverage;
	return 0;
}
