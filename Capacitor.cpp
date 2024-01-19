// Capacitor.cpp- contains implementation of functions in header file
// 21st-Oct-2023  B.  Kaur         Created
// 23rd-Oct-2023  B.  Kaur           Defined Functions

#include "Capacitor.h"
#include "AnalogCircuit.h"

Capacitor::Capacitor(double C, float R, float G, float B, std::string _name) : capacitance(C),  initialvoltage(0.0), Voltage(0.0) {
    this->Red = R;
    this->Green = G;
    this->Blue = B;
    this->name = _name;
}

std::string Capacitor::GetName() const {
    return name;
}

void Capacitor::Update() {
    initialvoltage = Voltage; // Assuming this gets the voltage across the capacitor
}

double Capacitor::GetVoltage(double _current, double timestep) {
    // V = Vprev + (1/C) * I * dt
    Voltage = initialvoltage + (1.0 / capacitance) * _current * timestep;
    return Voltage;
}

void Capacitor::Display(double xpos, double ypos) {
    AnalogCircuit::display(Red, Green, Blue);
    glColor3f(Red, Green, Blue);//RGB
    glBegin(GL_POINTS);
    glVertex2f(xpos, ypos);
    glEnd();
    glFlush();
}