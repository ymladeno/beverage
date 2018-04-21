/*
 * Mocka.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_MOCKA_HPP_
#define SRC_MOCKA_HPP_

#include "CondimentDecorator.hpp"

class Mocka : public CondimentDecorator {
public:
	Mocka(Beverage& beverage);
	virtual ~Mocka() = default;
	virtual std::string getDescription() override;
	virtual double cost() override;

private:
	Beverage& beverage;
};

#endif /* SRC_MOCKA_HPP_ */
