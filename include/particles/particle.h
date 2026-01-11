#pragma once

struct Particle {
    double x;
    double v;
    double m;

    void advance(double dt);
};