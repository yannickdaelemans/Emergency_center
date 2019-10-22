#ifndef POLICE_H
#define POLICE_H

#include "Action.h"

class Police : public Action {


public:
    Police();
    virtual void acting(void) override;
};

#endif
