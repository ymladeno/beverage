/*
 * Whip.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Whip.hpp"

Whip::Whip(Beverage& beverage) : beverage(beverage) {
}

std::string Whip::getDescription() {
	return beverage.getDescription() + ", Whip";
}

double Whip::cost() {
	return .10 + beverage.cost();
}
