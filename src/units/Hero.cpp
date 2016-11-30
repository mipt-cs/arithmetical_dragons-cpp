#include "Hero.h"



Hero::Hero(int health, int attackForce, std::string name)
        : Unit(name, health, attackForce),
          score_(0),
          level_(1) {}


int Hero::getScore() const {
    return score_;
}


int Hero::getLevel() const {
    return level_;
}


void Hero::updateScore(int nPoints) {
    score_ += nPoints;
    return;
}


//void Hero::updateLevel() {
//    if (score_ >= default_levelCapacity * level_) {
//        level_++;
//    }
//}
