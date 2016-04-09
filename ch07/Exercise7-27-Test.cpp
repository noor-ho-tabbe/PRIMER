#include "Exercise7-27.h"
int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    std::cout << "\n";
    myScreen.display(cout);
    std::cout << "\n";
    return 0;
}