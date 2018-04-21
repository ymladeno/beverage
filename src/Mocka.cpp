/*
 * Mocka.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Mocka.hpp"

Mocka::Mocka(Beverage& beverage) : beverage(beverage) {
}

std::string Mocka::getDescription() {
	return beverage.getDescription() + ", Mocka";
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
