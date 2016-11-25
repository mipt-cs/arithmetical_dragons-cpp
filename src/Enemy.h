#ifndef DRAGON_H_INCLUDED
#define DRAGON_H_INCLUDED

#include "Unit.h"


class Enemy : public Unit {
protected:
    int attackTime_;
    int killPoints_;
    int answer_;
    string question_;


public:
    Enemy(string name,
          int health,
          int attackForce,
          int attackTime,
          int killPoints);

    int getKillPoints() const;

    bool checkAnswer(int answer) const;

    virtual string generateQuestion() = 0;
};


#endif // DRAGON_H_INCLUDED