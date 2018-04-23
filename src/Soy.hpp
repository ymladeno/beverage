/*
 * Soy.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_SOY_HPP_
#define SRC_SOY_HPP_

#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator {
public:
	Soy(Beverage& beverage);
	virtual ~Soy() = default;
	virtual arrayOfStrings getDescription() override;
	virtual double cost() override;
};

#endif /* SRC_SOY_HPP_ */
