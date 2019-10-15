#ifndef GAS_H
#define GAS_H

#include "Sensor.h"

class Gas : public Sensor {

public:
	Gas(int int_id, int int_threshold);

	void getTreshold();
	void setTreshold(int treshold);

private:
    int treshold;

};

#endif
