#ifndef SMOKE_H
#define SMOKE_H

#include "Sensor.h"

class Smoke : public Sensor {

public:

	Smoke(int int_id, int int_sensitivity);

	void getSensitivity();
	void setSensitivity(int sensitivity);

private:
    int sensitivity;

};

#endif
