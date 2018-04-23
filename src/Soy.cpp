/*
 * Soy.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Soy.hpp"

Soy::Soy(Beverage& beverage) : CondimentDecorator(beverage) {
}

arrayOfStrings Soy::getDescription() {
	arrayOfStrings arrs = beverage.getDescription();
	arrs.push_back("Soy");
	return arrs;
}

double Soy::cost() {
	return .15 + beverage.cost();
}
