#include "Smoke.h"

Smoke::Smoke(int sensitivity):Sensor("Smoke") {
    this->sensitivity = sensitivity;
}

int Smoke::getSensitivity() {
    return sensitivity;
}

void Smoke::setSensitivity(int sensitivity) {
	this->sensitivity = sensitivity;
}
