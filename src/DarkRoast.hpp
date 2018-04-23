/*
 * DarkRoast.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_DARKROAST_HPP_
#define SRC_DARKROAST_HPP_

#include "Beverage.hpp"

class DarkRoast : public Beverage {
public:
	virtual ~DarkRoast() = default;
	virtual double cost() override;
	virtual arrayOfStrings getDescription() override;

private:
	static constexpr double PRICE = .99;
};

#endif /* SRC_DARKROAST_HPP_ */
