#include "StrategieDepassement.h"
#include <iostream>

void DepassementAgressif::depasser() const {
    std::cout << "Depassement agressif a l'interieur du virage." << std::endl;
}

void DepassementPrudent::depasser() const {
    std::cout << "Depassement prudent en attendant une erreur adverse." << std::endl;
}

void DepassementDRS::depasser() const {
    std::cout << "Depassement avec DRS en ligne droite." << std::endl;
}