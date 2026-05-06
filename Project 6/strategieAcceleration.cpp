#include "StrategieAcceleration.h"
#include <iostream>

void AccelerationRapide::accelerer() const {
    std::cout << "Acceleration rapide." << std::endl;
}

void AccelerationProgressive::accelerer() const {
    std::cout << "Acceleration progressive." << std::endl;
}

void AccelerationQualif::accelerer() const {
    std::cout << "Acceleration maximale en qualification." << std::endl;
}