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

void Database::findBySurname()
{ 
}

void Database::findByPesel()
{
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

void Database::deleteByPesel()
{
}
