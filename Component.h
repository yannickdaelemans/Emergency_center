#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <iostream>


class Component {


public:
    Component();
	Component(int int_id);

    void addComponent(Component* toBeAdded);
    void removeComponent(Component* toBeRemoved);

    void test();
    void activate();
    void deactivate();


    void setId(int id);

    std::string getInfo();
    int getId();


    //std::ostream& operator<<(std::ostream& os, Component& component);
};

#endif
