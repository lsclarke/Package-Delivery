#ifndef _ELECTRONICS_HPP_
#define _ELECTRONICS_HPP_

#include "Item.h"

//Derived Class of Item
class Electronics : public Item
{
private:
	std::string brandName = "";
	std::string electronicName = "";
	double electronicPrice = 0.0;
public:
	Electronics(std::string brand, std::string name, double price) : brandName{ brand }, electronicName{ name }, electronicPrice{ price } {}

	virtual void content() override {
		std::cout << "Electronic: (" << brandName << ") " << electronicName << "\n	  Price: " << electronicPrice << std::endl;
	}
};
#endif 
