#include "Smoke.h"

Smoke::Smoke(int sensitivity):Sensor("Smoke"), sensitivity{sensitivity} {
}

int Smoke::getSensitivity() {
    return sensitivity;
}

void Smoke::setSensitivity(int sensitivity) {
	this->sensitivity = sensitivity;
}
