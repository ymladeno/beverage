/*
 * Beverage.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "Beverage.hpp"

Beverage::Beverage(Size size) : size(size) {
}

void Beverage::setSize(Size size) {
	this->size = size;
}

Beverage::Size Beverage::getSize() const {
	return size;
}
