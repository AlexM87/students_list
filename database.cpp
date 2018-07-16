#include "database.hpp"
#include <list>
#include <string>
#include <iostream>

void Database::addStudentBack(std::string name, std::string surname)
{
    //std::list<unsigned short int> iterator iter=listOfIndex.end(); //set for get last index number
    //--iter; //set last index number
    size_t sizeOfList = listOfIndex.size();
    std::cout << "FLAGA 1" << std::endl;
    unsigned short int nextIndex = 0;
        nextIndex = 1 + sizeOfList;
       if (sizeOfList == 0) nextIndex = 1;
        std::cout << "FLAGA 2" << std::endl;
        listOfIndex.push_back(nextIndex);
        listOfName.push_back(name);
        listOfSurname.push_back(surname);
}
void Database::showList()
{
    std::list <unsigned short int> :: iterator iIndex = listOfIndex.begin();
    std::list <std::string> :: iterator iName = listOfName.begin();
    std::list <std::string> :: iterator iSurname = listOfSurname.begin();
    std::cout << "__________LIST__________" << std::endl; 
    for (; iIndex != listOfIndex.end(); iIndex++, iName++, iSurname++)
    {
        std::cout << *iIndex << ". " << *iName << " " << *iSurname << std::endl;
    }
}
