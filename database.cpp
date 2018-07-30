#pragma once
#include "database.hpp"
#include "student.hpp"
#include "employee.hpp"
#include <vector>
#include <string>
#include <iostream>

void Database::addStudent(std::string name, std:: string surname, std::string address, std::string sex, int pesel, int index)
{
   student s(name, surname, address, sex, pesel, index);
   vectorOfStudent.push_back(s);
};


void Database::addEmployee(std::string name, std:: string surname, std::string address, std::string sex, int pesel, int salary)
{
   employee e(name, surname, address, sex, pesel, salary);
   vectorOfEmployee.push_back(e);

}


void Database::showDatabase()
{
   std::cout << "STUDENCI" << std::endl;
   if (vectorOfStudent.size() != NULL)
   {

      for (size_t i=0; i < vectorOfStudent.size(); i++)
      {
            std::cout << vectorOfStudent[i].name << " " << vectorOfStudent[i].surname << " "<< vectorOfStudent[i].address<<" "
            << vectorOfStudent[i].sex << " " << vectorOfStudent[i].pesel << " "<< vectorOfStudent[i].index <<" "<< std::endl;
      }

   }
   std::cout << "----------------" << std::endl;
   std::cout << "PRACOWNICY" << std::endl;
   {

   for (size_t i=0; i < vectorOfEmployee.size(); i++)
   {
      std::cout << vectorOfEmployee[i].name << " " << vectorOfEmployee[i].surname << " "<< vectorOfEmployee[i].address<<" "
            << vectorOfEmployee[i].sex << " " << vectorOfEmployee[i].pesel << " "<< vectorOfEmployee[i].salary <<" "<< std::endl;
   }

   }
   std::cout << "----------------" << std::endl;
}









