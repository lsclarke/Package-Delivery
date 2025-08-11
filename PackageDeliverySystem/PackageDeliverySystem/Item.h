#ifndef _ITEM_HPP_
#define _ITEM_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <thread>
#include <mutex>

//Base Item class for all derived classes
class Item
{
public:
	virtual void content() = 0;
};

#endif // _ITEM_HPP_