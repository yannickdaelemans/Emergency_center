#ifndef EMERGENCYCENTER_H
#define EMERGENCYCENTER_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <memory>
#include <random>
#include <cstring>
#include <string.h>

#include "Component.h"
#include "Sensor.h"

class Emergencycenter
{
    public:
        Emergencycenter();
        ~Emergencycenter();

        void addComponent(Component* addedTo, Component* toBeAdded);

        void test(Component* component);
        void activate(Component* Component);
        void deactivate(Component* Component);
        void getInfo();

        std::vector<Sensor*> sortOnId(std::vector<Component*> components);
        std::vector<Sensor*> sortOnType(std::vector<Component*> components);
        std::vector<Sensor*> sortOnVendor(std::vector<Component*> components);

        void setMainComposite(Component* mainComposite);
        Component* getMainComposite();


    private:
        Component* mainComposite;
        std::vector<int> ID;

        std::vector<std::string> getAllVendors(std::vector<Component*> sensors);
        int getFreeId ();
        bool checkIfIdExists (int id);
};

#endif
