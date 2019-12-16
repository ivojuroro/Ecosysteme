main : main.cpp Bestiole.o BestioleCreator.o Farsighted.o Gregarious.o Kamikaze.o Fearful.o Configuration.o
	g++ -Wall -std=c++11 -o main main.cpp  Bestiole.o BestioleCreator.o Farsighted.o Gregarious.o Kamikaze.o Fearful.o Configuration.o -I . -lX11 -lpthread

Configuration.o: Bestiole.o BestioleCreator.o Farsighted.o Gregarious.o Kamikaze.o Fearful.o
	g++ -Wall -std=c++11  -c Configuration.cpp -I .

BestioleCreator.o: BestioleCreator.h BestioleCreator.cpp Creator.h
	g++ -Wall -std=c++11  -c BestioleCreator.cpp -I .

Bestiole.o : Bestiole.h Bestiole.cpp IBestiole.h
	g++ -Wall -std=c++11  -c Bestiole.cpp -I .

Farsighted.o: Farsighted.h Farsighted.cpp Behavior.h
	g++ -Wall -std=c++11 -c Farsighted.cpp -I .
	
Kamikaze.o: Kamikaze.h Kamikaze.cpp Behavior.h
	g++ -Wall -std=c++11 -c Kamikaze.cpp -I .
	
Fearful.o: Fearful.h Fearful.cpp Behavior.h
	g++ -Wall -std=c++11 -c Fearful.cpp -I .
	
Gregarious.o: Gregarious.h Gregarious.cpp Behavior.h
	g++ -Wall -std=c++11 -c Gregarious.cpp -I .
	


#FIRST MAKEFILE	
#main : main.cpp Aquarium.o Bestiole.o Milieu.o
#	g++ -Wall -std=c++11 -o main main.cpp Aquarium.o Bestiole.o Milieu.o -I . -lX11 -lpthread

#Aquarium.o : Aquarium.h Aquarium.cpp
#	g++ -Wall -std=c++11  -c Aquarium.cpp -I .

#Bestiole.o : Bestiole.h Bestiole.cpp
#	g++ -Wall -std=c++11  -c Bestiole.cpp -I .

#Milieu.o : Milieu.h Milieu.cpp
#	g++ -Wall -std=c++11  -c Milieu.cpp -I .



	