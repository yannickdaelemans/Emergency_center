#include "Motion.h"

Motion::Motion(int id, int minDistance, int maxDistance) {
    //What to do with the id?
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
