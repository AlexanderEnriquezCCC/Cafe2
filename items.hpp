#ifndef ITEMS_H
#define ITEMS_H
#include <string>
//parent class for all cafe food items
class Items
{
    private:
    //I don't think there's any priv members needed

    public:
    Items();
    double Price = 2.00;
    std::string Name;
    //int Quantity;
};

#endif