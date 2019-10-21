#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <iostream>


class Component {


public:
    Component();
    virtual ~Component();
    Component(Component* newParent);

    virtual void addComponent(Component* toBeAdded);
    virtual void removeComponent(Component* toBeRemoved);

    virtual void test();
    virtual void activate();
    virtual void deactivate();

    virtual void getInfo();

    virtual Component* getParent();
    virtual void setParent(Component* parent);
    //std::ostream& operator<<(std::ostream& os, Component& component);

    Component* parent;
};

#endif
