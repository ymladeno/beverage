/*
 * CondimentPrettyPrint.cpp
 *
 *  Created on: 23 Apr 2018
 *      Author: osboxes
 */

#include <algorithm>
#include "CondimentPrettyPrint.hpp"

CondimentPrettyPrint::CondimentPrettyPrint(Beverage& beverage) : CondimentDecorator(beverage) {
}

double CondimentPrettyPrint::cost() {
	return beverage.cost();
}

arrayOfStrings CondimentPrettyPrint::getDescription() {
	arrayOfStrings arrs = beverage.getDescription();
	arrayOfStrings pretty{};
	arrayOfStrings trash{};
	for (auto it=arrs.begin(); it!=arrs.end(); it++) {
		size_t times = 1;
		for (auto it1=arrs.begin(); it1!=arrs.end(); it1++) {
			if ((it != it1) && (*it == *it1) &&
					(trash.end() == std::find(trash.begin(), trash.end(), *it))) {
				++times;
				trash.push_back(*it1);
			}
		}

		if(times > 1) {
			pretty.push_back(std::to_string(times) + " " + *it);
		}
		else if (trash.end() == std::find(trash.begin(), trash.end(), *it)){
			pretty.push_back(*it);
		}
		else {
			//already added to pretty
		}
	}
	return pretty;
}
