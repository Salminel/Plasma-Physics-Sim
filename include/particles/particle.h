#pragma once

struct Particle {
    double x;
    double v;
    double m;

    void advance(double dt);
    void advance_leapfrog(double a, double dt);
    double kinetic_energy() const;

};