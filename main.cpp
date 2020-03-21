#include "menu.hpp"

//must make it list options.
/*How to set it up maybe
Set to list items in a menu class?
1. [item 1]: [price]
2. [item 2]: [price]
3. [item 3]: [price]

make a parent class with a Name and Price
*/
int main()
{
    int go = 0;
    Menu m = new Menu();
    
    do
    {
        m.Display();
    } while (go =0);
    
    return 0;
}