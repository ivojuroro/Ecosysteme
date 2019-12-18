#include "Aquarium.h"
#include "Bestiole.h"
#include "Farsighted.h"
#include "Kamikaze.h"
#include "Fearful.h"
#include "Gregarious.h"
#include "Creator.h"
#include "BestioleCreator.h"
#include "Configuration.h"
#include "Milieu.h"

#include <iostream>

using namespace std;

void Configuration::setDefaultParams() {

}

void Configuration::configurePopulation() {
}

void Configuration::createPropulation(){

	Aquarium ecosysteme (640, 480, 30);
	Creator *c = new BestioleCreator();
	float proportions[4] = {0.1, 0.1, 0.1, 0.7};

	for(unsigned int i = 0; i<proportions[0]*10; i = i+1){
							Behavior *behavior = new Farsighted();
							IBestiole* best = c->create(behavior);
							best->getBehavior();
							ecosysteme.getMilieu()-> addIBestioleMember(best);
					}

	for(unsigned int i = 0; i<proportions[1]*10; i = i+1){
								Behavior *behavior = new Kamikaze();
								IBestiole* best = c->create(behavior);
								best->getBehavior();
								ecosysteme.getMilieu()-> addIBestioleMember(best);
						}

	for(unsigned int i = 0; i<proportions[2]*10; i = i+1){
								Behavior *behavior = new Fearful();
								IBestiole* best = c->create(behavior);
								best->getBehavior();
								ecosysteme.getMilieu()-> addIBestioleMember(best);
							}

	for(unsigned int i = 0; i<proportions[3]*10; i = i+1){
								Behavior *behavior = new Gregarious();
								IBestiole* best = c->create(behavior);
								best->getBehavior();
								ecosysteme.getMilieu()-> addIBestioleMember(best);
							}
}
