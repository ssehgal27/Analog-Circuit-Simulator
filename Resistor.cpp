// Resistor.cpp- contains implementation of functions in header file
// 21st-Oct-2023  B.  Kaur         Created
// 23rd-Oct-2023  B.  Kaur           Defined Functions
#include "Resistor.h"
#include "AnalogCircuit.h"

Resistor::Resistor(double R_val, float R, float G, float B, std::string _name) {
    Red = R;
    Green = G;
    Blue = B;
    name = _name;
    resistance = R_val;
}

std::string Resistor::GetName() const {
    return name;
}

void Resistor::Update() {
    // Nothing specific to update for resistor based on provided logic
}

double Resistor::GetVoltage(double _current, double timestep) {
   
    return _current * resistance;           // V = I * R
}

void Resistor::Display(double xpos, double ypos) {
    AnalogCircuit::display(Red, Green, Blue);
    glColor3f(Red, Green, Blue);//RGB
    glBegin(GL_POINTS);
    glVertex2f(xpos, ypos);
    glEnd();
    glFlush();
}