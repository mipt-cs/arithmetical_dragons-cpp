#include "Enemy.h"


Enemy::Enemy(string name,
             int health,
             int attackForce,
             int attackTime,
             int killPoints) : Unit(name, health, attackForce),
                               attackTime_(attackTime),
                               killPoints_(killPoints) {}


int Enemy::getKillPoints() const {
    return killPoints_;
}


int Enemy::getAttackTime() const {
    return attackTime_;
}

void Enemy::setAttackTime(int attackTime) {
    Enemy::attackTime_ = attackTime;
}
