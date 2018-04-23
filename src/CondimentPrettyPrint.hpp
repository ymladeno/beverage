/*
 * CondimentPrettyPrint.hpp
 *
 *  Created on: 23 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_CONDIMENTPRETTYPRINT_HPP_
#define SRC_CONDIMENTPRETTYPRINT_HPP_

#include "CondimentDecorator.hpp"

class CondimentPrettyPrint : public CondimentDecorator {
public:
	CondimentPrettyPrint(Beverage& beverage);
	virtual ~CondimentPrettyPrint() = default;
	virtual double cost() override;
	virtual arrayOfStrings getDescription() override;
	//friend std::ostream& operator<<(std::ostream& os, Beverage& obj);
};

#endif /* SRC_CONDIMENTPRETTYPRINT_HPP_ */
