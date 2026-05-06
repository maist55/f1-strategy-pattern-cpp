#include <iostream>
using namespace std;

#include <iostream>
#include <memory>
#include <vector>

#include "VoitureF1.h"
#include "Ecurie.h"
#include "StrategieAcceleration.h"
#include "StrategieDepassement.h"

int main() {
    std::shared_ptr<Ecurie> ferrari = std::make_shared<Ferrari>();
    std::shared_ptr<Ecurie> redBull = std::make_shared<RedBull>();
    std::shared_ptr<Ecurie> mercedes = std::make_shared<Mercedes>();

    VoitureF1 voiture1(
        "Leclerc",
        345,
        1000,
        ferrari,
        std::make_unique<DepassementDRS>(),
        std::make_unique<AccelerationRapide>()
    );

    VoitureF1 voiture2(
        "Verstappen",
        350,
        1050,
        redBull,
        std::make_unique<DepassementAgressif>(),
        std::make_unique<AccelerationQualif>()
    );

    VoitureF1 voiture3(
        "Russell",
        340,
        980,
        mercedes,
        std::make_unique<DepassementPrudent>(),
        std::make_unique<AccelerationProgressive>()
    );

    std::cout << "=== AFFICHAGE DES VOITURES ===" << std::endl;
    voiture1.afficher();
    std::cout << std::endl;

    voiture2.afficher();
    std::cout << std::endl;

    voiture3.afficher();
    std::cout << std::endl;

    std::cout << "=== DEVELOPPEMENT DES ECURIES ===" << std::endl;
    voiture1.developper();
    voiture2.developper();
    voiture3.developper();
    std::cout << std::endl;

    std::cout << "=== STRATEGIES INITIALES ===" << std::endl;
    voiture1.accelerer();
    voiture1.depasser();

    voiture2.accelerer();
    voiture2.depasser();

    voiture3.accelerer();
    voiture3.depasser();
    std::cout << std::endl;

    std::cout << "=== CHANGEMENT DE STRATEGIES ===" << std::endl;

    voiture1.changerStrategieAcceleration(
        std::make_unique<AccelerationQualif>()
    );

    voiture1.changerStrategieDepassement(
        std::make_unique<DepassementAgressif>()
    );

    voiture1.accelerer();
    voiture1.depasser();
    std::cout << std::endl;

    std::cout << "=== POLYMORPHISME AVEC COLLECTION ===" << std::endl;

    std::vector<std::unique_ptr<VoitureF1>> voitures;

    voitures.push_back(
        std::make_unique<VoitureF1>(
            "Hamilton",
            342,
            990,
            ferrari,
            std::make_unique<DepassementPrudent>(),
            std::make_unique<AccelerationProgressive>()
        )
    );

    voitures.push_back(
        std::make_unique<VoitureF1>(
            "Norris",
            348,
            1010,
            redBull,
            std::make_unique<DepassementDRS>(),
            std::make_unique<AccelerationRapide>()
        )
    );

    for (const auto& voiture : voitures) {
        voiture->afficher();
        voiture->developper();
        voiture->accelerer();
        voiture->depasser();
        std::cout << std::endl;
    }

    return 0;
}