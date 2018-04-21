/*
 * DarkRoast.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_HOUSEBLEND_HPP_
#define SRC_HOUSEBLEND_HPP_

#include "Beverage.hpp"

class HouseBlend : public Beverage {
public:
	virtual ~HouseBlend() = default;
	virtual double cost() override;
	std::string getDescription();

private:
	static constexpr double PRICE = .89;
};

#endif /* SRC_DARKROAST_HPP_ */
