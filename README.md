# F1 Design Patterns C++

Projet C++ démontrant l’utilisation de la programmation orientée objet, du polymorphisme et du patron de conception **Stratégie** à travers un système de voitures de Formule 1.

## Description

Ce projet modélise plusieurs voitures de Formule 1 associées à différentes écuries et à différentes stratégies de course.

Chaque voiture possède :

- un pilote ;
- une vitesse maximale ;
- une puissance ;
- une écurie ;
- une stratégie d’accélération ;
- une stratégie de dépassement.

Le projet permet de modifier dynamiquement le comportement d’une voiture en changeant ses stratégies pendant l’exécution du programme.

## Fonctionnalités

- Création de plusieurs écuries :
  - `Ferrari`
  - `RedBull`
  - `Mercedes`

- Création de plusieurs voitures de F1 :
  - Leclerc
  - Verstappen
  - Russell
  - Hamilton
  - Norris

- Utilisation de stratégies d’accélération :
  - `AccelerationRapide`
  - `AccelerationQualif`
  - `AccelerationProgressive`

- Utilisation de stratégies de dépassement :
  - `DepassementDRS`
  - `DepassementAgressif`
  - `DepassementPrudent`

- Changement dynamique des stratégies d’une voiture.

- Utilisation d’une collection polymorphique avec `std::vector<std::unique_ptr<VoitureF1>>`.

## Concepts utilisés

Ce projet met en pratique plusieurs notions importantes en C++ :

- programmation orientée objet ;
- encapsulation ;
- polymorphisme ;
- classes abstraites ;
- patron de conception Stratégie ;
- composition ;
- pointeurs intelligents ;
- `std::unique_ptr` ;
- `std::shared_ptr` ;
- `std::make_unique` ;
- `std::make_shared` ;
- gestion automatique de la mémoire.

## Structure du projet

```text
f1-design-patterns-cpp/
├── Ecurie.h
├── Ecurie.cpp
├── StrategieAcceleration.h
├── StrategieAcceleration.cpp
├── StrategieDepassement.h
├── StrategieDepassement.cpp
├── VoitureF1.h
├── VoitureF1.cpp
├── main.cpp
└── README.md
