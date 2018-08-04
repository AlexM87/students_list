#pragma once
#include "student.hpp"
#include "employee.hpp"
#include "database.hpp"
#include "person.hpp"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Database{
  public:
   void addPerson(Person* person);
};

