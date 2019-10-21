#ifndef POLICE_H
#define POLICE_H

#include "Action.h"

class Police : public Action {


public:
    Police();
    virtual void acting() override;
};

#endif
