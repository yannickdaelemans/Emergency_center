#include "Sensor.h"

using namespace std;

Sensor::Sensor(int id) {
    this->id = id;
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

void Sensor::setActions(std::vector<Action*> actions) {
    this->actions = actions;
}

std::string Sensor::getVendor() {
	return this->vendor;
}

void Sensor::setVendor(std::string newVendor) {
    this->vendor = newVendor;
}

void Sensor::removeComponent(Component* toBeRemoved) {
    //don't think this is all that good
    if(toBeRemoved == nullptr){
        delete toBeRemoved;
        toBeRemoved = nullptr;
    }
    else {
        cout << "Can not delete this, it has already been deleted." << endl;
    }
}

void Sensor::test() {
    cout << "Testing the Sensor now " << endl;
}

void Sensor::activate() {
    if (!activated){
        activated = true;
        cout << "Sensor is getting activated" << endl;
    }
    else{
        cout << "The sensor was already activated" << endl;
    }

}

void Sensor::deactivate() {
    if (activated){
        activated = false;
        cout << "Sensor is getting deactivated" << endl;
    }
    else{
        cout << "The sensor was already deactivated" << endl;
    }
}

std::string Sensor::getInfo() {
    cout << "Info about the Sensor" << endl;
    return "10";
}
