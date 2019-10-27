#include "Component.h"

Component::Component(Component* newParent): parent{newParent} {
   // std::cout << "new component created" << std::endl;
}

Component::Component() {
    //std::cout << "new component created" << std::endl;
}

Component::~Component(){
    //std::cout << "destructing component" << std::endl;
}

void Component::addComponent(Component* toBeAdded) {}

void Component::removeComponent() {}

int Component::getId() {}

void Component::setId(int newId) {}

void Component::test() {}

void Component::activate() {}

void Component::deactivate() {}

void Component::getInfo() {}

Component* Component::getParent(){}

void Component::setParent(Component* parent){}

std::string  Component::getType(){}

std::vector<Component*> Component::getAllChildren(){}

//void Component::operator<<(Component & component){}

//std::ostream& operator<<(std::ostream& os, Component& component) {}
