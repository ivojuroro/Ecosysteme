#include "Fearful.h"

void Fearful::print(){
	 cout << "I'm a Fearful, must change my name!" << endl;
}

double Fearful::modify_direction(std::vector<double> directions){
	if(directions.size()>= 5){ // Quand le nombre des bestioles dans la proximité devient très important
							   // La bestiole peureuse va fuir ici ce nombre est fixé à 5
		cout << "changement de direction - Fearful" << '\n';

		double new_direction = 0;
		for(std::vector<double>::iterator ite = directions.begin(); ite != directions.end(); ++ite){
			//cout << "Direction  : "<< ite[0] << "\n";
			new_direction += static_cast<double> (ite[0]);
		}
		new_direction = -1*new_direction/static_cast<double>(directions.size()); // s'orienter vers la direction oposée
		return new_direction;
	}

	else{
		cout << "I am not afraid" << "\n";
	}

}
