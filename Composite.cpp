#include "Composite.h"

Composite::Composite(const std::string& aLocation): location{aLocation} {
    std::cout << "new Composite created" << std::endl;
}

std::string Composite::getLocation() {
	return this->location;
}

void Composite::setLocation(std::string newLocation) {
    this->location = newLocation;
}

std::vector<Component*> Composite::getChildren() {
    return this->children;
}

void Composite::setChild(Component* child) {
    children.push_back(child);
}

void Composite::removeChild(Component* toBeRemovedChild){
    for (Component* child : children){
        int i=0;
        if(child == toBeRemovedChild){
            children.erase(children.begin()+i);
            break;
        }else {
            i++;
        }
    }
}

void Composite::addComponent(Component* toBeAdded) {
    toBeAdded->setParent(this);
    this->setChild(toBeAdded);
}

void Composite::removeComponent() {
    for (Component* child : children){
        child->removeComponent();
        std::cout << "removing child" << std::endl;
    }
    parent->removeChild(this);
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
    for (Component* child : children){
        child->getInfo();
    }
}

Component* Composite::getParent(){
    return this->parent;
}

void Composite::setParent(Component* newParent){
    this->parent = newParent;
}
