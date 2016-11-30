#ifndef ARITHMETICAL_DRAGONS_DRAGONS_H
#define ARITHMETICAL_DRAGONS_DRAGONS_H

#include "Enemy.h"
#include "Quests.h"


class AdditionDragon : public Enemy, public Addition {
public:
    AdditionDragon();

    void refresh();

    bool checkAnswer(int answer);
};

/*
class SubtractionDragon : public Enemy {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    SubtractionDragon();
};

class MultiplicationDragon : public Enemy {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    MultiplicationDragon();
};
*/

#endif
