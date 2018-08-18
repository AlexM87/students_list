#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class Person
{ 
  private:
   std::string name;
   std::string surname;
   std::string address;
   std::string sex;
   std::string pesel;
  public:
   Person (std::string n, std::string s, std::string a, std::string se, std::string p);
   //virtual  ~Person();
   std::string getName();
   std::string getSurname();
   std::string getAddress();
   std::string getSex();
   std::string getPesel();
   void setAddress(std::string a);
   virtual int getIndex() = 0;
   virtual int getSalary() = 0;
   virtual void setSalary(int) = 0;
};
