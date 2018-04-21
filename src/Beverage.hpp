/*
 * Beverage.hpp
 *
 *  Created on: 20 Apr 2018
 *      Author: osboxes
 */

#ifndef SRC_BEVERAGE_HPP_
#define SRC_BEVERAGE_HPP_

#include <string>
#include <vector>

class Beverage {
public:
	enum class Size {
		small,
		medium,
		large
	};
	Beverage(Size size = Size::small);
	virtual ~Beverage() = default;
	virtual std::string getDescription();
	virtual void setSize(const Size size);
	virtual Size getSize() const;
	virtual double cost() = 0;
private:
	Size size;
};

#endif /* SRC_BEVERAGE_HPP_ */
