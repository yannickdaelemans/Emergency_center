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
    int id = getFreeId();
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
    std::cout << "Name of Emergencycenter: " << this->getName() << std::endl;
    Component* mainComposite = this->mainComposite;
    mainComposite->getInfo();
}

std::vector<Component*> Emergencycenter::sortOnId(std::vector<Component*> sensors) {
    std::vector<Component*> listSensors;
    std::sort(ID.begin(), ID.end());
    for(size_t i = 0; i<sensors.size(); i++){
        for(size_t j = 0; j<ID.size(); j++){
            if(sensors[i]->getId()==ID[j] && sensors[i]->getType()=="Sensor"){
                listSensors.push_back(sensors[i]);
            }
        }
    }
    return listSensors;
}

std::vector<Component*> Emergencycenter::sortOnType(std::vector<Component*> sensors) {
    std::vector<Component*> listSensors;
    for(size_t j = 0; j<sensors.size(); j++){
        if(sensors[j]->getType()=="Sensors"){
            listSensors.push_back(sensors[j]);
        }
    }
    return listSensors;
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
