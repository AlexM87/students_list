#pragma once
#include "person.hpp"
#include <iostream>
#include <string>

class Student : public Person
{
   Student(std::string n, std:: string s, std::string a, std::string se, std::string p, int in);
   //~Student();
  private:
   int index;
};
