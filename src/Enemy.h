#ifndef DRAGON_H_INCLUDED
#define DRAGON_H_INCLUDED

#include "Unit.h"

class Enemy : public Unit {
protected:
    int answer_;
    int killPoints_;

public:
    Enemy(int health,
          int attackForce,
          std::string name,
          int killPoints);

    int getKillPoints() const;

    bool checkAnswer(int answer) const;

    virtual std::string generateQuestion() = 0;
};

#endif // DRAGON_H_INCLUDED