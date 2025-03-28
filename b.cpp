#include <iostream>
#include <cstdlib>

void clear()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main()
{
    clear();
    system("g++ main.cpp -o PC-Price-Calculator");
    clear();
    system("./PC-Price-Calculator");
}