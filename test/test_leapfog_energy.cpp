#include <iostream>
#include <cmath>
#include "../src/particles/particle.cpp"

int main() {
    Particle p{0.0,1.0,1.0};

    double dt = 0.01;
    double force = 1.0;
    double E0 = p.kinetic_energy();

    for (int i = 0; i < 10000; ++i) {
        p.advance_leapfrog(force, dt);
    }

    double E1 = p.kinetic_energy();
    double drift = std::abs(E1-E0);
    
    std::cout << "Energy dift = " << drift << "\n";

    if (drift < 1e-2) {
        return 0;
    } else {
        return 1;
    }
}