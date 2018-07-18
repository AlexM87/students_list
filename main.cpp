#include "database.hpp"
#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello" << std::endl;
    unsigned short int index;
    std::string name;
    std::string surname;
    Database object;
    for(unsigned short int i = 1; i <= 5; i++)
    {
   // std::cin >> index;
    std::cin >> name;
    std::cin >> surname;
    std::cout << " done " << std::endl;

    object.addStudentBack(name, surname);
   
    }

    object.showvector();

    return 0;
}
