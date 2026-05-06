#include "VoitureF1.h"

#include <iostream>
#include <utility>

VoitureF1::VoitureF1(
    const std::string& pilote,
    int vitesseMax,
    int puissance,
    std::shared_ptr<Ecurie> ecurie,
    std::unique_ptr<StrategieDepassement> strategieDepassement,
    std::unique_ptr<StrategieAcceleration> strategieAcceleration
)
    : strategieDepassement_(std::move(strategieDepassement)),
    strategieAcceleration_(std::move(strategieAcceleration)),
    ecurie_(std::move(ecurie)),
    pilote_(pilote),
    vitesseMax_(vitesseMax),
    puissance_(puissance)
{
}

void VoitureF1::afficher() const {
    std::cout << "Pilote : " << pilote_ << std::endl;
    std::cout << "Ecurie : " << ecurie_->avoirNom() << std::endl;
    std::cout << "Vitesse maximale : " << vitesseMax_ << " km/h" << std::endl;
    std::cout << "Puissance : " << puissance_ << " chevaux" << std::endl;
}

void VoitureF1::developper() const {
    ecurie_->developperVoiture();
}

void VoitureF1::accelerer() const {
    strategieAcceleration_->accelerer();
}

void VoitureF1::depasser() const {
    strategieDepassement_->depasser();
}

void VoitureF1::changerStrategieDepassement(
    std::unique_ptr<StrategieDepassement> nouvelleStrategie
) {
    strategieDepassement_ = std::move(nouvelleStrategie);
}

void VoitureF1::changerStrategieAcceleration(
    std::unique_ptr<StrategieAcceleration> nouvelleStrategie
) {
    strategieAcceleration_ = std::move(nouvelleStrategie);
}