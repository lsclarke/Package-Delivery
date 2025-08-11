#ifndef _PACKAGE_HPP_
#define _PACKAGE_HPP_

#include "Item.h"
#include "Book.h"
#include "Food.h"
#include "Electronics.h"
#include <thread>
#include <mutex>

class PackageLabel {
private:
    //address info

    std::string firstname, lastname;
    std::string address;
    unsigned int zipCode{ 0 };
    std::string city; std::string state;

public:

    PackageLabel() = default;

    /// <summary>
    /// Contrsuctor responsible for displaying all the customer info and the destination of the package
    /// </summary>
    PackageLabel(std::string first_Name, std::string last_Name, unsigned int Zip_Code, std::string Address, std::string City, std::string State) :
        firstname{ first_Name }, lastname{ last_Name }, zipCode{ Zip_Code }, address{ Address }, city{ City }, state{ State } {
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << "Package #" << getPackageID() << " | Last Name: " << lastname << ", First Name: " << firstname << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
        std::cout << "Zip Code : " << zipCode << ", Address: " << address << "\nCity: " << city << ", State: " << state << std::endl;
        std::cout << "-----------------------------------------------------" << std::endl;
    };

    //Incrementing ID number for package labels
    int getPackageID();
};

class Package {
public:

    //constructors/deconstructors
    Package() = default;
    Package(std::vector<std::unique_ptr<Item>>& items);
    ~Package();

    //Func for display package contents and size
    void getPackageContent(std::vector<std::unique_ptr<Item>>& items);
    //Incrementing ID number for packages
    int getItemID();
};
#endif