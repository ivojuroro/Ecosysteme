#include "Creator.h"
#include "BestioleCreator.h"
#include "Bestiole.h"

#include <iostream>

using namespace std;

IBestiole* BestioleCreator::create(Behavior *behavior){
	return new Bestiole(behavior);
}
