#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include "../Unit.h"

class Hero : public Unit {
private:
    int score_;
    int level_;

public:

    Hero(int health = 100,
         int attackForce = 20,
         std::string name = "Player");

    int getScore() const;

    int getLevel() const;

    void updateLevel();

    void updateScore(int nPoints);
};

#endif // HERO_H_INCLUDED