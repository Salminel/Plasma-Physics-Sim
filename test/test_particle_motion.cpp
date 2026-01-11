#include <iostream>
#include <cmath>
#include "../src/particles/particle.cpp"

int main() {
    Particle p{0.0,3.0,1.0};

    double dt = 0.01;
    int steps = 1000;
    double t = dt * steps;

    for (int i = 0; i < steps; ++i) {
        p.advance(dt);
    }

    double x_exact = 3.0 * t;
    double error = std::abs(p.x - x_exact);
    
    if (error < 1e-12) {
        std::cout << "PASS: error = " << error << "\n";
        return 0;
    } else {
        std::cout << "FAIL: error = " << error << "\n";
        return 1;
    }
}