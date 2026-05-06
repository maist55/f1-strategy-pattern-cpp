#include "Ecurie.h"
#include <iostream>
using namespace std;


string Ferrari::avoirNom() const {
	return "Ferrari";
}
void Ferrari::developperVoiture() const {
	cout << "Ferrari developpe des voitures ayant une bonne adherence" << endl;
}

string RedBull::avoirNom() const {
	return "RedBull";
}
void RedBull::developperVoiture() const {
	cout << "RedBull développe des voitures ayant un conduite simple" << endl;
}

string Mercedes::avoirNom() const {
	return "Mercedes";
}

void Mercedes::developperVoiture() const {
	cout << "Mercedes developpe des voitures rapide" << endl;
}
