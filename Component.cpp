#include "Component.h"

Component::Component(Component* newParent): parent{newParent} {
   // std::cout << "new component created" << std::endl;
}

Component::Component() {
    //std::cout << "new component created" << std::endl;
}

Component::~Component(){
    //std::cout << "destructing component" << std::endl;
}

void Component::addComponent(std::shared_ptr<Component>) {}
