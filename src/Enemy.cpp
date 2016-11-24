#include "Enemy.h"


Enemy::Enemy(int health, int attackForce, std::string name, int killPoints)
        : Unit::Unit(health, attackForce, name),
          killPoints_(killPoints) {}


int Enemy::getKillPoints() const {
    return killPoints_;
}


bool Enemy::checkAnswer(int answer) const {
    return answer == answer_;
}