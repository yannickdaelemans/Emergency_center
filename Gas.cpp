#include "Gas.h"

Gas::Gas(int treshold):Sensor("Gas"), treshold{treshold} {
}
int Gas::getTreshold() {
    return treshold;
}

void Gas::setTreshold(int treshold) {
	this->treshold = treshold;
}
