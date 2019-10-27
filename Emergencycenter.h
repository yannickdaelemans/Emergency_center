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

        void addComponent(std::shared_ptr<Component> addedTo, std::shared_ptr<Component> toBeAdded);

        void test(Component* component);
        void activate(Component* Component);
        void deactivate(Component* Component);
        void getInfo();

        std::vector<std::shared_ptr<Sensor>> sortOnId(std::vector<std::shared_ptr<Component>> components);
        std::vector<std::shared_ptr<Sensor>> sortOnType(std::vector<std::shared_ptr<Component>> components);
        std::vector<std::shared_ptr<Sensor>> sortOnVendor(std::vector<std::shared_ptr<Component>> components);

        void setMainComposite(std::shared_ptr<Component> mainComposite);
        std::shared_ptr<Component> getMainComposite();


    private:
        std::shared_ptr<Component> mainComposite;
        std::vector<int> ID;

        std::vector<std::string> getAllVendors(std::vector<Component*> sensors);
        int getFreeId ();
        bool checkIfIdExists (int id);
};

#endif
