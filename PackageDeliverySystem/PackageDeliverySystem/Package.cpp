#include "Package.h"

//Constructor
Package::Package(std::vector<std::unique_ptr<Item>>& items) { getPackageContent(items); }
//Deconstructor
Package::~Package() {}

/// <summary>
/// Contrsuctor responsible for displaying all the contents within a package and the size count of package
/// </summary>
void Package::getPackageContent(std::vector<std::unique_ptr<Item>>& items)
{
    std::cout << "Package Content Size #" << items.size() << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    for (auto& i : items) {
        std::cout << "Item #" << getItemID() << " | ";
        i->content();
    }
    std::cout << "-----------------------------------------------------" << std::endl;
}

//Incrementing ID number for packages
int Package::getItemID()
{
    static int id;
    id += 1;
    return id;
}

//---PackageLabel Functions
int PackageLabel::getPackageID()
{
    static int id;
    id += 1;
    return id;
}