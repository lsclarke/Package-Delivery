#ifndef _FOOD_HPP_
#define _FOOD_HPP_

#include "Item.h"
#include <map>

//Derived Class of Item
class Food : public Item
{
private:
	std::string foodSectionName = "";
	std::string foodName = "";
	double foodPrice = 0.0;
public:


	Food(std::string grocerySectionName, std::string Name, double price) : foodSectionName{grocerySectionName}, foodName { Name }, foodPrice{ price } {}

	virtual void content() override { std::cout << "Food: (" << foodSectionName << ") " << foodName << "\n	  Price: " << foodPrice << std::endl;
	}
};
#endif 
