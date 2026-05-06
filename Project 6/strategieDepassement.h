#pragma once

#pragma once

class StrategieDepassement {
public:
    virtual ~StrategieDepassement() = default;
    virtual void depasser() const = 0;
};

class DepassementAgressif : public StrategieDepassement {
public:
    void depasser() const override;
};

class DepassementPrudent : public StrategieDepassement {
public:
    void depasser() const override;
};

class DepassementDRS : public StrategieDepassement {
public:
    void depasser() const override;
};
