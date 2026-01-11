#include <iostream>
#include "particles/particle.cpp"

int main() {
    Particle p{0.0,2.0,1.0};
    double dt = 0.1;

    for (int i = 0; i < 10; ++i) {
        p.advance(dt);
    }
    std::cout<< "Final x = " << p.x << "\n";
    return 0;
}