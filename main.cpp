#include "Aquarium.h"
#include "Milieu.h"
#include "Bestiole.h"
#include "Farsighted.h"

#include <iostream>

using namespace std;


int main()
{

	Creator *c = new BestioleCreator();
	Behavior *behavior = new Farsighted();
	c -> create(behavior);
	//Use the destructor



	//Aquarium       ecosysteme( 640, 480, 30 );

	   //for ( int i = 1; i <= 20; ++i )
	     // ecosysteme.getMilieu().addMember( Bestiole() );
	   //ecosysteme.run();
   return 0;

}
