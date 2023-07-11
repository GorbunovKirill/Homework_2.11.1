#include "greeter.h"
#include <windows.h>
#include <iostream> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter user;

    user.greet();
 

    return 0;
}