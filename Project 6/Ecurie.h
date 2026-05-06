#pragma once
#include <string>


class Ecurie {
public:
    virtual ~Ecurie() = default;
    virtual std::string avoirNom() const = 0;
    virtual void developperVoiture() const = 0;
};

class Ferrari : public Ecurie {
public:
    std::string avoirNom() const override;
    void developperVoiture() const override;
};

class RedBull : public Ecurie {
public:
    std::string avoirNom() const override;
    void developperVoiture() const override;
};

class Mercedes : public Ecurie {
public:
    std::string avoirNom() const override;
    void developperVoiture() const override;
};
