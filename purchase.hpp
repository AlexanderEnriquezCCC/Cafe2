#ifndef PURCHASE_H
#define PURCHASE_H
#include <string>
#include "items.hpp"
#include "changeCalculator.hpp"

class Purchase
{
    private:
    int m_purchaseAmnt;
    int m_cash;
    double m_price;
    double m_giveBack;
    std::string m_purchaseChoice;
    calculateChange changeCalc = new calculateChange();
    public:
    Purchase();

    void PurchaseOptions(Items i);
};

#endif