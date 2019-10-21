#ifndef SENSOR_H
#define SENSOR_H

#include "Component.h"
#include "Action.h"
#include <vector>
#include <string>

class Sensor : public Component {

private:
	int id;
    std::vector<Action*> actions;
    bool activated;
    std::string vendor;

public:
    Sensor(int id);

    void removeComponent(Component* toBeRemoved) override;

    void test() override;
    void activate() override;
    void deactivate() override;


    void setId(int id);
    void setListActions(std::vector<Action*> extraActions);
    void setExtraAction (Action* action);
    void setVendor(std::string vendor);
    void setParent(Component *parent) override;

    std::vector<Action*> getActions();
    int getId();
    std::string getVendor();
    void getInfo() override;
    Component * getParent() override;

};

#endif
