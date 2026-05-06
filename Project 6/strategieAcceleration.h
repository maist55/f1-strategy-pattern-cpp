#pragma once

class StrategieAcceleration {
public:
    virtual ~StrategieAcceleration() = default;
    virtual void accelerer() const = 0;
};

class AccelerationRapide : public StrategieAcceleration {
public:
    void accelerer() const override;
};

class AccelerationProgressive : public StrategieAcceleration {
public:
    void accelerer() const override;
};

class AccelerationQualif : public StrategieAcceleration {
public:
    void accelerer() const override;
};
