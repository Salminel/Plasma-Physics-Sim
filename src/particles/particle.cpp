#include "../../include/particles/particle.h"

void Particle::advance(double dt){
    x += v * dt;
}