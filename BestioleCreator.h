#ifndef _BESTIOLECREATOR_H_
#define _BESTIOLECREATOR_H_

#include "Creator.h"
#include "IBestiole.h"

class BestioleCreator: public Creator{

public:
	IBestiole* create(Behavior *behavior);
	~BestioleCreator();
};

#endif
