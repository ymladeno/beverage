/*
 * CondimentDecorator.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_CONDIMENTDECORATOR_HPP_
#define SRC_CONDIMENTDECORATOR_HPP_

#include "Beverage.hpp"

class CondimentDecorator : public Beverage {
public:
	virtual ~CondimentDecorator() = default;
	virtual std::string getDescription() = 0;
};

#endif /* SRC_CONDIMENTDECORATOR_HPP_ */
