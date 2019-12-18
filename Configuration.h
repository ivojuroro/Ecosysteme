#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

#include "Aquarium.h"
#include "Bestiole.h"
#include "Farsighted.h"
#include "Kamikaze.h"
#include "Fearful.h"
#include "Gregarious.h"
#include "Creator.h"
#include "BestioleCreator.h"
#include "Configuration.h"
#include "Behavior.h"

class Configuration{
public:
    void setDefaultParams();
    void createPropulation();
    void configurePopulation();
};
#endif
