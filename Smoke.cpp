#include "Smoke.h"

Smoke::Smoke(int id, int sensitivity) {
    this->sensitivity = sensitivity;
}

int Smoke::getSensitivity() {
    return sensitivity;
}

void Smoke::setSensitivity(int sensitivity) {
	this->sensitivity = sensitivity;
}
