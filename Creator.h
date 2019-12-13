#ifndef _CREATOR_H
#define _CREATOR_H

#include <iostream>

#include "IBestiole.h"
#include "Behavior.h"

using namespace std;

class Creator{

public:
	virtual IBestiole* create(Behavior *behavior) = 0;
	~Creator();
};

#endif
