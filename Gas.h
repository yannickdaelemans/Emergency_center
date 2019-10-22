#ifndef GAS_H
#define GAS_H

#include "Sensor.h"

class Gas : public Sensor {

public:
    Gas(int int_threshold);

    int getTreshold();
	void setTreshold(int treshold);

private:
    int treshold;

};

#endif
