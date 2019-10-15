#ifndef MOTION_H
#define MOTION_H

#include "Sensor.h"

class Motion : public Sensor {

private:
	int minDistance;
	int maxDistance;

public:
    Motion(int id, int minDistance, int maxDistance);

    int getMinDistance();
	void setMinDistance(int minDistance);

    int getMaxDistance();
	void setMaxDistance(int maxDistance);
};

#endif
