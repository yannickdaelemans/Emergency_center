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

      auto * mainComposite = new Composite("Main");
      emergencyCenter->setMainComposite(mainComposite);

      //making some sensors and composites
      auto * smokesensor = new Smoke(10);
      smokesensor->setVendor("KU Leuven");
      emergencyCenter->addComponent(mainComposite,smokesensor);
      auto * smokesensor1 = new Smoke(10);
      emergencyCenter->addComponent(mainComposite,smokesensor1);
      auto * smokesensor2 = new Smoke(10);
      smokesensor2->setVendor("Imec");
      emergencyCenter->addComponent(mainComposite,smokesensor2);
      auto * groupT = new Composite("group T");
      emergencyCenter->addComponent(mainComposite,groupT);
      auto * motionsensor = new Motion(2, 20);
      emergencyCenter->addComponent(groupT, motionsensor);
      auto * motionsensor2 = new Motion(2 , 8);
      motionsensor2->setVendor("KU Leuven");
      emergencyCenter->addComponent(groupT, motionsensor2);
      auto * gasSensor = new Gas (3);
      emergencyCenter -> addComponent(groupT, gasSensor);
      auto * motionsensor3 = new Motion(5 , 20);
      motionsensor3->setVendor("Dirk");
      emergencyCenter->addComponent(mainComposite, motionsensor3);


      //emergencyCenter->getInfo();
      //groupT->removeComponent();
      emergencyCenter->getInfo();


      ++ *smokesensor;

      //std::cout << *smokesensor;

      -- *smokesensor;

      //Sorting on ID & print it
      std::vector<Sensor*> sortedSensorsOnId = emergencyCenter->sortOnId(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON ID:" << std::endl;
      for (Sensor* sensor : sortedSensorsOnId){
         cout << *sensor;
      }

      //Sorting on type & print it
      std::vector<Sensor*> sortedSensorsOnType = emergencyCenter->sortOnType(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON TYPE:" << std::endl;
      for (Sensor* sensor : sortedSensorsOnType){
         cout << *sensor;
      }

      //Sorting on vendor & print it
      std::vector<Sensor*> sortedSensorsOnVendor = emergencyCenter->sortOnVendor(mainComposite->getAllChildren());
      std::cout << std::endl;
      std::cout << "SENSORS SORTED ON VENDOR:" << std::endl;
      for (Sensor* sensor : sortedSensorsOnVendor){
         cout << *sensor;
      }

      //emergencyCenter->getInfo();

      //don't remove testing shizzle
      std::cout<< "Testing the Actions"<< std::endl;
      auto * smoke = new Smoke(10);
      smoke->setId(15);
      auto popo = new Police();
      smoke->setExtraAction(popo);
      smoke->test();

  }
  catch (char const* msg)
  {
      std::cout << msg;
  }

  return 0;

  }
