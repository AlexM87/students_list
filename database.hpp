#pragma once
#include "student.hpp"
#include "employee.hpp"
#include <vector>
#include <string>

class Database{
public:
   std::vector <student> vectorOfStudent;
   std::vector <employee> vectorOfEmployee;

   void addStudent( std::string name, std:: string surname, std::string address, std::string sex, int pesel, int index); //
   void addEmployee(std::string name, std:: string surname, std::string address, std::string sex, int pesel, int salary); //
   void showDatabase();//

};


/*
- Wyszukiwanie po nazwisku i numerze PESEL
- Wyœwietlanie pe³nej bazy danych
- Sortowanie po zarobkach, PESELu, nazwisku
- Wype³nianie bazy danych sztucznymi danymi
- Wczytywanie z pliku i zapisywanie ca³ej bazy w pliku
- Usuwanie po numerze PESEL
- Modyfikacja zarobków i adresu po numerze PESEL
- Walidacja czy numer PESEL jest poprawny Wiki - poprawnoœæ PESEL
*/
