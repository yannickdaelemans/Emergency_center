#include "Emergencycenter.h"

Emergencycenter::Emergencycenter(const std::string& aName): name{aName} {
    std::cout << "new emergencycenter created" << std::endl;
}

Emergencycenter::Emergencycenter() {
    std::cout << "new emergencycenter created" << std::endl;
}

std::string Emergencycenter::getName() {
	return this->name;
}

void Emergencycenter::setName(std::string newName) {
    this->name = newName;
}

void Emergencycenter::addComponent(Component* addedTo, Component toBeAdded) {
	// TODO - implement Emergency center::addComponent
	throw "Not yet implemented";
}

void Emergencycenter::removeComponent(Component* removeFrom, Component* toBeRemoved) {
	// TODO - implement Emergency center::removeComponent
	throw "Not yet implemented";
}

void Emergencycenter::test(Component* Component) {
	// TODO - implement Emergency center::test
	throw "Not yet implemented";
}

void Emergencycenter::activate(Component* component) {
	// TODO - implement Emergency center::activate
	throw "Not yet implemented";
}

void Emergencycenter::deactivate(Component* component) {
	// TODO - implement Emergency center::deactivate
	throw "Not yet implemented";
}

void Emergencycenter::getInfo(Component* Component) {
	// TODO - implement Emergency center::getInfo
	throw "Not yet implemented";
}

std::vector<Component*> Emergencycenter::sortOnId(std::vector<Component*> sensors) {
	// TODO - implement Emergency center::sortOnId
	throw "Not yet implemented";
}

std::vector<Component*> Emergencycenter::sortOnType(std::vector<Component*> sensors) {
	// TODO - implement Emergency center::sortOnType
	throw "Not yet implemented";
}
