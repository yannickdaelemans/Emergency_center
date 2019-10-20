#ifndef ACTION_H
#define ACTION_H

#include <iostream>

class Action {


public:
	Action();
    virtual void acting();
    virtual ~Action() = 0;
};

#endif
