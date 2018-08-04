#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class Person
{ 
  public:
   Person (std::string n, std::string s, std::string a, std::string se, std::string p);
   //virtual  ~Person();
   std::string getName();
   std::string getSurname();
   std::string getAddress();
   std::string getSex();
   std::string getPesel();
  private:
   std::string name;
   std::string surname;
   std::string address;
   std::string sex;
   std::string pesel;
};
