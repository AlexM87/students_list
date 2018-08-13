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
  
  std::cout<<peopleCollection[0]->getName();
  
}

void Database::findBySurname()
{
}

void Database::findByPesel()
{
}

void Database::sortBySalary()
{
}

void Database::sortByPesel()
{
}

void Database::sortBySurname()
{
}

void Database::deleteByPesel()
{
}
