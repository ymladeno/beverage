/*
 * Mocka.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Mocka.hpp"

Mocka::Mocka(Beverage& beverage) : CondimentDecorator(beverage) {
}

arrayOfStrings Mocka::getDescription() {
	arrayOfStrings arrs = beverage.getDescription();
	arrs.push_back("Mocka");
	return arrs;
}

double Mocka::cost() {
	double cost = beverage.cost();

	if (beverage.getSize() == Beverage::Size::small) {
		cost += .20;
	}
	else if (beverage.getSize() == Beverage::Size::medium) {
		cost += .25;
	}
	else {
		cost += .30;
	}

	return cost;
}
