/*
 * DarkRoast.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "HouseBlend.hpp"

arrayOfStrings HouseBlend::getDescription() {
	return arrayOfStrings{"HouseBlend"};
}

double HouseBlend::cost() {
	return PRICE;
}
