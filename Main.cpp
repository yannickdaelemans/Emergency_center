#include "Emergencycenter.h"
#include "Component.h"

// don't remove, testing some shit
#include "Smoke.h"
#include "Action.h"
#include "Police.h"
#include <iostream>



int main()
  {
    try{
      auto * emergencyCenter = new Emergencycenter();

      emergencyCenter->setName("Test");
      std::cout << "Name of Emergencycenter: " << emergencyCenter->getName() << std::endl;

      auto * mainComponent = new Component();

      //don't remove testing shizzle

      auto * smoke = new Smoke(10, 10);
      smoke->setId(10);
      Police * popo = new Police ();
      //smoke->setExtraAction(popo);
      //smoke->test();
  }
  catch (char const* msg)
  //          ^^^^^
  {
      std::cout << msg;
  }

  return 0;



  /*
  Teacher *wouter, *danny;
  Student *paul, *wen;
  Course *statistics;

  wouter = new Teacher("Peters", "Wouter", 2);
  danny = new Teacher("Van Bever", "Danny", 1);
  paul = new Student("Joe", "Paul", 25002563);
  wen = new Student("Sun", "Wen", 998877665544332211);

  statistics = new Course("Statistics", danny, 20);
  statistics->setRoom("Aula");

  administration->addPerson(wouter);
  administration->addPerson(wen);
  administration->addPerson(paul);
  administration->addPerson(danny);
  administration->addCourse(statistics);

  danny->increaseSalary(20000.0f);

  administration->addStudentToCourse(wen, statistics);
  administration->addStudentToCourse(paul, statistics);

  statistics->printInformation();
  */


  }
