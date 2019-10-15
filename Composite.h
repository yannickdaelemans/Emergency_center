#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <string>
#include <vector>
#include "Component.h"

class Composite : Component {

public:
    Composite(const std::string & location);

    void addComponent(Component* toBeAdded);
    void removeComponent(Component* toBeRemoved);

	void test();

	void activate();
	void deactivate();

    void setChildren(std::vector<Component*> children);
    void setLocation(std::string location);


    std::vector<Component*> getChildren();
    std::string getLocation();
	void getInfo();

private:
    std::string location;

};

#endif
