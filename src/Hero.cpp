#include "Hero.h"

static int Hero::default_health = 100;
static int Hero::default_attackForce = 20;
static int Hero::default_levelCapacity = 100;



Hero::Hero(int health, int attackForce, std::string name)
        : Unit(health, attackForce, name),
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


void Hero::updateLevel() {
    if (score_ >= default_levelCapacity * level_) {
        level_++;
    }
}
