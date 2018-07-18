#include "database.hpp"
#include <vector>
#include <string>
#include <iostream>

void Database::addStudentBack(std::string name, std::string surname)
{
    //std::vector<unsigned short int> iterator iter=vectorOfIndex.end(); //set for get last index number
    //--iter; //set last index number
    size_t sizeOfvector = vectorOfIndex.size();
    std::cout << "FLAGA 1" << std::endl;
    unsigned short int nextIndex = 0;
        nextIndex = 1 + sizeOfvector;
       if (sizeOfvector == 0) nextIndex = 1;
        std::cout << "FLAGA 2" << std::endl;
        vectorOfIndex.push_back(nextIndex);
        vectorOfName.push_back(name);
        vectorOfSurname.push_back(surname);
}
void Database::showvector()
{
    std::cout << "------LIST------" << std::endl;
   for (size_t i=0; i < vectorOfIndex.size(); i++)
   {
       std::cout << vectorOfIndex[i] << ". " << vectorOfName[i] << " " << vectorOfSurname[i] << std::endl;
    }
}
void Database::sortvector()
{
    int iHelp;
    std::string sHelp;
    
}
