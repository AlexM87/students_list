//#pragma once
#include "database.hpp"

std::vector<Person*> peopleCollection;

void Database::addPerson(Person* person)
{
  peopleCollection.push_back(person);
}

