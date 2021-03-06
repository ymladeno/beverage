/*
 * Whip.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_WHIP_HPP_
#define SRC_WHIP_HPP_

#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator {
public:
	Whip(Beverage& beverage);
	virtual ~Whip() = default;
	virtual arrayOfStrings getDescription() override;
	virtual double cost() override;
};

#endif /* SRC_WHIP_HPP_ */
