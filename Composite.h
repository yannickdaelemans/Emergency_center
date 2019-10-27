#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <string>
#include <vector>
#include <typeinfo>
#include <memory>

#include "Component.h"

class Composite : public Component {

public:
    Composite(const std::string & location);

    void addComponent(std::shared_ptr<Component> toBeAdded) override;
    void removeComponent() override;

    void test() override;

    void activate() override;
    void deactivate() override;

    void setChild(std::shared_ptr<Component> child);
    void setLocation(std::string location);
    void setParent(Component* parent) override;
    void setId(int newId) override;

    Component* getParent()override;
    std::vector<std::shared_ptr<Component>> getChildren();
    std::string getLocation();
    void getInfo() override;
    std::string getType() override;
    int getId() override;
    std::vector<std::shared_ptr<Component>> getAllChildren() override;

    //bool operator==(Component & otherComponent) override;

private:
    std::string location;
    Component* parent;
    std::vector<std::shared_ptr<Component>> children;
};

#endif
