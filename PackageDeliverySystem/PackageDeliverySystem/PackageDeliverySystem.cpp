// PackageDeliverySystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Package.h"

int main()
{
    //Vector to store item pointers
    std::vector<std::unique_ptr<Item>> itemsSet1;

    //insert new derived class instances into vector
    itemsSet1.emplace_back(std::make_unique<Book>());
    itemsSet1.emplace_back(std::make_unique<Book>());
    itemsSet1.emplace_back(std::make_unique<Book>());
    itemsSet1.emplace_back(std::make_unique<Book>());
    itemsSet1.emplace_back(std::make_unique<Book>());

    //create Pakage Label pointer for Package pointer instance
    std::unique_ptr<PackageLabel> unitLabel1 = std::make_unique<PackageLabel>("John", "Doe", 27604, "15 East Peace Street", "Raleigh", "NC");
    std::unique_ptr<Package> unitPackage1{ std::make_unique<Package>(itemsSet1) };


    return 0;
}