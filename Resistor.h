// Resistor.h
// 21st-Oct-2023  S. Sehgal         Created
#ifndef _RESISTOR_H_
#define _RESISTOR_H_

#include "Component.h"

class Resistor : public Component {
private:
    double resistance;
public:
    Resistor(double R_val, float R, float G, float B, std::string _name);
    std::string GetName() const override;
    void Update() override;
    double GetVoltage(double _current, double timestep) override;
    void Display(double x, double y) override;
};

#endif // _RESISTOR_H_
