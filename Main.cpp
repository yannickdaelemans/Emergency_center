#include "Emergencycenter.h"
#include "Component.h"




int main()
  {
  auto * emergencyCenter = new Emergencycenter();

  emergencyCenter->setName("Test");
  std::cout << "Name of Emergencycenter: " << emergencyCenter->getName() << std::endl;

  auto * mainComponent = new Component();

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
