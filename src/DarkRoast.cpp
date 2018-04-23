/*
 * DarkRoast.cpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#include "DarkRoast.hpp"

arrayOfStrings DarkRoast::getDescription() {
	return arrayOfStrings{"DarkRoast"};
}

double DarkRoast::cost() {
	return PRICE;
}
