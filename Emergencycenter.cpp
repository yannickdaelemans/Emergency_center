#include "Emergencycenter.h"

Emergencycenter::Emergencycenter(){
    //std::cout << "new emergencycenter created" << std::endl;
}

Emergencycenter::~Emergencycenter(){
    std::cout << "deleted emergencycenter" << std::endl;
}

void Emergencycenter::addComponent(Component* addedTo, Component* toBeAdded) {
    addedTo->addComponent(toBeAdded);
    int id = getFreeId();
    ID.push_back(id);
    toBeAdded->setId(id);
}

void Emergencycenter::test(Component* component) {
    component->test();
}

void Emergencycenter::activate(Component* component) {
    component->activate();
}

void Emergencycenter::deactivate(Component* component) {
    component->deactivate();
}

void Emergencycenter::getInfo() {
    std::cout << std::endl;
    std::cout << "-----INFO-----: " << std::endl;
    Component* mainComposite = this->mainComposite;
    mainComposite->getInfo();
}

std::vector<Sensor*> Emergencycenter::sortOnId(std::vector<Component*> components) {
    std::vector<Sensor*> listSensors;
    std::sort(ID.begin(), ID.end());
    for(size_t j = 0; j<ID.size(); j++){
        for(size_t i = 0; i<components.size(); i++){
            if(components[i]->getId()==ID[j] && components[i]->getType()=="Sensor"){
                listSensors.push_back(static_cast<Sensor*>(components[i]));
            }
        }
    }
    return listSensors;
}

std::vector<Sensor*> Emergencycenter::sortOnType(std::vector<Component*> components) {
    std::vector<Sensor*> sensors;
    for(size_t j = 0; j<components.size(); j++){
        if(components[j]->getType()=="Sensor"){
            sensors.push_back(static_cast<Sensor*>(components[j]));
        }
    }

    Sensor* dummy;
    for(size_t i=1; i<sensors.size(); i++){
            for(size_t j=1; j<sensors.size(); j++){
                if(strcmp(sensors[j-1]->getSensorType().c_str(), sensors[j]->getSensorType().c_str())>0)
                {
                    dummy = sensors[j-1];
                    sensors[j-1] = sensors[j];
                    sensors[j] = dummy;
                }
            }
        }

    return sensors;
}

std::vector<Sensor*> Emergencycenter::sortOnVendor(std::vector<Component*> components) {
    std::vector<Sensor*> sensors;
    for(size_t j = 0; j<components.size(); j++){
        if(components[j]->getType()=="Sensor"){
            sensors.push_back(static_cast<Sensor*>(components[j]));
        }
    }

    Sensor* dummy;
    for(size_t i=1; i<sensors.size(); i++){
            for(size_t j=1; j<sensors.size(); j++){
                if(strcmp(sensors[j-1]->getVendor().c_str(), sensors[j]->getVendor().c_str())>0)
                {
                    dummy = sensors[j-1];
                    sensors[j-1] = sensors[j];
                    sensors[j] = dummy;
                }
            }
        }

    return sensors;
}

void Emergencycenter::setMainComposite(Component* newMainComposite){
    this->mainComposite = newMainComposite;
}

Component* Emergencycenter::getMainComposite(){
    return this->mainComposite;
}

int Emergencycenter::getFreeId (){
    int freeId = rand() % 100000;
    while(checkIfIdExists(freeId)){
        freeId = rand() % 100000;
    }
    return freeId;
}

bool Emergencycenter::checkIfIdExists (int id){
    if (ID.size() > 100000){
        throw "Too much ID's";
    }
    for(size_t i = 0; i < ID.size(); i++){
        if(id == ID[i]){
            return  true;
        }
    }
    return false;
}
