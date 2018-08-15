#include "../inc/database.hpp"
#include <iostream>
#include <string>
int main()
{
    //std::cout << "Hello" << std::endl;
    Database peopleDatabase;
    Person* firstPerson = new Employee("Jan","Kowalski","Wroclaw", "M", "90032302616", 2300);
    Person* secondPerson = new Employee("Eleonora","Nowak","Gdansk", "M", "82032346518", 2450);
    Person* thirdPerson = new Student("Zbigniew","Swietach","Zamosc", "M", "70061238900", 230000);
    Person* fourthPerson = new Student("Adam","Kownacki","Lublin", "M", "92051360305", 23400);
    
    std::cout<<firstPerson->getName()<<std::endl;
    std::cout<<firstPerson->getSurname()<<std::endl;
    std::cout<<firstPerson->getAddress()<<std::endl;
    std::cout<<firstPerson->getSex()<<std::endl;
    std::cout<<firstPerson->getPesel()<<std::endl;
    std::cout<<firstPerson->getSalary()<<std::endl;
    std::cout<<thirdPerson->getIndex()<<std::endl;
    
    peopleDatabase.addPerson(firstPerson);
    peopleDatabase.addPerson(secondPerson);
    peopleDatabase.addPerson(thirdPerson);
    peopleDatabase.addPerson(fourthPerson);
    peopleDatabase.showDatabase();  
    //peopleDatabase.sortBySalary();
    //peopleDatabase.showDatabase();  
    peopleDatabase.sortByPesel();
    peopleDatabase.showDatabase(); 

    return 0;
}

/*
 * 90032302616 - 1990 marzec 23 M
 * 82032346518 - 1982 marzec 23 M
 * 70061238900 - 1970 czerwiec 12 K
 * 92051360305 - 1992 maj 13 K
 * 95072428010 - 1995 lipiec 24 M
 * 96072472405 - 1996 lipiec 24 K
 */
