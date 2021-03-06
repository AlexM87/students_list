#pragma once
#include "person.hpp"
#include <string>

class Employee : public Person
{
  private:
   int salary;
  public:
   Employee (std::string n, std::string s, std::string a, std::string se, std::string p, int sa);
   //~Employee();
   int getSalary();
   int getIndex();
   void setSalary(int s);
};

/*
struct compareSalary
{
  bool operator() (employee e1, employee e2) 
  {
    if(e1.salary < e2.salary) return true;
    else return false;
  }
};
*/
