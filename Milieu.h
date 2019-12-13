#ifndef _MILIEU_H_
#define _MILIEU_H_


#include "UImg.h"
#include "Bestiole.h"
#include "BestioleCreator.h"

#include <iostream>
#include <vector>

using namespace std;


class Milieu : public UImg
{

private :
   static const T          white[]; //c'est important?

   int                     width, height;
   std::vector<Bestiole>   listeBestioles;
   BestioleCreator         bestiole_creator; // Connection with the factory structure

public :
   Milieu( int _width, int _height );
   ~Milieu( void );

   int getWidth( void ) const { return width; };
   int getHeight( void ) const { return height; };

   void step( void ); //?

   // It's necessary to modify the method addMember to call a instance of BestioleCreator to manage the creation of bestioles
   void addMember( const Bestiole & b ) { listeBestioles.push_back(b); listeBestioles.back().initCoords(width, height); }
   int nbVoisins( const Bestiole & b ); //?



};


#endif
