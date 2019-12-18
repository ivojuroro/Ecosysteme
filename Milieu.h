#ifndef _MILIEU_H_
#define _MILIEU_H_


#include "UImg.h"
#include "Bestiole.h"
#include "IBestiole.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;


class Milieu : public UImg
{

private :
   static const T          white[];

   int                     width, height;
   std::vector<Bestiole>   listeBestioles;
   std::vector<IBestiole*>  listeIBestioles;

public :
   Milieu( int _width, int _height );
   ~Milieu( void );

   int getWidth( void ) const { return width; };
   int getHeight( void ) const { return height; };

   void step( void );

   void addMember( const Bestiole & b ) {
	   listeBestioles.push_back(b); listeBestioles.back().initCoords(width, height);
   }

   void addIBestioleMember( IBestiole* bestiole ) {
	   this->listeIBestioles.push_back(bestiole);
   }
   int nbVoisins( const Bestiole & b );
};


#endif
