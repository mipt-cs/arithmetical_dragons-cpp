#ifndef ARITHMETICAL_DRAGONS_SUBTRACTIONDRAGON_H
#define ARITHMETICAL_DRAGONS_SUBTRACTIONDRAGON_H

#include "../Enemy.h"
#include "../../modifiers/Quests.h"


class SubtractionDragon : public Enemy, public Subtraction {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    SubtractionDragon();

    void refresh();

    bool checkAnswer(int answer);
};


#endif