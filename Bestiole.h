#ifndef _BESTIOLES_H_
#define _BESTIOLES_H_

#include "IBestiole.h"
#include "Behavior.h"
#include "UImg.h"

#include <iostream>

using namespace std;


class Milieu;


class Bestiole: public IBestiole
{

private :
   static const double     AFF_SIZE;
   static const double     MAX_VITESSE;
   static const double     LIMITE_VUE;

   static int              next;

private :
   int               identite; //c'est le type? -> id
   int               x, y;
   double            cumulX, cumulY; //distance?
   double            orientation;
   double            vitesse;
   Behavior 	*    ownBehavior;

   T               * couleur;

private :
   void bouge( int xLim, int yLim );

public :                                           // Forme canonique :
   Bestiole( void );                               // Constructeur par defaut
   Bestiole( const Bestiole & b );                 // Constructeur de copies
   ~Bestiole( void );                              // Destructeur


   Bestiole(Behavior *behavior);					//Creates bestiole with a given behavior
   void printMyId();								//Method used to test IBestiole

   Behavior  * getBehavior( void ) {
	   ownBehavior->print();
   	   return ownBehavior; }

                                                   // Operateur d'affectation binaire par defaut
   void action( Milieu & monMilieu );
   void draw( UImg & support );

   bool jeTeVois( const Bestiole & b ) const;	//Pour les autres besioles

   void initCoords( int xLim, int yLim );

   friend bool operator==( const Bestiole & b1, const Bestiole & b2 );

};


#endif
