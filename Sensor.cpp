#include "Sensor.h"

using namespace std;

Sensor::Sensor(const std::string & theType):vendor{"none"}, type{theType} {
    activated = false;
}

int Sensor::getId() {
	return this->id;
}

void Sensor::setId(int newId) {
    this->id = newId;
}

std::vector<std::shared_ptr<Action>> Sensor::getActions() {
    return actions;
}

void Sensor::setListActions(std::vector<std::shared_ptr<Action>> extraActions) {
    for (size_t i = 0; i < extraActions.size(); i++){
        actions.push_back(extraActions[i]);
    }
}

void Sensor::setExtraAction (std::shared_ptr<Action> action){
    actions.push_back(action);
}

std::string Sensor::getVendor() {
	return this->vendor;
}

void Sensor::setVendor(std::string newVendor) {
    this->vendor = newVendor;
}

void Sensor::removeComponent() {
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
    cout << "\t" << "****Info about the Sensor:" << endl;
    cout << "\t" << "Type: " << type << endl;
    cout << "\t" << "ID: "<< id << endl;
    cout << "\t" << "Vendor: "<< vendor << endl;
    if(activated){
        cout<< "\t" << "This sensor is activated"<< endl;
    }
    else {
        cout<< "\t" << "This sensor is deactivated"<< endl;
    }
    cout << endl;
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

std::string Sensor::getSensorType(){
    return this->type;
}


std::vector<std::shared_ptr<Component>> Sensor::getAllChildren(){
    return {};
}




ostream& operator<<(ostream& os, const Sensor& component) {
    os << "\t" << "Info about the Sensor:" << endl;
    os << "\t" << "Type: " << component.type << endl;
    os << "\t" << "ID: "<< component.id << endl;
    os << "\t" << "Vendor: "<< component.vendor << endl;
    if(component.activated){
        os<< "\t" << "This sensor is activated"<< endl;
    }
    else {
        os<< "\t" << "This sensor is deactivated"<< endl;
    }
    os << endl;
    return os;
}

void Sensor::operator++(){
    activate();
}

void Sensor::operator--(){
    deactivate();
}



