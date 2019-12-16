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


int main()
{
	Configuration *conf = new Configuration();
	conf -> createPropulation();

	//Aquarium       ecosysteme( 640, 480, 30 );

	   //for ( int i = 1; i <= 20; ++i )
	     // ecosysteme.getMilieu().addMember( Bestiole() );
	   //ecosysteme.run();
   return 0;

}
