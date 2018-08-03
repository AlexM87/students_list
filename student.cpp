#include "student.hpp"

Student::Student (std::string n, std::string s, std::string a, std::string se, std::string p, int in) 
  : Person(n, s, a, se, p)
{
  index = in;
}

