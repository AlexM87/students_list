//#pragma once
#include "../inc/database.hpp"

std::vector<Person*> peopleCollection;

void Database::addPerson(Person* person)
{
  peopleCollection.push_back(person);
}

void Database::showDatabase()
{
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    std::cout<<peopleCollection[i]->getName()<<std::endl;
  } 
}

void Database::findBySurname(std::string surname)
{ 
  std::string tmp;
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    tmp = peopleCollection[i]->getSurname();
    if(tmp == surname) {
      std::cout<<"something"; //tutaj wyswietlenie
    }
  }
}

void Database::findByPesel(std::string pesel)
{
  std::string tmp;
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    tmp = peopleCollection[i]->getPesel();
    if(tmp == pesel) {
      std::cout<<"something";// tutaj wyswietlenie
    }
  }
}

void Database::sortBySalary()
{
  sort(peopleCollection.begin(), peopleCollection.end(), sortBySalaryCriterion());
}

void Database::sortByPesel()
{ 
  sort(peopleCollection.begin(), peopleCollection.end(), sortByPeselCriterion());
}

void Database::sortBySurname()
{
  sort(peopleCollection.begin(), peopleCollection.end(), sortBySurnameCriterion());
}

void Database::deleteByPesel(std::string pesel)
{
  std::string tmp;
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    tmp = peopleCollection[i]->getPesel();
    if(tmp == pesel) {
      std::cout<<"something"; //tutaj erase
    }
  }
}

void Database::modifiySalary(std::string pesel)
{ //settery
  std::string tmp;
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    tmp = peopleCollection[i]->getPesel();
    if(tmp == pesel) {
      std::cout<<"something"; //tutaj zamien
    }
  }
}

void Database::modifiyAddress(std::string pesel)
{ //settery
  std::string tmp;
  unsigned int size = peopleCollection.size();
  for(int i = 0; i<size; i++) {
    tmp = peopleCollection[i]->getPesel();
    if(tmp == pesel) {
      std::cout<<"something"; //tutaj zamien
    }
  }
}
