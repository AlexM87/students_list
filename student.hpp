#pragma once
#include <iostream>
#include <string>

struct student
{

   std::string name;
   std::string surname;
   std::string address;
   std::string sex;
   int pesel;
   int index;

   student(std::string n="", std:: string s ="", std::string a="", std::string se ="", int p =2, int i=2 ):
        name(n), surname(s), address(a),sex(se), pesel(p), index(i) {}



    // Przechowywanie rekord�w student�w o strukturze: Imi�, nazwisko, PESEL, p�e�, adres, nr indeksu.
};
