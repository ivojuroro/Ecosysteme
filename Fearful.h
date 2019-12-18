#ifndef _FEARFUL_H_
#define _FEARFUL_H_

#include "Behavior.h"

#include <iostream>
#include <vector>

using namespace std;

class Fearful: public Behavior{
public:
	void print();
	double modify_direction(std::vector<double> directions);

	~Fearful();
};

#endif
