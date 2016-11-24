#include "Unit.h"


Unit::Unit(int health, int attackForce, std::string name)
        : health_(health),
          attackForce_(attackForce),
          name_(name) {}


int Unit::getHealth() const {
    return health_;
}


int Unit::getAttackForce() const {
    return attackForce_;
}


std::string Unit::getName() const {
    return name_;
}


void Unit::setHealth(int health) {
    Unit::health_ = health;
}


void Unit::attack(Unit* target) const {
    target->health_ -= attackForce_;
}


bool Unit::isAlive() const {
    return (health_ > 0);
}


//void Unit::takeDamage(int damage) {
//    health_ -= damage;
//}