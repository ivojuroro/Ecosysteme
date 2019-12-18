#ifndef _ABSTRACTBEHAVIOR_H_
#define _ABSTRACTBEHAVIOR_H_


#include <vector>

using namespace std;

class Behavior{
public:
	virtual void print() = 0;
	virtual double modify_direction(vector<double> directions) = 0;

	~Behavior( void );
};

#endif
