#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <string>
#include <vector>
#include "Component.h"

class Composite : public Component {

public:
    Composite(const std::string & location);

    void addComponent(Component* toBeAdded);
    void removeComponent(Component* toBeRemoved);

	void test();

	void activate();
	void deactivate();

    void setChild(Component* child);
    void setLocation(std::string location);

    Component* getParent();
    void setParent(Component* parent);

    std::vector<Component*> getChildren();
    std::string getLocation();
	void getInfo();

private:
    std::string location;
    Component* parent;
    std::vector<Component*> children;
};

#endif
