#include "Emergencycenter.h"

Emergencycenter::Emergencycenter(const std::string& aName): name{aName} {
    std::cout << "new emergencycenter created" << std::endl;
}

Emergencycenter::Emergencycenter() {
    std::cout << "new emergencycenter created" << std::endl;
}

Emergencycenter::~Emergencycenter(){
    std::cout << "deleted emergencycenter" << std::endl;
}

std::string Emergencycenter::getName() {
	return this->name;
}

void Emergencycenter::setName(std::string newName) {
    this->name = newName;
}

void Emergencycenter::addComponent(Component* addedTo, Component* toBeAdded) {
    addedTo->addComponent(toBeAdded);
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

void Emergencycenter::getInfo() {
    std::cout << "Name of Emergencycenter: " << this->getName() << std::endl;
    Component* mainComposite = this->mainComposite;
    mainComposite->getInfo();
}

std::vector<Component*> Emergencycenter::sortOnId(std::vector<Component*> sensors) {
	// TODO - implement Emergency center::sortOnId
	throw "Not yet implemented";
}

std::vector<Component*> Emergencycenter::sortOnType(std::vector<Component*> sensors) {
	// TODO - implement Emergency center::sortOnType
	throw "Not yet implemented";
}

void Emergencycenter::setMainComposite(Component* newMainComposite){
    this->mainComposite = newMainComposite;
}

Component* Emergencycenter::getMainComposite(){
    return this->mainComposite;
}

