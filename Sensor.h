#ifndef SENSOR_H
#define SENSOR_H

#include "Component.h"
#include "Action.h"
#include <vector>
#include <string>

using namespace std;

class Sensor : public Component {

private:
    std::vector<Action*> actions;
    bool activated;
    std::string vendor;
    std::string type;

public:
    Sensor(const std::string & type);

    void removeComponent() override;

    void test() override;
    void activate() override;
    void deactivate() override;


    void setId(int id) override;
    void setListActions(std::vector<Action*> extraActions);
    void setExtraAction (Action* action);
    void setVendor(std::string vendor);
    void setParent(Component *parent) override;

    std::vector<Action*> getActions();
    int getId() override;
    std::string getVendor();
    void getInfo() override;
    Component * getParent() override;
    std::string getType() override;
    std::string getSensorType();
    std::vector<Component *> getAllChildren() override;

    friend ostream& operator<<(ostream &os, const Sensor & component);
    void operator++();
    void operator--();

};

#endif
