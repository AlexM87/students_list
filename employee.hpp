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

    //Przechowywanie rekordów pracowników o strukturze: Imiê, nazwisko, PESEL, p³eæ, adres, zarobki.
};



