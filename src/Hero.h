#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include "Unit.h"

class Hero : public Unit {
private:
    int score_;
    int level_;
    static int default_health;
    static int default_attackForce;
    static int default_levelCapacity;

public:
    Hero(int health = default_health,
         int attackForce = default_attackForce,
         std::string name = "Player");

    int getScore() const;

    int getLevel() const;

    void updateLevel();

    void updateScore(int nPoints);
};

#endif // HERO_H_INCLUDED