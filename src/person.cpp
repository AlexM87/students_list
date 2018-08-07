#include "person.hpp"

Person::Person (std::string n, std::string s, std::string a, std::string se, std::string p)
{
  name=n;
  surname=s;
  address=a;
  sex=se;
  pesel=p;
}

std::string Person::getName()
{
  return this->name;
}

std::string Person::getSurname()
{
  return this->surname;
}

std::string Person::getAddress()
{
  return this->address;
}

std::string Person::getSex()
{
  return this->sex;
}

std::string Person::getPesel()
{
  return this->pesel;
}
