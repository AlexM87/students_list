#include "database.cpp"
#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello" << std::endl;
    Database object;
    object.addStudentBack("Krzysztof", "Bela");
    object.addStudentBack("Leszek", "Drzewo");
    object.addStudentIndex(3, "Jan", "Kowalski");
    object.addStudentIndex(5, "Jerzy", "Kaczka");
    object.addStudentIndex(7, "Kazimierz", "Meduza");
    object.addStudentIndex(12, "Roman", "Giera");
    object.addStudentIndex(6, "Piotr", "Srebrny");
    object.addStudentBack("Michał", "Urban");

    object.showVector();
    object.sortVector();
    object.showVector();
    object.deleteStudent(12);
    object.deleteStudent(1);
    object.deleteStudent(8);
    object.showVector();
    return 0;
}
