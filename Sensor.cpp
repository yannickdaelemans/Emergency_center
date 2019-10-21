#include "Sensor.h"

using namespace std;

/*
 * Things in this class still to check/do:
 * * removeComponent: not really happy with it
 * * getInfo: make sure all the actions are in their as well, need to make methods inside the actions
 * * extra method removing actions
*/
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

void Sensor::removeComponent(Component* toBeRemoved) {
    //don't think this is all that good
    if(toBeRemoved != nullptr){
        delete toBeRemoved;
        toBeRemoved = nullptr;
    }
    else {
        cout << "Can not delete this, it has already been deleted." << endl;
    }
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
