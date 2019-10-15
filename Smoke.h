#ifndef SMOKE_H
#define SMOKE_H

#include "Sensor.h"

class Smoke : public Sensor {

public:

    Smoke(int id, int sensitivity);

    int getSensitivity();
	void setSensitivity(int sensitivity);

private:
    int sensitivity;

};

#endif
