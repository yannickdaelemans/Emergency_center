#include "Component.h"

Component::Component(Component* newParent): parent{newParent} {
    std::cout << "new component created" << std::endl;
}

Component::Component() {
    std::cout << "new component created" << std::endl;
}

Component::~Component(){
    std::cout << "destructing component" << std::endl;
}

void Component::addComponent(Component* toBeAdded) {}

void Component::removeComponent() {}

int Component::getId() {}

void Component::setId(int newId) {
    id = newId;
}

void Component::test() {
	// TODO - implement Component::test
	throw "Not yet implemented";
}

void Component::activate() {
	// TODO - implement Component::activate
	throw "Not yet implemented";
}

void Component::deactivate() {
	// TODO - implement Component::deactivate
	throw "Not yet implemented";
}

void Component::getInfo() {}

Component* Component::getParent(){}

void Component::setParent(Component* parent){}

std::string  Component::getType(){}

bool Component::operator==(Component & otherComponent){}

//void Component::operator<<(Component & component){}

//std::ostream& operator<<(std::ostream& os, Component& component) {}
