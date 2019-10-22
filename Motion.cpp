#include "Motion.h"

Motion::Motion(int minDistance, int maxDistance):Sensor() {
    this->maxDistance = maxDistance;
    this->minDistance = minDistance;
}

int Motion::getMinDistance() {
    return maxDistance;
}

void Motion::setMinDistance(int minDistance) {
	this->minDistance = minDistance;
}

int Motion::getMaxDistance() {
    return minDistance;
}

void Motion::setMaxDistance(int maxDistance) {
	this->maxDistance = maxDistance;
}
