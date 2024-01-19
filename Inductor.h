// Inductor.h
// 21st-Oct-2023  S. Sehgal         Created
#ifndef _INDUCTOR_H_
#define _INDUCTOR_H_

#include "Component.h"

class Inductor : public Component {
private:
    double inductance;
    double initialCurrent;
    double next_current;
public:
    Inductor(double L, float R, float G, float B, std::string _name);
    std::string GetName() const override;
    void Update() override;
    double GetVoltage(double _current, double timestep) override;
    void Display(double x, double y) override;
};

#endif // _INDUCTOR_H_