/*
 * CondimentDecorator.cpp
 *
 *  Created on: 23 Apr 2018
 *      Author: osboxes
 */

#include "CondimentDecorator.hpp"

CondimentDecorator::CondimentDecorator(Beverage& beverage) : beverage(beverage) {
}

Beverage* CondimentDecorator::getBeverage() const {
	return &beverage;
}
