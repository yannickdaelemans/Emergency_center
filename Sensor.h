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

    void removeComponent(Component* toBeRemoved);

	void test();
	void activate();
	void deactivate();


    void setId(int id);
    void setListActions(std::vector<Action*> extraActions);
    void setExtraAction (Action* action);
    void setVendor(std::string vendor);

    std::vector<Action*> getActions();
    int getId();
    std::string getVendor();
    void getInfo();


};

#endif
