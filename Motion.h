#ifndef MOTION_H
#define MOTION_H

#include "Sensor.h"

class Motion : public Sensor {

private:
	int minDistance;
	int maxDistance;

public:
	Motion(int int_id, int int_minDistance, int int_maxDistance);

	void getMinDistance();
	void setMinDistance(int minDistance);

	void getMaxDistance();
	void setMaxDistance(int maxDistance);
};

#endif
