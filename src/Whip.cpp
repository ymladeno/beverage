/*
 * Whip.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Whip.hpp"

Whip::Whip(Beverage& beverage) : CondimentDecorator(beverage) {
}

arrayOfStrings Whip::getDescription() {
	arrayOfStrings arrs = beverage.getDescription();
	arrs.push_back("Whip");
	return arrs;
}

double Whip::cost() {
	return .10 + beverage.cost();
}
