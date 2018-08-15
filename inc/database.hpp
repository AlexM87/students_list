#pragma once
#include "student.hpp"
#include "employee.hpp"
#include "person.hpp"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Database{
  public:
   void addPerson(Person* person);
   void showDatabase();
   void findBySurname();
   void findByPesel();
   void sortBySalary();
   void sortByPesel();
   void sortBySurname();
   void deleteByPesel();
};

class sortByPeselCriterion {
  public:
  bool operator()(Person* a, Person* b) {
    return a->getPesel() > b->getPesel();
  }
};

class sortBySalaryCriterion {
  public:
  bool operator()(Person* a, Person* b) {
    return a->getSalary() > b->getSalary();
  }
};

class sortBySurnameCriterion {
  public:
  bool operator()(Person* a, Person* b) {
    return a->getSurname() > b->getSurname();
  }
};
