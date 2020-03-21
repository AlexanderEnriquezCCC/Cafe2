#ifndef CHANGECALCULATOR_H
#define CHANGECALCULATOR_H
#include <iostream>
#include <cmath>

class changeCalc
{
    private:
    //make coins to int for division, might need to get remainder, find out how to do that
    int m_Quarters;
    int m_Dime;
    int m_Nickel;
    int m_Penny;
    int m_Coins;

    public:
    void changeCalc();
    void calculateChange(double i);
};


#endif