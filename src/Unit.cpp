#include "Unit.h"


Unit::Unit(string name, int health, int attackForce)
        : name_(name),
          health_(health),
          attackForce_(attackForce) {}


void Unit::attack(Unit *target) const {
    target->health_ -= attackForce_;
}


bool Unit::isAlive() const {
    return (health_ > 0);
}