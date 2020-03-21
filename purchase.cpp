#include "purchase.hpp"

Purchase::Purchase()
{
    this->m_purchaseAmnt = 0;
    this->m_price = 0;
    this->m_cash = 0;
    this->m_giveBack = 0;
}

void Purchase::PurchaseOptions(Items i) // will need to insert an item here, however price will be based off of item entered (tea/sandwhich/whatever), don't think i need vect
{
    std::cout << "What would you like to buy?" << std::endl;
    std::cin >> m_purchaseAmnt;
    m_price = m_purchaseAmnt * i.Price;
    std::cout << "How much would you like to give? We do not accept change."
    std::cin >> m_cash;
    if(m_cash < m_price)
    {
        std::cout << "This is less than what you need to pay..." << std::endl;
    }
    else
    {
        m_giveBack = m_price-m_cash;
        changeCalc.(m_giveBack);
    }
    
}