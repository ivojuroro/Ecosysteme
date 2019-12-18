#ifndef _FARSIGHTED_H_
#define _FARSIGHTED_H_

#include "Behavior.h"

#include <iostream>
#include <vector>

using namespace std;

class Farsighted: public Behavior{
public:
	void print();
	double modify_direction(std::vector<double> directions);

	~Farsighted();
};

#endif
