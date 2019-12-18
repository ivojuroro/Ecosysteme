#ifndef _IBESTIOLE_H_
#define _IBESTIOLE_H_

#include "Behavior.h"

#include <iostream>
using namespace std;

class IBestiole
{

	public:
		virtual void printMyId() = 0;
		virtual void initCoords( int xLim, int yLim ) =0;
		virtual Behavior * getBehavior() = 0;
};

#endif
