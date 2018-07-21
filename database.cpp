#include "database.hpp"
#include <vector>
#include <string>
#include <iostream>

void Database::addStudentBack(std::string name, std::string surname)
{
    size_t sizeOfVector = vectorOfIndex.size();
    unsigned short int nextIndex = 0;
        nextIndex = 1 + sizeOfVector;
       if (sizeOfVector == 0) nextIndex = 1;
        vectorOfIndex.push_back(nextIndex);
        vectorOfName.push_back(name);
        vectorOfSurname.push_back(surname);
}
void Database::showVector()
{
    std::cout << "------LIST------" << std::endl;
   for (size_t i=0; i < vectorOfIndex.size(); i++)
   {
       std::cout << vectorOfIndex[i] << ". " << vectorOfName[i] << " " << vectorOfSurname[i] << std::endl;
    }
   std::cout << "----------------" << std::endl;
}
void Database::sortVector()
{
    int iHelp;
    std::string nHelp;
    std::string sHelp;

   size_t sizeOfVector = vectorOfIndex.size();
    for (unsigned int i = 0; i < sizeOfVector; i++)
    {
        unsigned int max = i;
        for (unsigned int j = i+1; j < sizeOfVector; j++)
        {
            if ( vectorOfIndex[j] < vectorOfIndex[max])
                max = j;
        }

        iHelp = vectorOfIndex[max];
        nHelp = vectorOfName[max];
        sHelp = vectorOfSurname[max];

        vectorOfIndex[max] = vectorOfIndex[i];
        vectorOfName[max] = vectorOfName[i];
        vectorOfSurname[max] = vectorOfSurname[i];

        vectorOfIndex[i] = iHelp;
        vectorOfName[i] = nHelp;
        vectorOfSurname[i] = sHelp;
}
}
void Database::addStudentIndex(unsigned short int index, std::string name, std::string surname)
 {
     vectorOfIndex.push_back(index);
     vectorOfName.push_back(name);
     vectorOfSurname.push_back(surname);
    sortVector();
 }

void Database::deleteStudent(unsigned short int index)
{
    for (unsigned int i = 0; i <= vectorOfIndex.size(); i++)
    {
        if(vectorOfIndex[i] == index)
        {

            std::cout << "Delete: " << vectorOfIndex[i] << ". " << vectorOfName[i] << " " << vectorOfSurname[i] << std::endl;

            vectorOfIndex.erase(vectorOfIndex.begin() + i);
            vectorOfName.erase(vectorOfName.begin() + i);
            vectorOfSurname.erase(vectorOfSurname.begin() +i);
          
        }
    }
}









