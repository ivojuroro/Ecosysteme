#ifndef _GREGARIOUS_H_
#define _GREGARIOUS_H_

#include "Behavior.h"

#include <iostream>
#include <vector>

using namespace std;

class Gregarious: public Behavior{
public:
	void print();
	double modify_direction(std::vector<double> directions);

	~Gregarious();
};

#endif
