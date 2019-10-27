#include "Composite.h"

Composite::Composite(const std::string& aLocation): location{aLocation} {}

std::string Composite::getLocation() {
	return this->location;
}

void Composite::setLocation(std::string newLocation) {
    this->location = newLocation;
}

std::vector<std::shared_ptr<Component>> Composite::getChildren() {
    return this->children;
}

void Composite::setChild(std::shared_ptr<Component> child) {
    children.push_back(child);
}

int Composite::getId() {
    return this->id;
}

void Composite::setId(int newId) {
    this->id = newId;
}

void Composite::addComponent(std::shared_ptr<Component> toBeAdded) {
    toBeAdded->setParent(this);
    this->setChild(toBeAdded);
}

void Composite::removeComponent() {
    for (std::shared_ptr<Component> child : children){
        child->removeComponent();
    }
    this->~Composite();
}

void Composite::test() {
	// TODO - implement Composite::test
	throw "Not yet implemented";
}

void Composite::activate() {
	// TODO - implement Composite::activate
	throw "Not yet implemented";
}

void Composite::deactivate() {
	// TODO - implement Composite::deactivate
	throw "Not yet implemented";
}

void Composite::getInfo() {
    std::cout << "Info about the composite at location:" << this->location << std::endl;
    std::cout << "Children: "<< std::endl;
    for (std::shared_ptr<Component> child : children){
        child->getInfo();
    }
}

Component* Composite::getParent(){
    return this->parent;
}

void Composite::setParent(Component* newParent){
    this->parent = newParent;
}

std::string Composite::getType(){
    return "Composite";
}

std::vector<std::shared_ptr<Component>> Composite::getAllChildren(){
    std::vector<std::shared_ptr<Component>> sensors;
    for (std::shared_ptr<Component> child : children){
        if(child -> getType() == "Sensor"){
            sensors.push_back(child);
        } else {
            std::vector<std::shared_ptr<Component>> grandChildern = child->getAllChildren();
            sensors.insert(sensors.end(), grandChildern.begin(), grandChildern.end());
        }
    }
    return sensors;
}

