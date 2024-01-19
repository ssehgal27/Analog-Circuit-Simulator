//Inductor.cpp- contains implementation of functions in header file
// 21st-Oct-2023  B.  Kaur         Created
// 23rd-Oct-2023  B.  Kaur           Defined Functions
#include "Inductor.h"
#include "AnalogCircuit.h"

Inductor::Inductor(double L, float R, float G, float B, std::string _name) : inductance(L), initialCurrent(0.0),next_current(0.0) {
    this->Red = R;
    this->Green = G;
    this->Blue = B;
    this->name = _name;
}

std::string Inductor::GetName() const {
    return name;
}

void Inductor::Update() {
    initialCurrent = next_current; // Assuming this gets the current value for the inductor
}

double Inductor::GetVoltage(double _current, double timestep) {
    // V = L * di/dt
    double voltage = inductance * (_current - initialCurrent) / timestep;
    next_current = _current;
    return voltage;
}

void Inductor::Display(double xpos,double ypos) {
    AnalogCircuit::display(Red, Green, Blue); // Assuming this static function is meant to be used for displaying component info
    glColor3f(Red, Green, Blue);//RGB
    glBegin(GL_POINTS);
    glVertex2f(xpos, ypos);
    glEnd();
    glFlush();
}