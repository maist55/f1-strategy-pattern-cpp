#pragma once

#include <memory>
#include <string>

#include "StrategieDepassement.h"
#include "StrategieAcceleration.h"
#include "Ecurie.h"

class VoitureF1 {
private:
    std::unique_ptr<StrategieDepassement> strategieDepassement_;
    std::unique_ptr<StrategieAcceleration> strategieAcceleration_;
    std::shared_ptr<Ecurie> ecurie_;

    std::string pilote_;
    int vitesseMax_;
    int puissance_;

public:
    VoitureF1(
        const std::string& pilote,
        int vitesseMax,
        int puissance,
        std::shared_ptr<Ecurie> ecurie,
        std::unique_ptr<StrategieDepassement> strategieDepassement,
        std::unique_ptr<StrategieAcceleration> strategieAcceleration
       
        
    );

    void afficher() const;
    void developper() const;
    void depasser() const;
    void accelerer() const;

    void changerStrategieDepassement(
        std::unique_ptr<StrategieDepassement> nouvelleStrategie
    );

    void changerStrategieAcceleration(
        std::unique_ptr<StrategieAcceleration> nouvelleStrategie
    );
};