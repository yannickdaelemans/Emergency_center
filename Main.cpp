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

      auto * mainComposite = new Composite("Main");
      emergencyCenter->setMainComposite(mainComposite);

      auto * smokesensor = new Smoke(10);
      emergencyCenter->addComponent(mainComposite,smokesensor);
      auto * smokesensor1 = new Smoke(10);
      emergencyCenter->addComponent(mainComposite,smokesensor1);
      auto * smokesensor2 = new Smoke(10);
      emergencyCenter->addComponent(mainComposite,smokesensor2);

      auto * groupT = new Composite("group T");
      emergencyCenter->addComponent(mainComposite,groupT);
      auto * motionsensor = new Motion(2, 20);
      emergencyCenter->addComponent(groupT, motionsensor);

      //emergencyCenter->getInfo();
      groupT->removeComponent();
      //emergencyCenter->getInfo();

      std::cout << *smokesensor;


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
