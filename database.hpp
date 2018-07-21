#pragma once
#include <vector>
#include <string>
class Database{
    std::vector <unsigned short int> vectorOfIndex;
    std::vector <std::string> vectorOfName;
    std::vector <std::string> vectorOfSurname;

public:

    void sortVector(); //sort students vector
    void addStudentBack(std::string name, std::string surname); //here adding on back with next deflaut index number
    void addStudentIndex(unsigned short int index, std::string name, std::string surname); //here adding on back with index and sort to take it in right place
    void deleteStudent(unsigned short int); // delete student by index
    void showvector(); // show students vector
};
