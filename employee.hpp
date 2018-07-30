#pragma once
#include <iostream>
#include <string>

struct employee
{
   std::string name;
   std::string surname;
   std::string address;
   std::string sex;
   int pesel;
   int salary;

   employee (std::string n =" ", std::string s=" ", std::string a=" ", std::string se=" ", int p= 4, int sa = 5):
      name(n), surname(s), address(a), sex (se), pesel (p), salary (sa) {}

    //Przechowywanie rekord�w pracownik�w o strukturze: Imi�, nazwisko, PESEL, p�e�, adres, zarobki.
};



