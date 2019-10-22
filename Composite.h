#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <string>
#include <vector>
#include <typeinfo>

#include "Component.h"

class Composite : public Component {

public:
    Composite(int id, const std::string & location);

    void addComponent(Component* toBeAdded) override;
    void removeComponent() override;

    void test() override;

    void activate() override;
    void deactivate() override;

    void setChild(Component* child);
    void setLocation(std::string location);
    void setParent(Component* parent) override;
    void setId(int newId) override;

    Component* getParent()override;
    std::vector<Component*> getChildren();
    std::string getLocation();
    void getInfo() override;
    std::string getType() override;
    int getId() override;

    bool operator==(Component & otherComponent) override;

private:
    std::string location;
    Component* parent;
    std::vector<Component*> children;
};

#endif
