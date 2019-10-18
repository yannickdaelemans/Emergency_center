#include "Gas.h"

Gas::Gas(int id, int treshold):Sensor(id) {
    this->treshold = treshold;
}

int Gas::getTreshold() {
    return treshold;
}

void Gas::setTreshold(int treshold) {
	this->treshold = treshold;
}
