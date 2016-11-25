#ifndef ARITHMETICAL_DRAGONS_DRAGONS_H
#define ARITHMETICAL_DRAGONS_DRAGONS_H

#include "Enemy.h"

class AdditionDragon : public Enemy {
public:
    static const string default_name;
    static const int default_health;
    static const int default_attackForce;
    static const int default_attackTime;
    static const int default_killPoints;

    AdditionDragon(string name = default_name,
                   int health = default_health,
                   int attackForce = default_attackForce,
                   int killPoints = default_killPoints,
                   int attackTime = default_attackTime);

    std::string generateQuestion();
};

class SubtractionDragon : public Enemy {
public:
    static const string default_name;
    static const int default_health;
    static const int default_attackForce;
    static const int default_attackTime;
    static const int default_killPoints;

    SubtractionDragon(string name = default_name,
                      int health = default_health,
                      int attackForce = default_attackForce,
                      int killPoints = default_killPoints,
                      int attackTime = default_attackTime);

    std::string generateQuestion();
};

class MultiplicationDragon : public Enemy {
public:
    static const string default_name;
    static const int default_health;
    static const int default_attackForce;
    static const int default_attackTime;
    static const int default_killPoints;

    MultiplicationDragon(string name = default_name,
                         int health = default_health,
                         int attackForce = default_attackForce,
                         int killPoints = default_killPoints,
                         int attackTime = default_attackTime);

    std::string generateQuestion();
};

#endif
