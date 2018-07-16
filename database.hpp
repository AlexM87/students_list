#pragma once
#include <list>
#include <string>
class Database{
    std::list <unsigned short int> listOfIndex;
    std::list <std::string> listOfName;
    std::list <std::string> listOfSurname;

    void sortList(); //sort students list

public:

    void addStudentBack(std::string name, std::string surname); //here adding on back with next deflaut index number
    void addStudentIndex(unsigned short int index, std::string name, std::string surname); //here adding on back with index and sort to take it in right place
    void deleteStudent(unsigned short int); // delete student by index
    void showList(); // show students list
};
