#ifndef DRAGON_H_INCLUDED
#define DRAGON_H_INCLUDED

#include "../Unit.h"


class Enemy : public Unit {
protected:
    int attackTime_;
    int killPoints_;


public:
    Enemy(string name,
          int health,
          int attackForce,
          int attackTime,
          int killPoints);

    int getKillPoints() const;

    virtual string getQuestion() = 0;

    virtual void refresh() = 0;

    virtual bool checkAnswer(int answer) = 0;

    int getAttackTime() const;

    void setAttackTime(int attackTime);

};


#endif