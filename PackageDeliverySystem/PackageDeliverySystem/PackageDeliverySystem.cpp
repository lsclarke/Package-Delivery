// PackageDeliverySystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Package.h"

void SendPackageToHolding(std::unique_ptr<Package>& package) {
    
}

int main()
{
    //Vector to store item pointers
    std::vector<std::unique_ptr<Item>> itemsSet1;

    itemsSet1.emplace_back(std::make_unique <Electronics> ("Duracell", "AA Batteries 6ct", 12.99));

    itemsSet1.emplace_back(std::make_unique<Book>("Harry Potter and the Chamber of Secrets", 14.99));

    itemsSet1.emplace_back(std::make_unique<Food>("Fruit", "Mango", 1.09));

    itemsSet1.emplace_back(std::make_unique<Food>("Fruit", "Strawberries", 7.99));

    itemsSet1.emplace_back(std::make_unique<Food>("Fruit", "Bananas 6ct", 6.99));

    //create Pakage Label pointer for Package pointer instance
    std::unique_ptr<PackageLabel> package_Label_One = std::make_unique<PackageLabel>("John", "Doe", 27604, "15 East Peace Street", "Raleigh", "NC");

    std::unique_ptr<Package> package_Number_One{ std::make_unique<Package>(itemsSet1) };

    std::cin.get();

    return 0;
}