#ifndef _GREGARIOUS_H_
#define _GREGARIOUS_H_

#include "Behavior.h"

#include <iostream>
using namespace std;

class Gregarious: public Behavior{
public:
	void print();
	~Gregarious();
};

#endif
