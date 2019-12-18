#include "Gregarious.h"

void Gregarious::print(){
	 cout << "I'm a Gregarious, must change my name!" << endl;
}

double Gregarious::modify_direction(std::vector<double> directions){
	double new_direction = 0;
	cout << "changement de direction - Gregarious " << "\n";
	for(std::vector<double>::iterator ite = directions.begin(); ite != directions.end(); ++ite){
		//cout << "Direction  : "<< ite[0] << "\n";
		new_direction += static_cast<double> (ite[0]);
	}
	new_direction = new_direction/static_cast<double>(directions.size());

	cout << "New Direction : " << new_direction << "\n";
	return new_direction;
}
