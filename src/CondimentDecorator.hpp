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
	CondimentDecorator(Beverage& beverage);
	virtual ~CondimentDecorator() = default;
	Beverage* getBeverage() const;

protected:
	Beverage& beverage;
};

#endif /* SRC_CONDIMENTDECORATOR_HPP_ */
