#include "Kamikaze.h"

void Kamikaze::print(){
	 cout << "I'm a Kamikaze, must change my name!" << endl;
}

double Kamikaze::modify_direction(std::vector<double> directions){
	cout << "changement de direction - Kamikaze";

	double new_direction = 0;
	for(std::vector<double>::iterator ite = directions.begin(); ite != directions.end(); ++ite){
		// cout << "Direction  : "<< ite[0] << "\n";
		new_direction += static_cast<double> (ite[0]);
	}
	new_direction = new_direction/static_cast<double>(directions.size());
	cout << "New Direction : " << new_direction << "\n";
	return new_direction;
}
