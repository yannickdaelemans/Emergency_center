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
    virtual void removeComponent();

    virtual void test();
    virtual void activate();
    virtual void deactivate();

    virtual void getInfo();
    virtual std::string getType();
    virtual int getId();
    virtual void setId(int newId);

    virtual Component* getParent();
    virtual void setParent(Component* parent);

    virtual bool operator==(Component & otherComponent);
    //virtual void operator<<(Component & component);
    friend std::ostream& operator<<(std::ostream& os, Component& component);

    Component* parent;
    int id;
};

#endif
