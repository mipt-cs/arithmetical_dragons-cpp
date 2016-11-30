#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include <string>
#include <iostream>

#include "dragon.h"
#include "unit.h"

class Hero: public Unit
{
    int scores;
public:
    static const int default_health = 100;
    static const int default_attackForce = 20;

    Hero(int health = default_health, int aForce = default_attackForce)
            :Unit(health, aForce), scores(0)
    {}
    void attack (Dragon &drago)
    {
        std::string q = drago.generateQuestion();
        std::cout << "question: " << q;
        int answer;
        std::cin >> answer;
        if (drago.checkAnswer(answer))
        {
            drago.getDamage(attackForce);
            std::cout << "You hit dragon!" << std::endl;
        }
        else
        {
            getDamage(drago.attackForce);
            std::cout << "Dragon hits you!" << std::endl;
        }
    }

    int getScores() const {
        return scores;
    }

    void addScores(int delta){
        scores += delta;
    }
};

#endif // HERO_H_INCLUDED