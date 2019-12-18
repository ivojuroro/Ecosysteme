#include "Farsighted.h"

void Farsighted::print(){
	 cout << "I'm a Foresighted, must change my name!" << endl;
}

double Farsighted::modify_direction(std::vector<double> directions){
	cout << "changement de direction - Farsighted";
	double new_direction = 0;
	for(std::vector<double>::iterator ite = directions.begin(); ite != directions.end(); ++ite){
		//cout << "Direction  : "<< ite[0] << "\n";
		new_direction += static_cast<double> (ite[0]);
	}
	new_direction = new_direction/static_cast<double>(directions.size());
	return new_direction;

}
