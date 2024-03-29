#include "Motion.h"

Motion::Motion(int minDistance, int maxDistance):Sensor("Motion"), minDistance{minDistance}, maxDistance{maxDistance} {
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
