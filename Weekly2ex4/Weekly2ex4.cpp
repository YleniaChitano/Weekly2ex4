#include <iostream>

int main()
{
    int numbers{ 5 };
    while (numbers <= 50) {
    std::cout << numbers << '\n';
        numbers = (numbers + 5);
    }
    
}

