#ifndef _BOOK_HPP_
#define _BOOK_HPP_

#include "Item.h"

//Derived Class of Item
class Book : public Item
{
private:
	std::string bookTitle = "";
	double bookPrice = 0.0;
public:
	Book(std::string title, double price) : bookTitle{ title }, bookPrice {price}{}

	virtual void content() override { std::cout << "Book: " << bookTitle << "\n	  Price: " << bookPrice << std::endl; }
};
#endif 
