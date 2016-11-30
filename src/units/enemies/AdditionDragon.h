#ifndef ARITHMETICAL_DRAGONS_ADDITIONDRAGON_H
#define ARITHMETICAL_DRAGONS_ADDITIONDRAGON_H

#include "../Enemy.h"
#include "../../modifiers/Quests.h"


class AdditionDragon : public Enemy, public Addition {
public:
    static string default_name;
    static int default_health;
    static int default_attackForce;
    static int default_attackTime;
    static int default_killPoints;

    AdditionDragon();

    void refresh();

    bool checkAnswer(int answer);

    string getQuestion();
};


#endif