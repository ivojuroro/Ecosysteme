#include "Aquarium.h"
#include "Bestiole.h"
#include "Farsighted.h"
#include "Kamikaze.h"
#include "Fearful.h"
#include "Gregarious.h"
#include "Creator.h"
#include "BestioleCreator.h"
#include "Configuration.h"

#include <iostream>

using namespace std;

void Configuration::setDefaultParams() {

}

void Configuration::configurePopulation() {
	//proportion
	//diferentes comportamientos
}

void Configuration::createPropulation(){

	Creator *c = new BestioleCreator();
	float proportions[4] = {0.1, 0.1, 0.1, 0.7};

	for(unsigned int i = 0; i<proportions[0]*10; i = i+1){
							Behavior *behavior = new Farsighted();
							c -> create(behavior);
					}

	for(unsigned int i = 0; i<proportions[1]*10; i = i+1){
								Behavior *behavior = new Kamikaze();
								c -> create(behavior);
						}

	for(unsigned int i = 0; i<proportions[2]*10; i = i+1){
								Behavior *behavior = new Fearful();
								c -> create(behavior);
							}

	for(unsigned int i = 0; i<proportions[3]*10; i = i+1){
									Behavior *behavior = new Gregarious();
									c -> create(behavior);
							}

}
