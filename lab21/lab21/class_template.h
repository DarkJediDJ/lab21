#pragma once
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class street {
private:
	const int size = 10;
	int adress;
	double house;
	char letter;
	bool metro;
	string name;
	vector<int> busStop;
public:
	void parameterless_constructor()
	{
		adress = 45;
		house = 22.3;
		letter = 'A';
		metro = true;
		name = "Prityckogo";
		busStop = { 3,2,1 };
		std::cout << "Parameterless constructor has benn done" << std::endl;
	}

	void constructor_with_parameters(int adress2, double house2 , char letter2, bool metro2, string name2, vector<int> busStop2){
		adress = adress2;
		house = house2;
		letter = letter2;
		metro = metro2;
		name = name2;
		busStop = busStop;
		std::cout << " Ñonstructor with parameteres has benn done" << std::endl;
	}

	int getAdress() { return adress; }
	double getHouse() { return house; }
	char getLetter() { return letter; }
	bool getMetro() { return metro; }
	string getName() { return name; }
	vector<int> getBusStop() { return busStop; }



	void setAdress(int adress1) { assert(adress1 > 0); adress = adress1; };
	void setHouse(double house1) { assert(house1 > 0); house = house1; };
	void setLetter(int letter1) { assert(letter1 != NULL); letter = letter1; };
	void setMetro(int metro1) { assert(metro1 != NULL); metro = metro1; };
	void setName(string name1) { name = name1; };
	void setBusStop(vector<int> busStop1) { busStop = busStop1; };

	~street() {
		busStop.clear();
		std::cout << "Destructor finished work" << std::endl;
	}


	void print() {
		using namespace std;
		cout << "Adress: " <<adress<< endl;
		cout << "House: " <<house<< endl;
		cout << "Letter: " <<letter<< endl;
		cout << "Metro: " <<metro<< endl;
		cout << "Name: " <<name<< endl;
		for (int i = 0; i< busStop.size(); i++) {
			cout << busStop.at(i) << endl;
		}
	}

	double floor(int x[] ) {
		double midle_floor = 0, floors = 0, houses = 0;
		for (int i = 0; i < size; i++) {
			if (x[i] > 0) {
				houses += x[i];
				floors = floors + (x[i] * i);
			}
		}
		return midle_floor = floors / houses;
	}
};