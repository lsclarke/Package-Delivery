#ifndef _BOOK_HPP_
#define _BOOK_HPP_

#include "Item.h"

//Derived Class of Item
class Book : public Item
{
public:
	virtual void content() override { std::cout << "Book\n"; }
};
#endif 
