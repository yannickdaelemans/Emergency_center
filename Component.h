#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <iostream>
#include <vector>
#include <memory>

class Component {


public:
    Component();
    virtual ~Component();
    Component(Component* newParent);

    virtual void addComponent(std::shared_ptr<Component> toBeAdded);
    virtual void removeComponent()=0;

    virtual void test()=0;
    virtual void activate()=0;
    virtual void deactivate()=0;

    virtual void getInfo()=0;
    virtual std::string getType()=0;
    virtual int getId()=0;
    virtual void setId(int newId)=0;

    virtual Component* getParent()=0;
    virtual void setParent(Component* parent)=0;
    virtual std::vector<std::shared_ptr<Component>> getAllChildren()=0;

    Component* parent;
    int id;
};

#endif
