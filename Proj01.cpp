#include "Proj01.h"

int main()
{
    char x;
    int i = 0;
    std::cout << "Hello! Please type the letter c, three times.\n";
    while (i < 3) {
        std::cout << "> ";
        std::cin >> x;
        if (x == 'c') {
            i += 1;
        }
    }
    std::cout << "\nYou have typed three c's. Goodbye!";
}