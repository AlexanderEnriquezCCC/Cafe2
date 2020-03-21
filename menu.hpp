#ifndef MENU_H
#define MENU_H
#include <vector>
#include <string>
#include "purchase.hpp"
#include "burger.hpp"
#include "coffee.hpp"
#include "sandwhich.hpp"
#include "tea.hpp"


class Menu
{
    private:

    Purchase * p = new Purchase();
    Burger * b = new Burger();
    Coffee * c = new Coffee();
    Sandwhich * s = new Sandwhich();
    Tea * t = new Tea();
    std::vector<double> m_price; //takes in items, items are each food
    std::vector<std::string> m_name;
    std::string m_userChoice;

    public:
    Menu();
    void addToPriceVect(); //will add vals of different items to vect
    void addToNameVect(); //will add strings of differnt items to vect
    void Display(); //will display m_name << "     " << m_price
};

/*
"
------------------------------
m_name[0]: $m_price[0]
m_name[1]: $m_price[1]
m_name[2]: $m_price[2]
------------------------------
"
*/

#endif