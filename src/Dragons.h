#ifndef ARITHMETICAL_DRAGONS_DRAGONS_H
#define ARITHMETICAL_DRAGONS_DRAGONS_H

#include "Enemy.h"

class AdditionDragon : public Enemy {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    AdditionDragon();

    std::string generateQuestion();
};

class SubtractionDragon : public Enemy {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    SubtractionDragon();

    std::string generateQuestion();
};

class MultiplicationDragon : public Enemy {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    MultiplicationDragon();

    std::string generateQuestion();
};

#endif
