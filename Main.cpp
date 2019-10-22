#include "Emergencycenter.h"
#include "Component.h"
#include "Composite.h"

// don't remove, testing some shit
#include "Smoke.h"
#include "Action.h"
#include "Police.h"
#include "Motion.h"

#include <iostream>
#include <memory>


int main()
  {
    try{
      auto emergencyCenter = std::make_unique<Emergencycenter>("Name Emergencycenter");

      auto * mainComposite = new Composite(1, "Main");
      emergencyCenter->setMainComposite(mainComposite);

      auto * smokesensor = new Smoke(9, 10);
      emergencyCenter->addComponent(mainComposite,smokesensor);
      auto * smokesensor1 = new Smoke(10, 10);
      emergencyCenter->addComponent(mainComposite,smokesensor1);
      auto * smokesensor2 = new Smoke(11, 10);
      emergencyCenter->addComponent(mainComposite,smokesensor2);

      auto * groupT = new Composite(2, "group T");
      emergencyCenter->addComponent(mainComposite,groupT);
      auto * motionsensor = new Motion(3, 2, 20);
      emergencyCenter->addComponent(groupT, motionsensor);

      emergencyCenter->getInfo();
      groupT->removeComponent();
      emergencyCenter->getInfo();


      //don't remove testing shizzle
      std::cout<< "Testing the Actions"<< std::endl;
      auto * smoke = new Smoke(10, 10);
      smoke->setId(15);
      auto popo = new Police();
      smoke->setExtraAction(popo);
      smoke->test();
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
