#include "changeCalculator.hpp"

changeCalc::changeCalc()
{
    this->Quarter = 25;
    this->Dime = 10;
    this->Nickle = 5;
    this->Penny = 1;
    this->m_Coins = 0;
}

changeCalc::calculateChange(double i)
{
    //don't think I need dollars if I floor i, then subtract from total of i, i*100 to convert to int, do cash
    int dollars = double floor (i);
    i = i-dollars;
    m_Coins = i*100;
    std::cout << "Your cash is $" << dollars << " dollars,\n" << m_Coins/Quarter << " quarters," << std::endl;//need to get remainder
    m_Coins = m_Coins%Quarter;
    std::cout << m_Coins/Dime << " dimes," << std::endl;
    m_Coins = m_Coins%Dime;
    std::cout << m_Coins/Nickle << " nickles," << std::endl;
    m_Coins = m_Coins%Nickle;
    std::cout << "and " << m_Coins/Penny << " pennies" << std::endl; 
}