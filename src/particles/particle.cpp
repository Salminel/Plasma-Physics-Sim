#include "../../include/particles/particle.h"

void Particle::advance(double dt){
    x += v * dt;
}

void advance_leapfrog(double force, double dt){
    double a = force / m;
    v += a * dt;
    x += v * dt;
}

double Particle::kinetic_energy() const {
    return 0.5 * m* v * v;
}