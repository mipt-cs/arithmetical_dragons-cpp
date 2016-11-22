#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <string>
#include <iostream>


class Hero : public Unit {
private:
    int scores;

public:
    static const int default_health = 100;
    static const int default_attackForce = 20;

    Hero(int health = default_health, int aForce = default_attackForce);

    int getScores();

    void addScores();
};


/**********************************************************************************************************************/
Hero::Hero(int health, int aForce) : Unit(health, aForce), scores(0) {}


void Hero::addScores() {

}


int Hero::getScores() {
    return 0;
}
/**********************************************************************************************************************/


#endif // HERO_H_INCLUDED
