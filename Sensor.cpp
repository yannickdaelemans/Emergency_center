#include "Sensor.h"

using namespace std;

/*
 * Things in this class still to check/do:
 * * getInfo: make sure all the actions are in their as well, need to make methods inside the actions
 * * make sure you don't need to give through an extra ID
*/
Sensor::Sensor() {
    activated = false;
}

int Sensor::getId() {
	return this->id;
}

void Sensor::setId(int newId) {
    this->id = newId;
}

std::vector<Action*> Sensor::getActions() {
    return actions;
}

void Sensor::setListActions(std::vector<Action*> extraActions) {
    for (size_t i = 0; i < extraActions.size(); i++){
        actions.push_back(extraActions[i]);
    }
}

void Sensor::setExtraAction (Action* action){
    actions.push_back(action);
}

std::string Sensor::getVendor() {
	return this->vendor;
}

void Sensor::setVendor(std::string newVendor) {
    this->vendor = newVendor;
}

void Sensor::removeComponent() {
    //don't think this is all that good
    /*
    if(this != nullptr){
        delete this;
    }
    else {
        cout << "Can not delete this, it has already been deleted." << endl;
    }*/
    this->~Sensor();
}

void Sensor::test() {
    cout << "Testing the Sensor with ID" << getId() <<" now " << endl;
    for (size_t i = 0; i < actions.size(); i++){
        actions[i]->acting();
    }
}

void Sensor::activate() {
    if (!activated){
        activated = true;
        cout << "Sensor with ID" << getId() <<" is getting activated" << endl;
    }
    else{
        cout << "This sensor was already activated" << endl;
    }

}

void Sensor::deactivate() {
    if (activated){
        activated = false;
        cout << "Sensor with ID" << getId() <<" is getting deactivated" << endl;
    }
    else{
        cout << "This sensor was already deactivated" << endl;
    }
}

void Sensor::getInfo() {
    cout << "Info about the Sensor:" << endl;
    cout << "ID: "<< getId() << endl;
    cout << "Vendor: "<< getVendor()<< endl;
    if(activated){
        cout<< "This sensor is activated"<< endl;
    }
    else {
        cout<< "This sensor is deactivated"<< endl;
    }
}

Component* Sensor::getParent(){
    return this->parent;
}

void Sensor::setParent(Component* newParent){
    this->parent = newParent;
}

std::string Sensor::getType(){
    return "Sensor";
}

bool Sensor::operator==(Component & otherComponent) {
    return (id == otherComponent.getId());
}
ostream& operator<<(ostream& os, const Sensor& component) {
    os << endl;
    os << "Info about the Sensor:" << endl;
    os << "ID: "<< component.id << endl;
    os << "Vendor: "<< component.vendor << endl;
    if(component.activated){
        os<< "This sensor is activated"<< endl;
    }
    else {
        os<< "This sensor is deactivated"<< endl;
    }
    os << endl;
    return os;
}
