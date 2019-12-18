#ifndef _KAMIKAZE_H_
#define _KAMIKAZE_H_

#include "Behavior.h"

#include <iostream>
#include <vector>

using namespace std;


class Kamikaze: public Behavior{
public:
	void print();
	double modify_direction(std::vector<double> directions);

	~Kamikaze();
};

#endif
