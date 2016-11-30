#ifndef ARITHMETICAL_DRAGONS_MULTIPLICATIONDRAGON_H
#define ARITHMETICAL_DRAGONS_MULTIPLICATIONDRAGON_H

#include "../Enemy.h"
#include "../../modifiers/Quests.h"


class MultiplicationDragon : public Enemy, public Multiplication {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    MultiplicationDragon();

    void refresh();

    bool checkAnswer(int answer);

    string getQuestion();
};


#endif