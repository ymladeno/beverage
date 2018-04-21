/*
 * Soy.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Soy.hpp"

Soy::Soy(Beverage& beverage) : beverage(beverage) {
}

std::string Soy::getDescription() {
	return beverage.getDescription() + ", Soy";
}

double Soy::cost() {
	return .15 + beverage.cost();
}
