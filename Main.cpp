#include "Emergencycenter.h"
#include "Component.h"
#include "Composite.h"
#include "Smoke.h"
#include "Action.h"
#include "Police.h"
#include "Motion.h"
#include "Gas.h"

#include <iostream>
#include <memory>


int main()
  {
    try{
      auto emergencyCenter = std::make_unique<Emergencycenter>();

      auto mainComposite = std::make_shared<Composite>("Main");
      emergencyCenter->setMainComposite(mainComposite);

      //making some sensors and composites
      auto smokesensor = std::make_shared<Smoke>(10);
      smokesensor->setVendor("KU Leuven");
      emergencyCenter->addComponent(mainComposite,smokesensor);
      auto smokesensor1 = std::make_shared<Smoke>(10);
      emergencyCenter->addComponent(mainComposite,smokesensor1);
      auto smokesensor2 = std::make_shared<Smoke>(10);
      smokesensor2->setVendor("Imec");
      emergencyCenter->addComponent(mainComposite,smokesensor2);
      auto groupT = std::make_shared<Composite>("group T");
      emergencyCenter->addComponent(mainComposite,groupT);
      auto motionsensor = std::make_shared<Motion>(2, 20);
      emergencyCenter->addComponent(groupT, motionsensor);
      auto motionsensor2 = std::make_shared<Motion>(2 , 8);
      motionsensor2->setVendor("KU Leuven");
      emergencyCenter->addComponent(groupT, motionsensor2);
      auto gasSensor = std::make_shared<Gas>(3);
      emergencyCenter -> addComponent(groupT, gasSensor);
      auto motionsensor3 = std::make_shared<Motion>(5 , 20);
      motionsensor3->setVendor("Dirk");
      emergencyCenter->addComponent(mainComposite, motionsensor3);


      //emergencyCenter->getInfo();
      //groupT->removeComponent();
      emergencyCenter->getInfo();


      ++ *smokesensor;

      std::cout << *smokesensor;

      -- *smokesensor;

      //Sorting on ID & print it
      std::vector<std::shared_ptr<Sensor>> sortedSensorsOnId = emergencyCenter->sortOnId(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON ID:" << std::endl;
      for (std::shared_ptr<Sensor> sensor : sortedSensorsOnId){
         cout << *sensor;
      }

      //Sorting on type & print it
      std::vector<std::shared_ptr<Sensor>> sortedSensorsOnType = emergencyCenter->sortOnType(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON TYPE:" << std::endl;
      for (std::shared_ptr<Sensor> sensor : sortedSensorsOnType){
         cout << *sensor;
      }

      //Sorting on vendor & print it
      std::vector<std::shared_ptr<Sensor>> sortedSensorsOnVendor = emergencyCenter->sortOnVendor(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON VENDOR:" << std::endl;
      for (std::shared_ptr<Sensor> sensor : sortedSensorsOnVendor){
         cout << *sensor;
      }

  }
  catch (char const* msg)
  {
      std::cout << msg;
  }

  return 0;

  }

/*
 * Solution to the question:
 * We simulate the actions by activating the sensors from our application. In real situation it is the
 * other way around: the sensors should activate the emergency center. Which techniques could
 * you use to implement this? Which one will you use for this specific situation?
 *
 * In this case we could use a Design pattern called the "Command Pattern". This is an Object behavioral pattern in which
 * the sender and receiver are decoupled by encapsulating a request as an object in and of itself. This lets you
 * parameterize clients with different requests, queu or log requests. It can also be thought of as a call-bacl method.
 */
