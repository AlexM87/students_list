#include "database.hpp"
#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello" << std::endl;
    Database stud;
    stud.addStudent("Krzysztof", "Bela", "Zielona 6","M", 4424,224);
    stud.addStudent("Ryszard", "Ziom", "Zielona 6","M", 44245,2245);
    stud.addEmployee("Krzyszt", "Bel", "Zielona 6","M", 44254,2234);
    stud.showDatabase();

    return 0;
}
