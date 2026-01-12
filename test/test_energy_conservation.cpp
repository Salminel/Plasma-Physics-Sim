#include <iostream>
#include <cmath>
#include "../src/particles/particle.cpp"

int main() {
    Particle p{0.0,3.0,1.0};

    double dt = 0.01;
    int steps = 1000;
    double E0 = p.kinetic_energy();
    double t = dt * steps;

    for (int i = 0; i < steps; ++i) {
        p.advance(dt);
    }

    double E1 = p.kinetic_energy();
    double error = std::abs(E1-E0);
    
    if (error < 1e-14) {
        std::cout << "PASS: error = " << error << "\n";
        return 0;
    } else {
        std::cout << "FAIL: error = " << error << "\n";
        return 1;
    }
}