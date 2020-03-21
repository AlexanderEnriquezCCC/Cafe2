#include "menu.hpp"


Menu::Menu()
{
    this->m_userChoice = "";
}

void Menu::addToPriceVect()
{
    m_price.push_back(b->Price);
    m_price.push_back(c->Price);
    m_price.push_back(s->Price);
    m_price.push_back(t->Price);
}

void Menu::addToNameVect()
{
    m_name.push_back(b->Name);
    m_name.push_back(c->Name);
    m_name.push_back(s->Name);
    m_name.push_back(t->Name);
}

void Menu::Display()
{
    std::cout << "------------------------------------" << std::endl;
    for(x = 0; x > m_name.size(); x++)
    {
        std::cout << m_name[x] << ": " << m_price[x] << std::endl;
    }
    std::cout << "------------------------------------" << std::endl;
    std::cout << "What would you like to buy." << std::endl;
    
    std::cin >> m_userChoice;
    switch (m_userChoice)
    {
    case "Burger":
        p.Purchase(b);
        break;

    case "Coffee":
        p.Purchase(c);
        break;

    case "Sandwhich":
        p.Purchase(s);
        break;

    case "Tea":
        p.Purchase(t);
        break;
    
    default:
        break;
    }
}