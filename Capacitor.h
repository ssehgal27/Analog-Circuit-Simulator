// Capacitor.h
#ifndef _CAPACITOR_H_
#define _CAPACITOR_H_
// Capacitor.h
// 21st-Oct-2023  S. Sehgal         Created

#include "Component.h"

class Capacitor : public Component {
private:
    double capacitance;
    double initialvoltage;
    double Voltage;
public:
    Capacitor(double C, float R, float G, float B, std::string _name);
    std::string GetName() const override;
    void Update() override;
    double GetVoltage(double _current, double timestep) override;
    void Display(double x, double y) override;
};

#endif // _CAPACITOR_H_