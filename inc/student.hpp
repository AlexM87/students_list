#pragma once
#include "person.hpp"
#include <string>

class Student : public Person
{
  public:
   Student(std::string n, std:: string s, std::string a, std::string se, std::string p, int in);
   //~Student();
   int getIndex();
   int getSalary();
   void setSalary(int s);
  private:
   int index;
};
