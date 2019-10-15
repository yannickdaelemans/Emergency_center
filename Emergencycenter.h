#ifndef EMERGENCYCENTER_H
#define EMERGENCYCENTER_H

#include <string>
#include <vector>
#include <iostream>

#include "Component.h"

class Emergencycenter
{
    public:

        Emergencycenter(const std::string & name);
        Emergencycenter();
        ~Emergencycenter();

        void addComponent(Component* addedTo, Component toBeAdded);
        void removeComponent(Component* removeFrom, Component* toBeRemoved);

        void test(Component* Component);
        void activate(Component* Component);
        void deactivate(Component* Component);
        void getInfo(Component* Component);

        std::vector<Component*> sortOnId(std::vector<Component*> sensors);
        std::vector<Component*> sortOnType(std::vector<Component*> sensors);


        void setName(std::string name);
        std::string getName();


    private:

        std::string name;
};

#endif
