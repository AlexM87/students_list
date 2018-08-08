#include "../inc/employee.hpp"

Employee::Employee (std::string n, std::string s, std::string a, std::string se, std::string p, int sa) 
  : Person(n, s, a, se, p) 
{
  salary = sa;
}

int Employee::getSalary()
{
  return this->salary;
}

int Employee::getIndex()
{
  return 0;
}
