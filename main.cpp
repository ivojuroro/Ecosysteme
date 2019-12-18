#include "Aquarium.h"
#include "Milieu.h"
#include "Bestiole.h"


#include "Farsighted.h"
#include "Kamikaze.h"
#include "Fearful.h"
#include "Gregarious.h"
#include "Configuration.h"

#include <iostream>

using namespace std;


void imprimirLoQuesea(IBestiole* bestiole){
	bestiole ->printMyId();
}

int main()
{
	Configuration *conf = new Configuration();
	conf -> createPropulation();

	return 0;

}

